/*
 * XREFs of CreateScaledFont @ 0x1C01E4B98
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0063C80 (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01E489C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E49C8 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C00131E4 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GetCharDimensions @ 0x1C00C40F8 (GetCharDimensions.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall CreateScaledFont(HBRUSH a1, __int64 *a2, __int64 a3, INT a4, _DWORD *a5, _DWORD *a6, __int64 a7)
{
  unsigned int v10; // edi
  __int64 FontIndirectW; // rax
  __int64 v12; // rbx
  int CharDimensions; // eax
  INT a[24]; // [rsp+20h] [rbp-A8h] BYREF

  memset(a, 0, 0x5CuLL);
  *a2 = 0LL;
  v10 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (char *)a) )
  {
    a[0] = EngMulDiv(a[0], a4, 96);
    a[1] = EngMulDiv(a[1], a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)a, 0x88u);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v10 = 1;
      if ( a5 || a6 || a7 )
      {
        v12 = GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL), FontIndirectW, 1);
        CharDimensions = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL), v12, 1);
      }
    }
  }
  return v10;
}
