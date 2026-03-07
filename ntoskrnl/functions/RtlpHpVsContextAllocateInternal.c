char *__fastcall RtlpHpVsContextAllocateInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int v7; // r13d
  _DWORD *v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // edi
  unsigned __int64 *v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r8
  int v16; // edx
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // rdx
  unsigned int v27; // r11d
  char *v28; // rdi
  __int64 v29; // rcx
  char *v30; // rsi
  int v31; // eax
  __int64 v33; // r8
  int v34; // r9d
  __int16 v35; // cx
  int v36; // r9d
  __int16 v37; // ax
  __int64 v38; // rsi
  unsigned int v39; // [rsp+70h] [rbp+8h]

  v7 = a3;
  if ( a2 != a3 )
    v7 = a3 + 2;
  v9 = a6;
  v10 = a5;
  v39 = (*(_DWORD *)(a1 + 176) & 1) + ((v7 + 15) >> 4);
  v11 = (v39 + 1) << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a5);
      v10 = a5;
    }
  }
  v12 = (unsigned __int64 *)(a1 + 16);
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *v12;
    if ( (v13 & 1) == 0 )
      goto LABEL_11;
    if ( v14 )
    {
      v14 ^= (unsigned __int64)v12;
LABEL_11:
      v15 = 0LL;
      v16 = v13 & 1;
      if ( !v14 )
        goto LABEL_17;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v14 - 8) ^ RtlpHpHeapGlobals ^ (v14 - 8);
        if ( v11 < v17 )
        {
          v18 = *(_QWORD *)v14;
          v15 = (_QWORD *)v14;
          if ( v16 && v18 )
          {
            v14 ^= v18;
            goto LABEL_16;
          }
        }
        else
        {
          if ( v11 <= v17 )
            goto LABEL_18;
          v18 = *(_QWORD *)(v14 + 8);
          if ( v16 && v18 )
          {
            v14 ^= v18;
            goto LABEL_16;
          }
        }
        v14 = v18;
LABEL_16:
        if ( !v14 )
          goto LABEL_17;
      }
    }
    v15 = 0LL;
LABEL_17:
    v14 = (unsigned __int64)v15;
LABEL_18:
    if ( v14 )
      break;
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), v10);
    *v9 = 0;
    v38 = RtlpHpVsSubsegmentCreate(a1, v7, a4, v10);
    if ( !v38 )
      return 0LL;
    *a6 = 1;
    if ( (a4 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a5);
    RtlpHpVsContextAddSubsegment(a1, v38);
    v10 = a5;
    v9 = a6;
  }
  v19 = (_QWORD *)(v14 - 8);
  v20 = RtlpHpHeapGlobals ^ *(_QWORD *)(v14 - 8);
  v21 = v14 - 8;
  if ( ((HIDWORD(v20) ^ ((v14 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)v14 ^ (unsigned __int8)v19);
  }
  else
  {
    v22 = (v20 ^ (v14 - 8)) >> 32;
    if ( (_WORD)v22 )
    {
      v21 -= 16LL * (unsigned __int16)v22;
      v23 = RtlpHpHeapGlobals ^ *(_QWORD *)v21;
      if ( ((HIDWORD(v23) ^ HIDWORD(v21)) & 0xFF0000) != 0 )
      {
        v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v21 + 8) ^ v21);
        goto LABEL_30;
      }
      v24 = (v23 ^ v21) >> 32;
      if ( (_WORD)v24 )
      {
        v21 -= 16LL * (unsigned __int16)v24;
        v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v21 + 8) ^ v21);
        goto LABEL_30;
      }
    }
    v25 = 0;
  }
LABEL_30:
  v26 = (v21 - (unsigned int)(v25 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v26 + 32) ^ *(_WORD *)(v26 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, *(_DWORD *)(a1 + 128) ^ a1, v26, v14 - 8, 0LL, 0LL);
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v27 = v39;
    if ( ((unsigned __int64)(v19 + 4) & 0xFFF) == 0 )
      v27 = v39 + 1;
  }
  else
  {
    v27 = v39 + 1;
  }
  if ( !(unsigned int)RtlpHpVsChunkSplit(a1, v26, (int)v14 - 8, v27, a4, a5) )
    return 0LL;
  v28 = (char *)(v19 + 2);
  v29 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)v19 >> 16) ^ *((unsigned __int16 *)v19 + 1)) - 16;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v30 = (char *)(v19 + 4);
    if ( ((unsigned __int16)v30 & 0xFFF) == 0 )
    {
      v28 = v30;
      v29 = (unsigned int)(v29 - 16);
    }
  }
  v31 = *(_DWORD *)v14;
  if ( a2 < (unsigned int)v29 )
  {
    v33 = (unsigned int)v29;
    *(_DWORD *)v14 = v31 | 0x100;
    v34 = v29;
    v28[v29 - 1] = 0;
    v35 = *(_WORD *)&v28[v29 - 2];
    v36 = v34 - a2;
    v37 = v35 ^ (v36 ^ v35) & 0x1FFF;
    if ( v36 == 1 )
      v37 = v35 | 0x8000;
    *(_WORD *)&v28[v33 - 2] = v37;
  }
  else
  {
    *(_DWORD *)v14 = v31 & 0xFFFFFEFF;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a5);
    *a6 = 0;
    if ( ((a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
      RtlHeapZero(v28, a2);
    else
      memset(v28, 0, a2);
  }
  return v28;
}
