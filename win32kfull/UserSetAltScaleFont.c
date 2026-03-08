/*
 * XREFs of UserSetAltScaleFont @ 0x1C010E47C
 * Callers:
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C8BB4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0025AF8 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
{
  int ObjectW; // eax
  unsigned int v5; // ebx
  __int64 FontIndirectW; // rax
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v9; // [rsp+24h] [rbp-74h]

  memset_0(&a, 0, 0x5CuLL);
  ObjectW = GreExtGetObjectW(a1, 92LL, &a);
  v5 = 0;
  if ( !ObjectW )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v9 = EngMulDiv(v9, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
  *a2 = FontIndirectW;
  LOBYTE(v5) = FontIndirectW != 0;
  return v5;
}
