unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // r11d
  __int64 v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  __int64 v20; // rsi
  unsigned __int64 v21; // r15
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned int v25; // r11d
  __int64 v26; // r9
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  int v34; // [rsp+68h] [rbp+10h] BYREF
  char v35; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *v36; // [rsp+78h] [rbp+20h]

  v36 = a4;
  v4 = a3;
  v5 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v6 = a1;
  v8 = WORD1(v5);
  v9 = WORD1(v5);
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals);
  if ( WORD2(v5) )
  {
    v10 = a3 - 16LL * WORD2(v5);
    v11 = RtlpHpHeapGlobals ^ *(_QWORD *)v10 ^ v10;
    if ( (v11 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode(a1 + 16, v10 + 8);
      v12 = RtlpHpHeapGlobals ^ v10 ^ *(_DWORD *)v10;
      v13 = 16 * HIWORD(v12);
      v14 = (v10 - a2 + 4127) & 0xFFFFF000;
      v15 = ((v10 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)v10 ^ (unsigned int)v10) >> 16)) - a2) & 0xFFFFF000)
          - v14;
      v4 = v10;
      if ( v14 >= (((_DWORD)v10
                  + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)v10 ^ (unsigned int)v10) >> 16))
                  - (_DWORD)a2) & 0xFFFFF000) )
        v15 = 0;
      v16 = (((v10 & 0xFFF) + v13 + 4095) >> 12) + (v15 >> 12);
      v17 = v13 + 4095;
      v6 = a1;
      *(_QWORD *)(a1 + 56) -= v16 - (unsigned int)(v17 >> 12) - (unsigned __int16)v12;
      v9 += WORD1(v11);
    }
  }
  v18 = a2 + 48;
  v19 = v4 + 16LL * v9;
  if ( v19 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v20 = RtlpHpHeapGlobals ^ *(_QWORD *)v19 ^ v19;
    if ( (v20 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode(v6 + 16, v19 + 8);
      v25 = v19 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v19;
      v26 = 16 * HIWORD(v25);
      v27 = (v19 - a2 + 4127) & 0xFFFFF000;
      v28 = ((v19 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)v19 ^ (unsigned int)v19) >> 16)) - a2) & 0xFFFFF000)
          - v27;
      if ( v27 >= (((_DWORD)v19
                  + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)v19 ^ (unsigned int)v19) >> 16))
                  - (_DWORD)a2) & 0xFFFFF000) )
        v28 = 0;
      v29 = (((v19 & 0xFFF) + v26 + 4095) >> 12) + (v28 >> 12);
      v30 = v26 + 4095;
      v6 = a1;
      v31 = v29 - (unsigned int)(v30 >> 12) - (unsigned __int16)v25;
      v18 = a2 + 48;
      *(_QWORD *)(a1 + 56) -= v31;
      v9 += WORD1(v20);
    }
  }
  if ( (*(_DWORD *)(v6 + 176) & 1) != 0 )
  {
    v21 = v4 + 16LL * v9;
    if ( v21 < v18 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v22 = RtlpHpHeapGlobals ^ *(_QWORD *)v21 ^ v21;
      if ( (v22 & 0xFF000000000000LL) == 0 )
      {
        v34 = 0;
        RtlRbRemoveNode(v6 + 16, v21 + 8);
        v32 = RtlpHpVsChunkComputeCost(v4 + 16LL * v9, a2, &v34, &v35);
        *(_QWORD *)(a1 + 56) -= v34 + v32 - (unsigned int)(unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v21 ^ v21);
        v9 += WORD1(v22);
      }
    }
  }
  if ( v8 != v9 )
  {
    v23 = v4 + 16LL * v9;
    *(_WORD *)(v4 + 2) = WORD1(RtlpHpHeapGlobals) ^ v9 ^ WORD1(v4);
    if ( v23 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v23 + 4) = WORD2(RtlpHpHeapGlobals) ^ v9 ^ WORD2(v23);
  }
  *v36 = v9;
  return v4;
}
