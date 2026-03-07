__int64 __fastcall WbValidateHeapExecuteCallArguments(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v6; // esi
  _KPROCESS *Process; // rcx
  unsigned __int64 v8; // rax
  _OWORD *v9; // rax
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // r14d
  int v16; // r10d
  int v17; // r11d
  __int64 v18; // rax
  int v19; // ecx
  __int16 v21; // ax
  bool v22; // zf
  char v23; // al
  _KPROCESS *v24; // rdx
  unsigned __int64 v25; // rax
  _OWORD *v26; // rax
  int v27; // r8d

  v6 = 0;
  memset(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v21 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v21 == 332 || (v22 = v21 == 452, v23 = 0, v22) )
      v23 = 1;
    if ( v23 )
    {
      v24 = KeGetCurrentThread()->ApcState.Process;
      if ( v24[1].Affinity.StaticBitmap[30] )
      {
        if ( WORD2(v24[2].Affinity.StaticBitmap[20]) == 452 )
          *(_QWORD *)(a1 + 8) &= ~1uLL;
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 + 240 > 0x7FFFFFFF0000LL || v8 + 240 < v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v9 = *(_OWORD **)(a1 + 8);
  *((_OWORD *)a3 + 1) = *v9;
  *((_OWORD *)a3 + 2) = v9[1];
  *((_OWORD *)a3 + 3) = v9[2];
  *((_OWORD *)a3 + 4) = v9[3];
  *((_OWORD *)a3 + 5) = v9[4];
  *((_OWORD *)a3 + 6) = v9[5];
  *((_OWORD *)a3 + 7) = v9[6];
  *((_OWORD *)a3 + 8) = v9[7];
  v9 += 8;
  *((_OWORD *)a3 + 9) = *v9;
  *((_OWORD *)a3 + 10) = v9[1];
  *((_OWORD *)a3 + 11) = v9[2];
  *((_OWORD *)a3 + 12) = v9[3];
  *((_OWORD *)a3 + 13) = v9[4];
  *((_OWORD *)a3 + 14) = v9[5];
  *((_OWORD *)a3 + 15) = v9[6];
  *((_QWORD *)a3 + 41) = *(_QWORD *)(a1 + 8);
  v10 = a3[13];
  v11 = v10 & 0xF;
  a3[2] = v11;
  a3[3] = (unsigned __int8)v10 >> 4;
  if ( v11 != 1 )
  {
    if ( (v10 & 0xF) == 0 )
    {
      v12 = a3[18];
      if ( (v12 & 0xFFFFFFF) != 0 )
        goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v25 = *(_QWORD *)(a1 + 8);
  if ( v25 + 248 > 0x7FFFFFFF0000LL || v25 + 248 < v25 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v26 = *(_OWORD **)(a1 + 8);
  *((_OWORD *)a3 + 1) = *v26;
  *((_OWORD *)a3 + 2) = v26[1];
  *((_OWORD *)a3 + 3) = v26[2];
  *((_OWORD *)a3 + 4) = v26[3];
  *((_OWORD *)a3 + 5) = v26[4];
  *((_OWORD *)a3 + 6) = v26[5];
  *((_OWORD *)a3 + 7) = v26[6];
  *((_OWORD *)a3 + 8) = v26[7];
  v26 += 8;
  *((_OWORD *)a3 + 9) = *v26;
  *((_OWORD *)a3 + 10) = v26[1];
  *((_OWORD *)a3 + 11) = v26[2];
  *((_OWORD *)a3 + 12) = v26[3];
  *((_OWORD *)a3 + 13) = v26[4];
  *((_OWORD *)a3 + 14) = v26[5];
  *((_OWORD *)a3 + 15) = v26[6];
  *((_QWORD *)a3 + 32) = *((_QWORD *)v26 + 14);
  v12 = a3[18];
  if ( (v12 & 0xFFFFFFF) == 0 )
    return (unsigned int)-1073741811;
  v11 = a3[2];
LABEL_10:
  v13 = *((_QWORD *)a3 + 41) - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
  *(_QWORD *)a3 = v13;
  v14 = 4096;
  if ( (unsigned int)a3[15] > 0x1000 )
    v14 = a3[15];
  a3[81] = v14;
  v15 = a3[19];
  v16 = v15 & 0xFFFFFFF;
  v17 = a3[17];
  if ( (v15 & 0xFFFFFFF) != 0 )
  {
    v19 = a3[20] & 0xFFFFFFF;
    a3[78] = v19 + 16;
    a3[77] = v12 & 0xFFFFFFF;
    a3[76] = v17 & 0xFFFFFFF;
    *((_QWORD *)a3 + 37) = v13 + (v17 & 0xFFFFFFF);
    v18 = v15 & 0xFFFFFFF;
  }
  else
  {
    v18 = v17 & 0xFFFFFFF;
    v16 = v17 & 0xFFFFFFF;
    v19 = v12 & 0xFFFFFFF;
  }
  a3[72] = 16;
  a3[71] = v19;
  a3[70] = v16;
  *((_QWORD *)a3 + 34) = v13 + v18;
  if ( v11 == 1 )
  {
    v27 = a3[64];
    if ( (v15 & 0xFFFFFFF) != 0 )
    {
      a3[73] = a3[65];
      a3[79] = v27;
    }
    else
    {
      a3[73] = v27;
    }
  }
  a3[80] = a3[77] + 16 + v19;
  return v6;
}
