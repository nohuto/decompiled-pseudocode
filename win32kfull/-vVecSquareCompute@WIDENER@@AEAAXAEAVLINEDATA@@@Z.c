/*
 * XREFs of ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C02F538C
 * Callers:
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C01511BA (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C01515D0 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0016964 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02F3F58 (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 */

void __fastcall WIDENER::vVecSquareCompute(WIDENER *this, struct LINEDATA *a2)
{
  float v3; // xmm6_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  int v6; // ebx
  unsigned int v7; // r8d
  float v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((float *)this + 325);
  v4 = *(float *)STYLER::efWorldLength((__int64)this, (EFLOAT *)&v8, *((_QWORD *)a2 + 6));
  v8 = v4;
  if ( EFLOAT::bIsZero((EFLOAT *)&v8) )
    v5 = FP_0_0;
  else
    v5 = v3 / v4;
  v6 = *((_DWORD *)a2 + 13);
  bFToL((float)*((int *)a2 + 12) * v5, (int *)a2 + 14, 6u);
  bFToL((float)v6 * v5, (int *)a2 + 15, v7);
  *(_DWORD *)a2 |= 2u;
}
