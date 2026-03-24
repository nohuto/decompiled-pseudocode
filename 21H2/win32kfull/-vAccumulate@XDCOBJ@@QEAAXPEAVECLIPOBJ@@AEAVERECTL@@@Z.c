/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0145DBC
 * Callers:
 *     GreGradientFill @ 0x1C00B63E4 (GreGradientFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C0142FA0 (NtGdiFastPolyPolyline.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C01454C4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02BA3E0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00B7A80 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  _DWORD *v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax
  _QWORD *v8; // r9
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a3;
  v4 = *(_DWORD **)this;
  v9 = v3;
  v5 = v4[10] & 1;
  v6 = v4[2 * v5 + 254];
  v9.m128i_i32[2] = v3.m128i_i32[2] - v6;
  v9.m128i_i32[0] = _mm_cvtsi128_si32(v3) - v6;
  v7 = v4[2 * v5 + 255];
  v9.m128i_i32[1] = v3.m128i_i32[1] - v7;
  v9.m128i_i32[3] = v3.m128i_i32[3] - v7;
  if ( (v4[9] & 0x20) != 0 )
  {
    ERECTL::operator|=(v4 + 266, &v9);
    v4 = (_DWORD *)*v8;
  }
  if ( (v4[9] & 0x80u) != 0 )
    ERECTL::operator|=(v4 + 274, &v9);
}
