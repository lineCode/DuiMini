/************************************************************************
Copyright (c) 2017 MXWXZ
UI global class
************************************************************************/
#pragma once
#ifndef DUIMINI_CORE_UISYSTEM_H_
#define DUIMINI_CORE_UISYSTEM_H_

namespace DuiMini {
class DUIMINI_API UISystem {
 public:
    static void Init(HINSTANCE inst);
    static void Cleanup();
    static void Exit(const int code = 0);

    static void SetInstance(HINSTANCE inst) { instance_ = inst; }
    static HINSTANCE GetInstance() { return instance_; }

 public:
    static LPCTSTR GetCurrentDir();

 protected:
    static HINSTANCE instance_;
};

}   // namespace DuiMini

#endif  // DUIMINI_CORE_UISYSTEM_H_
