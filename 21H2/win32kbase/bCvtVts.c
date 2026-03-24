/*
 * XREFs of bCvtVts @ 0x1C020088C
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C00C0480 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1C00C8430 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C013CB00 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C0081930 (bFToL.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, int *a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  int *v6; // rbx
  int *v7; // rsi
  signed __int64 v9; // rsi
  unsigned int v10; // r8d
  float v11; // xmm0_4
  float v12; // xmm1_4
  unsigned int v13; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  unsigned int v21; // r8d
  unsigned int v22; // r8d

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v9 = (char *)a2 - (char *)a3;
      v10 = 6;
      do
      {
        v11 = (float)*(int *)((char *)v6 + v9) * *(float *)a1;
        v12 = (float)*(int *)((char *)v6 + v9 + 4) * *(float *)(a1 + 12);
        if ( a5 )
        {
          if ( !(unsigned int)bFToL(v11, v6, v10) || !(unsigned int)bFToL(v12, v6 + 1, v13) )
            return 0LL;
        }
        else
        {
          bFToL(v11, v6, v10);
          bFToL(v12, v6 + 1, v15);
        }
        v6 += 2;
        --v5;
      }
      while ( v5 );
    }
  }
  else if ( a4 )
  {
    v16 = 6;
    do
    {
      v17 = (float)v7[1];
      v18 = (float)*v7;
      v19 = (float)(v17 * *(float *)(a1 + 8)) + (float)(v18 * *(float *)a1);
      v20 = (float)(v17 * *(float *)(a1 + 12)) + (float)(v18 * *(float *)(a1 + 4));
      if ( a5 )
      {
        if ( !(unsigned int)bFToL(v19, v6, v16) || !(unsigned int)bFToL(v20, v6 + 1, v21) )
          return 0LL;
      }
      else
      {
        bFToL(v19, v6, v16);
        bFToL(v20, v6 + 1, v22);
      }
      v7 += 2;
      v6 += 2;
      --v5;
    }
    while ( v5 );
  }
  return 1LL;
}
