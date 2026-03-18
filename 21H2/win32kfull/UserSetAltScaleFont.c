/*
 * XREFs of UserSetAltScaleFont @ 0x1C00C5A80
 * Callers:
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     SetIconMetrics @ 0x1C00C6CF4 (SetIconMetrics.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C0158F68 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C00131E4 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
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
