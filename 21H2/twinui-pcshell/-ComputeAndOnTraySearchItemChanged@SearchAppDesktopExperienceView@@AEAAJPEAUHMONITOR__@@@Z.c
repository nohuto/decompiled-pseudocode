/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800757C4
 * Callers:
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180075778 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18001A464 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18001A67C (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x18009B1DC (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180265FBC (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2)
{
  int MonitorInformation; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  HKEY v7; // rcx
  int v8; // eax
  unsigned int CortanaWidthWithoutGutter; // eax
  HMONITOR v10; // r8
  LANGID ThreadUILanguage; // ax
  struct tagRECT v12; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v14; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  bool v16; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF

  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v12,
                         &v14,
                         &v13,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v17,
                         &v16);
  v5 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v16 = 0;
    SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, a2, &v16);
    v8 = SHRegSetBOOL(v7, L"Software\\Microsoft\\Windows\\CurrentVersion\\Search", L"TraySearchBoxVisible", v16);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5C3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
    CortanaWidthWithoutGutter = GetCortanaWidthWithoutGutter(&v12, 1);
    ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)CortanaWidthWithoutGutter, (__int64)a2, v10);
    if ( v17 != 2 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      IsBiDiLocale(ThreadUILanguage);
    }
    *(float *)&v13.left = (float)v12.left;
    *(float *)&v13.top = (float)v12.top;
    *(float *)&v13.right = (float)(v12.right - v12.left);
    result = 0LL;
    *(float *)&v13.bottom = (float)(v12.bottom - v12.top);
    *(struct tagRECT *)((char *)this + 188) = v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BF,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return v5;
  }
  return result;
}
