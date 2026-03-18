/*
 * XREFs of UserSetAltScaleFont @ 0x1C0078308
 * Callers:
 *     SetIconMetrics @ 0x1C00761C4 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C0078690 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C7A54 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C007B6E8 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
{
  int ObjectW; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v9; // [rsp+24h] [rbp-74h]

  memset_0(&a, 0, 0x5CuLL);
  ObjectW = GreExtGetObjectW(a1, 92LL, (__int64)&a);
  v5 = 0;
  if ( !ObjectW )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v9 = EngMulDiv(v9, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v6 = GreCreateFontIndirectW(&a, 136LL);
  *a2 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
