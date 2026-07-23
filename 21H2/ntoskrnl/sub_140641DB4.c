/*
 * XREFs of sub_140641DB4 @ 0x140641DB4
 * Callers:
 *     WbHeapExecuteCall @ 0x140642458 (WbHeapExecuteCall.c)
 * Callees:
 *     sub_1403F9834 @ 0x1403F9834 (sub_1403F9834.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall sub_140641DB4(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  __int16 v8; // cx
  unsigned __int64 v9; // rax
  _OWORD *v10; // rcx
  _OWORD *v11; // rcx
  int v12; // eax
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  int v15; // edx
  __int64 v16; // rbx
  int v17; // ecx
  int v18; // r9d
  unsigned int v19; // r14d
  int v20; // r10d
  int v21; // ecx
  __int64 v22; // r9
  int v23; // ecx

  v6 = 0;
  memset(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  v7 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v7 )
  {
    v8 = *(_WORD *)(v7 + 8);
    if ( v8 == 332 || v8 == 452 )
    {
      v9 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      if ( v9 )
      {
        if ( *(_WORD *)(v9 + 8) == 452 )
          *(_QWORD *)(a1 + 8) &= ~1uLL;
      }
    }
  }
  v10 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)(v10 + 15) > 0x7FFFFFFF0000LL || v10 + 15 < v10 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v10 = *(_OWORD **)(a1 + 8);
  }
  *((_OWORD *)a3 + 1) = *v10;
  *((_OWORD *)a3 + 2) = v10[1];
  *((_OWORD *)a3 + 3) = v10[2];
  *((_OWORD *)a3 + 4) = v10[3];
  *((_OWORD *)a3 + 5) = v10[4];
  *((_OWORD *)a3 + 6) = v10[5];
  *((_OWORD *)a3 + 7) = v10[6];
  *((_OWORD *)a3 + 8) = v10[7];
  v11 = v10 + 8;
  *((_OWORD *)a3 + 9) = *v11;
  *((_OWORD *)a3 + 10) = v11[1];
  *((_OWORD *)a3 + 11) = v11[2];
  *((_OWORD *)a3 + 12) = v11[3];
  *((_OWORD *)a3 + 13) = v11[4];
  *((_OWORD *)a3 + 14) = v11[5];
  *((_OWORD *)a3 + 15) = v11[6];
  *((_QWORD *)a3 + 41) = *(_QWORD *)(a1 + 8);
  v12 = a3[13];
  a3[2] = v12 & 0xF;
  a3[3] = (unsigned __int8)v12 >> 4;
  if ( (v12 & 0xF) == 1 )
  {
    v13 = *(_OWORD **)(a1 + 8);
    if ( (unsigned __int64)v13 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v13 + 248) < v13 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v13 = *(_OWORD **)(a1 + 8);
    }
    *((_OWORD *)a3 + 1) = *v13;
    *((_OWORD *)a3 + 2) = v13[1];
    *((_OWORD *)a3 + 3) = v13[2];
    *((_OWORD *)a3 + 4) = v13[3];
    *((_OWORD *)a3 + 5) = v13[4];
    *((_OWORD *)a3 + 6) = v13[5];
    *((_OWORD *)a3 + 7) = v13[6];
    *((_OWORD *)a3 + 8) = v13[7];
    v14 = v13 + 8;
    *((_OWORD *)a3 + 9) = *v14;
    *((_OWORD *)a3 + 10) = v14[1];
    *((_OWORD *)a3 + 11) = v14[2];
    *((_OWORD *)a3 + 12) = v14[3];
    *((_OWORD *)a3 + 13) = v14[4];
    *((_OWORD *)a3 + 14) = v14[5];
    *((_OWORD *)a3 + 15) = v14[6];
    *((_QWORD *)a3 + 32) = *((_QWORD *)v14 + 14);
  }
  else
  {
    sub_1403F9834();
    if ( a3[2] )
      return (unsigned int)-1073741811;
  }
  v15 = a3[18] & 0xFFFFFFF;
  if ( !v15 )
    return (unsigned int)-1073741811;
  v16 = *((_QWORD *)a3 + 41) - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
  *(_QWORD *)a3 = v16;
  v17 = 4096;
  if ( (unsigned int)a3[15] > 0x1000 )
    v17 = a3[15];
  a3[81] = v17;
  v18 = a3[19];
  v19 = a3[17] & 0xFFFFFFF;
  v20 = v18 & 0xFFFFFFF;
  if ( (v18 & 0xFFFFFFF) != 0 )
  {
    v21 = a3[20] & 0xFFFFFFF;
    a3[78] = v21 + 16;
    a3[77] = v15;
    a3[76] = v19;
    *((_QWORD *)a3 + 37) = v16 + v19;
    v22 = v18 & 0xFFFFFFF;
  }
  else
  {
    v22 = a3[17] & 0xFFFFFFF;
    v20 = a3[17] & 0xFFFFFFF;
    v21 = v15;
  }
  a3[72] = 16;
  a3[71] = v21;
  a3[70] = v20;
  *((_QWORD *)a3 + 34) = v16 + v22;
  if ( a3[2] == 1 )
  {
    v23 = a3[64];
    if ( (a3[19] & 0xFFFFFFF) != 0 )
    {
      a3[73] = a3[65];
      a3[79] = v23;
    }
    else
    {
      a3[73] = v23;
    }
  }
  a3[80] = a3[71] + a3[77] + 16;
  return v6;
}
