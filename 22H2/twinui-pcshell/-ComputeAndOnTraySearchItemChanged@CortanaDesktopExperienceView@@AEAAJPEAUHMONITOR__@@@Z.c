/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x18027A520
 * Callers:
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027F310 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180280890 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x18009B1BC (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18027BF60 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18027DC00 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        CortanaDesktopExperienceView *this,
        HMONITOR a2)
{
  int MonitorInformation; // ebx
  __int64 v5; // rdx
  unsigned int CortanaWidthWithoutGutter; // eax
  HMONITOR v8; // r8
  float v9; // xmm6_4
  LANGID ThreadUILanguage; // ax
  float right; // xmm0_4
  struct tagRECT v12; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v14; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  bool v16; // [rsp+B0h] [rbp+30h] BYREF
  int v17; // [rsp+B8h] [rbp+38h] BYREF

  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v12,
                         &v14,
                         &v13,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v17,
                         &v16);
  if ( MonitorInformation < 0 )
  {
    v5 = 1833LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  CortanaWidthWithoutGutter = GetCortanaWidthWithoutGutter(&v12, 1);
  v9 = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                (ExperienceManagerUtils *)CortanaWidthWithoutGutter,
                (__int64)a2,
                v8);
  if ( v17 == 2 || (ThreadUILanguage = GetThreadUILanguage(), (unsigned int)IsBiDiLocale(ThreadUILanguage)) && v17 )
    right = (float)v13.left - v9;
  else
    right = (float)v13.right;
  *(float *)&v14.left = right;
  *(float *)&v14.top = (float)v13.top;
  *(float *)&v13.left = (float)v12.left;
  *(float *)&v14.bottom = (float)(v13.bottom - v13.top);
  *(float *)&v14.right = v9;
  *(float *)&v13.top = (float)v12.top;
  *(float *)&v13.right = (float)(v12.right - v12.left);
  *(float *)&v13.bottom = (float)(v12.bottom - v12.top);
  MonitorInformation = CortanaDesktopExperienceView::OnTraySearchItemChanged((char *)this + 16, &v13, &v14);
  if ( MonitorInformation < 0 )
  {
    v5 = 1856LL;
    goto LABEL_3;
  }
  return 0LL;
}
