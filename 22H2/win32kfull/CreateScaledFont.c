/*
 * XREFs of CreateScaledFont @ 0x1C01BF458
 * Callers:
 *     GetWindowNCMetricsForDpi @ 0x1C00F0B8C (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00F0E0C (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01BF14C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01BF278 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     GetCharDimensions @ 0x1C007A270 (GetCharDimensions.c)
 *     GreCreateFontIndirectW @ 0x1C007B6E8 (GreCreateFontIndirectW.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
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
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (__int64)&a) )
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
