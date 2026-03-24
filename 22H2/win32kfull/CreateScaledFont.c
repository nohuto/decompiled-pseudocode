/*
 * XREFs of CreateScaledFont @ 0x1C01E9E50
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0047A24 (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01E9B4C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9C78 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C00B9E30 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x1C00E3078 (GetCharDimensions.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall CreateScaledFont(HSURF a1, __int64 *a2, __int64 a3, INT a4, _DWORD *a5, _DWORD *a6, __int64 a7)
{
  unsigned int v10; // edi
  __int64 FontIndirectW; // rax
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
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
        CharDimensions = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
      }
    }
  }
  return v10;
}
