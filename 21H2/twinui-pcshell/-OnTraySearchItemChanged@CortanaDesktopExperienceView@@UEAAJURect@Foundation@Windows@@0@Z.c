/*
 * XREFs of ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18027DDB0
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x18027A6D0 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180010250 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x18009B1DC (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ??$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@@SAXAEAM000@Z @ 0x180278B0C (--$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18027C110 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18027CC1C (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnTraySearchItemChanged(__int64 a1, float *a2, __int64 a3)
{
  float v4; // xmm6_4
  float v7; // xmm0_4
  HMONITOR v8; // rsi
  int MonitorInformation; // edi
  __int64 v10; // rdx
  unsigned int CortanaWidthWithoutGutter; // eax
  HMONITOR v13; // r8
  int v14; // eax
  LONG right; // r12d
  LONG left; // r15d
  int v17; // r13d
  int v18; // esi
  __m128i v19; // xmm0
  LANGID ThreadUILanguage; // ax
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  LANGID v24; // ax
  int v25; // eax
  int v26; // ecx
  LONG top; // r14d
  LONG bottom; // edi
  __m128i v29; // xmm0
  float v30; // xmm1_4
  __m128i v31; // xmm0
  LANGID v32; // ax
  int v33; // eax
  LANGID v34; // ax
  __m128i v35; // xmm0
  float v36; // xmm1_4
  bool v37[4]; // [rsp+48h] [rbp-39h] BYREF
  int v38; // [rsp+4Ch] [rbp-35h] BYREF
  struct tagRECT v39; // [rsp+50h] [rbp-31h] BYREF
  struct tagRECT v40; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v41; // [rsp+70h] [rbp-11h] BYREF
  RECT rc; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v4 = a2[1] + a2[3];
  if ( IsSearchAndCortanaSplitEnabled() )
  {
    v7 = *a2 + a2[2];
    rc.left = (int)*a2;
    rc.top = (int)a2[1];
    rc.right = (int)v7;
    rc.bottom = (int)v4;
    v8 = MonitorFromRect(&rc, 0);
    MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                           (CortanaDesktopExperienceView *)(a1 - 16),
                           v8,
                           &v40,
                           &v41,
                           &v39,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v38,
                           v37);
    if ( MonitorInformation >= 0 )
    {
      v37[0] = 0;
      MonitorInformation = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                             (CortanaDesktopExperienceView *)(a1 - 16),
                             v8,
                             v37);
      if ( MonitorInformation >= 0 )
      {
        CortanaWidthWithoutGutter = GetCortanaWidthWithoutGutter(&v40, 1);
        v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                (ExperienceManagerUtils *)CortanaWidthWithoutGutter,
                (__int64)v8,
                v13);
        right = v39.right;
        left = v39.left;
        v17 = v39.right - v39.left;
        v18 = v14;
        if ( ((v38 - 1) & 0xFFFFFFFD) != 0 )
        {
          v19 = _mm_cvtsi32_si128(v39.left);
        }
        else
        {
          ThreadUILanguage = GetThreadUILanguage();
          v21 = IsBiDiLocale(ThreadUILanguage);
          v22 = right;
          if ( v21 )
            v22 = left;
          v19 = _mm_cvtsi32_si128(v22);
        }
        v23 = v17;
        *(_DWORD *)(a1 + 180) = _mm_cvtepi32_ps(v19).m128_u32[0];
        if ( v37[0] )
          v23 = v18;
        *(float *)(a1 + 188) = (float)v23;
        v24 = GetThreadUILanguage();
        v25 = IsBiDiLocale(v24);
        v26 = v38;
        if ( v25 && ((v38 - 1) & 0xFFFFFFFD) == 0 )
          *(float *)(a1 + 180) = *(float *)(a1 + 180) - *(float *)(a1 + 188);
        top = v39.top;
        bottom = v39.bottom;
        if ( ((v26 - 1) & 0xFFFFFFFD) != 0 )
          v29 = _mm_cvtsi32_si128(v39.bottom);
        else
          v29 = _mm_cvtsi32_si128(v39.top);
        *(_DWORD *)(a1 + 184) = _mm_cvtepi32_ps(v29).m128_u32[0];
        v30 = (float)(bottom - top);
        *(float *)(a1 + 192) = v30;
        if ( (float)(v30 + *(float *)(a1 + 184)) > v4 )
          *(float *)(a1 + 184) = v4 - v30;
        if ( ((v26 - 1) & 0xFFFFFFFD) != 0 )
        {
          v31 = _mm_cvtsi32_si128(left);
        }
        else
        {
          v32 = GetThreadUILanguage();
          v33 = IsBiDiLocale(v32);
          v26 = v38;
          if ( v33 )
            right = left;
          v31 = _mm_cvtsi32_si128(right);
        }
        *(_DWORD *)(a1 + 204) = _mm_cvtepi32_ps(v31).m128_u32[0];
        if ( v37[0] )
        {
          v34 = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(v34) )
            v18 = -v18;
          v26 = v38;
          *(float *)(a1 + 204) = (float)v18 + *(float *)(a1 + 204);
        }
        *(float *)(a1 + 212) = (float)v17;
        if ( ((v26 - 1) & 0xFFFFFFFD) != 0 )
          v35 = _mm_cvtsi32_si128(bottom);
        else
          v35 = _mm_cvtsi32_si128(top);
        *(_DWORD *)(a1 + 208) = _mm_cvtepi32_ps(v35).m128_u32[0];
        v36 = (float)(bottom - top);
        *(float *)(a1 + 216) = v36;
        if ( (float)(v36 + *(float *)(a1 + 208)) > v4 )
          *(float *)(a1 + 208) = v4 - v36;
        return 0LL;
      }
      v10 = 613LL;
    }
    else
    {
      v10 = 610LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  if ( (float)(*(float *)(a3 + 12) + *(float *)(a3 + 4)) > v4 )
    *(float *)(a3 + 4) = v4 - *(float *)(a3 + 12);
  *(_OWORD *)(a1 + 180) = *(_OWORD *)a3;
  CortanaProactiveTelemetry::CortanaExperienceManager_SetPositioningAnchorRect<float &,float &,float &,float &>(
    (int *)(a1 + 180),
    (int *)(a1 + 184),
    (int *)(a1 + 188),
    (int *)(a1 + 192));
  return 0LL;
}
