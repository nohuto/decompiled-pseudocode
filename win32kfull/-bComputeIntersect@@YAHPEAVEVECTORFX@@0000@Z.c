/*
 * XREFs of ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C02F323C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C02F3FE8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0016964 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 */

__int64 __fastcall bComputeIntersect(
        struct EVECTORFX *a1,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  unsigned int v14; // r8d
  int v15; // edx
  struct EVECTORFX *v16; // rcx
  int v17; // r9d
  float v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+44h] [rbp+Ch] BYREF

  v6 = (float)-*((_DWORD *)a4 + 1);
  v7 = (float)*(int *)a4;
  v8 = (float)*(int *)a2;
  v9 = (float)((float)(*((_DWORD *)a3 + 1) - *((_DWORD *)a1 + 1)) * v7)
     + (float)((float)(*(_DWORD *)a3 - *(_DWORD *)a1) * v6);
  v19 = (float)((float)*((int *)a2 + 1) * v7) + (float)(v8 * v6);
  if ( EFLOAT::bIsZero((EFLOAT *)&v19) )
    return 0LL;
  v19 = 0.0;
  v20 = 0;
  v12 = v9 / v10;
  v13 = (float)(v9 / v10) * v11;
  if ( !(unsigned int)bFToL(v12 * v8, (int *)&v19, 6u) )
    return 0LL;
  if ( (unsigned int)bFToL(v13, &v20, v14)
    && (unsigned int)(LODWORD(v19) + 0x3FFFFFFF) <= 0x7FFFFFFD
    && (unsigned int)(v20 + 0x3FFFFFFF) <= 0x7FFFFFFD
    && (v15 = LODWORD(v19) + *(_DWORD *)a1,
        v16 = a5,
        v17 = v20 + *((_DWORD *)a1 + 1),
        *(_DWORD *)a5 = v15,
        *((_DWORD *)v16 + 1) = v17,
        (unsigned int)(v15 + 0x3FFFFFFF) <= 0x7FFFFFFD)
    && (unsigned int)(v17 + 0x3FFFFFFF) <= 0x7FFFFFFD )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
