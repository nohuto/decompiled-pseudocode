/*
 * XREFs of bCvtVts @ 0x1C0274FAC
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C00056E0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C017FEA0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C017FF10 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C0002B7C (bFToL.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, int *a3, __int64 a4)
{
  __int64 v4; // rdi
  int *v5; // rbx
  int *v6; // rsi
  signed __int64 v8; // rsi
  unsigned int v9; // r8d
  float v10; // xmm1_4
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  unsigned int v17; // r8d

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v8 = (char *)a2 - (char *)a3;
      v9 = 6;
      do
      {
        v10 = (float)*(int *)((char *)v5 + v8 + 4) * *(float *)(a1 + 12);
        bFToL((float)*(int *)((char *)v5 + v8) * *(float *)a1, v5, v9);
        bFToL(v10, v5 + 1, v11);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
  else if ( a4 )
  {
    v12 = 6;
    do
    {
      v13 = (float)*v6;
      v14 = (float)v6[1];
      bFToL((float)(v14 * *(float *)(a1 + 8)) + (float)(v13 * *(float *)a1), v5, v12);
      bFToL((float)(v15 * v14) + (float)(v16 * v13), v5 + 1, v17);
      v6 += 2;
      v5 += 2;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
