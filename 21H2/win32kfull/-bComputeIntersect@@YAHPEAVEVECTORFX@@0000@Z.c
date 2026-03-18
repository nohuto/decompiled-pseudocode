/*
 * XREFs of ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C0131128
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C0130EE8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 */

__int64 __fastcall bComputeIntersect(
        struct EVECTORFX *a1,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  _DWORD *v9; // r8
  float v10; // xmm4_4
  float v11; // xmm5_4
  int v12; // ecx
  float v13; // xmm3_4
  unsigned int v14; // r8d
  int v15; // edx
  struct EVECTORFX *v16; // rcx
  int v17; // r9d
  float v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+44h] [rbp+Ch] BYREF

  v6 = (float)*(int *)a4;
  v7 = (float)*((int *)a2 + 1);
  v8 = (float)(v6 * v7) + (float)((float)*(int *)a2 * (float)-*((_DWORD *)a4 + 1));
  v19 = v8;
  if ( EFLOAT::bIsZero((EFLOAT *)&v19) )
    return 0LL;
  v12 = v9[1] - *((_DWORD *)a1 + 1);
  v19 = 0.0;
  v20 = 0;
  v13 = (float)((float)((float)v12 * v6) + (float)((float)(*v9 - *(_DWORD *)a1) * v10)) / v8;
  if ( !(unsigned int)bFToL(v13 * v11, (int *)&v19, 6u) )
    return 0LL;
  if ( (unsigned int)bFToL(v7 * v13, &v20, v14)
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
