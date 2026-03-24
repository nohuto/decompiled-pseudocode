/*
 * XREFs of ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02CE8D8
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0140328 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C02CF0A4 (-vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0122478 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 */

EFLOAT *__fastcall STYLER::efWorldLength(__int64 a1, EFLOAT *a2, __int64 a3)
{
  int v4; // ecx
  float v5; // xmm2_4
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  EXFORMOBJ::bXform((EXFORMOBJ *)(a1 + 808), (struct _VECTORFX *)&v7, (struct _VECTORL *)&v7, 1uLL);
  v4 = HIDWORD(v7);
  *(_DWORD *)a2 = 0;
  if ( __PAIR64__(v4, v7) )
  {
    v5 = (float)(int)v7;
    *(float *)a2 = (float)(int)v7;
    *(float *)a2 = (float)((float)v4 * (float)v4) + (float)(v5 * *(float *)a2);
    EFLOAT::vSqrt(a2);
  }
  else
  {
    *(_DWORD *)a2 = FP_0_0;
  }
  return a2;
}
