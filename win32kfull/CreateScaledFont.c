/*
 * XREFs of CreateScaledFont @ 0x1C01C05F8
 * Callers:
 *     GetWindowNCMetricsForDpi @ 0x1C00A43A0 (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00A4620 (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01C02EC (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C0418 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0025AF8 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     GetCharDimensions @ 0x1C010F9F4 (GetCharDimensions.c)
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall CreateScaledFont(HBRUSH a1, __int64 *a2, __int64 a3, INT a4, _DWORD *a5, _DWORD *a6, __int64 a7)
{
  unsigned int v10; // edi
  __int64 FontIndirectW; // rax
  __int64 v12; // rbx
  int CharDimensions; // eax
  INT a; // [rsp+20h] [rbp-A8h] BYREF
  INT v16; // [rsp+24h] [rbp-A4h]

  memset_0(&a, 0, 0x5CuLL);
  *a2 = 0LL;
  v10 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, &a) )
  {
    a = EngMulDiv(a, a4, 96);
    v16 = EngMulDiv(v16, a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v10 = 1;
      if ( a5 || a6 || a7 )
      {
        v12 = GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), FontIndirectW, 1);
        CharDimensions = GetCharDimensions(*(_QWORD *)(gpDispInfo + 64LL), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), v12, 1);
      }
    }
  }
  return v10;
}
