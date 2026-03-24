/*
 * XREFs of UserSetAltScaleFont @ 0x1C00E40D4
 * Callers:
 *     SetIconMetrics @ 0x1C00E1F70 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C00E2938 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D65BC (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C00B9E30 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall UserSetAltScaleFont(HSURF a1, __int64 *a2)
{
  int ObjectW; // eax
  unsigned int v5; // ebx
  __int64 FontIndirectW; // rax
  INT a[24]; // [rsp+20h] [rbp-78h] BYREF

  memset(a, 0, 0x5CuLL);
  ObjectW = GreExtGetObjectW(a1, 92LL, (char *)a);
  v5 = 0;
  if ( !ObjectW )
    return 0LL;
  a[0] = EngMulDiv(a[0], 96, *(unsigned __int16 *)(gpsi + 6998LL));
  a[1] = EngMulDiv(a[1], 96, *(unsigned __int16 *)(gpsi + 6998LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)a, 0x88u);
  *a2 = FontIndirectW;
  LOBYTE(v5) = FontIndirectW != 0;
  return v5;
}
