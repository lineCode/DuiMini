/************************************************************************
Copyright (c) 2017 MXWXZ
UI���ѹ����
************************************************************************/
#pragma once
#ifndef E__CODE_DUIMINI_DUIMINI_UTILS_UIUNZIP_H_
#define E__CODE_DUIMINI_DUIMINI_UTILS_UIUNZIP_H_

namespace DuiMini {
class DUIMINI_API UIUnzip {
 public:
    static ZFile OpenZip(LPCTSTR path);
    static void CloseZip(ZFile fp);
    static long LocateZipItem(ZFile fp, LPCTSTR path);
    static bool UnZipData(ZFile fp, BYTE* data);
};

}   // namespace DuiMini

#endif  // E__CODE_DUIMINI_DUIMINI_UTILS_UIUNZIP_H_