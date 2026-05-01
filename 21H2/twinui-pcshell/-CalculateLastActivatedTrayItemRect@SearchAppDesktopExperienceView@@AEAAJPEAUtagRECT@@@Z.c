/*
 * XREFs of ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001A154
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001AB54 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002A4C0 (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18008AFEC (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001A420 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18001A464 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18001A67C (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetTaskbarSearchBoxWidth@@YAHPEBUtagRECT@@_N@Z @ 0x1800C0088 (-GetTaskbarSearchBoxWidth@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180265FBC (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  float v8; // xmm9_4
  HMONITOR v9; // r14
  int MonitorInformation; // ebx
  __int64 v11; // rdx
  __int64 result; // rax
  HKEY v13; // rcx
  int v14; // eax
  bool v15; // dl
  int TaskbarSearchBoxWidth; // ebx
  HMONITOR v17; // rdx
  int PerMonitorDpi; // eax
  int v19; // eax
  LONG right; // esi
  LONG left; // r14d
  int v22; // r12d
  int v23; // ebx
  __m128i v24; // xmm7
  LANGID ThreadUILanguage; // ax
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm6_4
  LANGID v29; // ax
  __m128i v30; // xmm1
  float v31; // xmm1_4
  float v32; // xmm2_4
  int v33; // [rsp+28h] [rbp-79h]
  bool v34[4]; // [rsp+48h] [rbp-59h] BYREF
  int v35; // [rsp+4Ch] [rbp-55h] BYREF
  struct tagRECT v36; // [rsp+50h] [rbp-51h] BYREF
  struct tagRECT v37; // [rsp+60h] [rbp-41h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp-31h] BYREF
  RECT rc; // [rsp+80h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = *((float *)this + 47);
  v4 = *((float *)this + 48);
  v6 = (int)v2;
  v7 = v2 + *((float *)this + 49);
  rc.left = v6;
  v8 = v4 + *((float *)this + 50);
  rc.top = (int)v4;
  rc.right = (int)v7;
  rc.bottom = (int)v8;
  v9 = MonitorFromRect(&rc, 0);
  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         v9,
                         &v37,
                         &v38,
                         &v36,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v35,
                         v34);
  if ( MonitorInformation < 0 )
  {
    v11 = 1868LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v33);
    return (unsigned int)MonitorInformation;
  }
  v34[0] = 0;
  MonitorInformation = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v9, v34);
  if ( MonitorInformation < 0 )
  {
    v11 = 1871LL;
    goto LABEL_3;
  }
  v14 = SHRegSetBOOL(v13, L"Software\\Microsoft\\Windows\\CurrentVersion\\Search", L"TraySearchBoxVisible", v34[0]);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x750,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v14,
      v33);
  TaskbarSearchBoxWidth = GetTaskbarSearchBoxWidth(&v37, v15);
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v9, v17);
  v19 = MulDiv(TaskbarSearchBoxWidth, PerMonitorDpi, 96);
  right = v36.right;
  left = v36.left;
  v22 = v19;
  v23 = v36.right - v36.left;
  if ( ((v35 - 1) & 0xFFFFFFFD) != 0 )
  {
    v24 = _mm_cvtsi32_si128(v36.left);
  }
  else
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      right = left;
    v24 = _mm_cvtsi32_si128(right);
  }
  LODWORD(v26) = _mm_cvtepi32_ps(v24).m128_u32[0];
  if ( v34[0] )
    v23 = v22;
  v27 = (float)v23;
  v28 = v26;
  v29 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v29) && (v35 == 1 || v35 == 3) )
    v28 = v26 - v27;
  if ( ((v35 - 1) & 0xFFFFFFFD) != 0 )
    v30 = _mm_cvtsi32_si128(v36.bottom);
  else
    v30 = _mm_cvtsi32_si128(v36.top);
  v31 = _mm_cvtepi32_ps(v30).m128_f32[0];
  v32 = (float)(v36.bottom - v36.top);
  if ( (float)(v32 + v31) > v8 )
    v31 = v8 - v32;
  a2->left = (int)v28;
  result = 0LL;
  a2->top = (int)v31;
  a2->right = (int)(float)(v27 + v28);
  a2->bottom = (int)(float)(v32 + v31);
  return result;
}
