/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00E6260
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C000BDA0 (NtGdiFastPolyPolyline.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02ACE70 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C008234C (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  XDCOBJ *v4; // r9
  _DWORD *v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  int v8; // eax
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a3;
  v4 = this;
  v5 = *(_DWORD **)this;
  v9 = v3;
  v6 = v5[10] & 1;
  v7 = v5[2 * v6 + 254];
  v9.m128i_i32[2] = v3.m128i_i32[2] - v7;
  v9.m128i_i32[0] = _mm_cvtsi128_si32(v3) - v7;
  v8 = v5[2 * v6 + 255];
  v9.m128i_i32[1] = v3.m128i_i32[1] - v8;
  v9.m128i_i32[3] = v3.m128i_i32[3] - v8;
  if ( (v5[9] & 0x20) != 0 )
    ERECTL::operator|=(v5 + 266, &v9);
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 36LL) & 0x80u) != 0 )
    ERECTL::operator|=((_DWORD *)(*(_QWORD *)v4 + 1096LL), &v9);
}
