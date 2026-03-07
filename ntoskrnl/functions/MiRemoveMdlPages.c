_DWORD *__fastcall MiRemoveMdlPages(char *P, __int64 a2)
{
  __int64 *v2; // r15
  unsigned __int64 v4; // r14
  _DWORD *v5; // rdi
  char *v6; // r12
  _DWORD *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // r13d
  int v10; // edx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rcx
  bool v14; // zf
  unsigned __int64 v15; // rdi
  __int64 v16; // r12
  unsigned __int64 v17; // r14
  char *v19; // [rsp+30h] [rbp-58h]
  unsigned __int64 v20; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+98h] [rbp+10h]
  __int64 v23; // [rsp+A0h] [rbp+18h]

  v2 = (__int64 *)(P + 48);
  v4 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v5 = P;
  v20 = v4;
  v6 = &P[8 * v4 + 48];
  v19 = v6;
  if ( (*(_DWORD *)(a2 + 56) & 0x60) == 0 || *(_QWORD *)(a2 + 24) < 0x200uLL )
    MiSortMdlFrames((__int64)P);
  v7 = 0LL;
  v8 = -1LL;
  v22 = 0;
  v9 = (*(_DWORD *)(a2 + 56) >> 15) & 0x10 | 0x200000;
  v23 = -1LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1LL;
  v14 = v2 == (__int64 *)v6;
  if ( v2 <= (__int64 *)v6 )
  {
    v15 = -1LL;
    do
    {
      if ( v14 || (v8 = *v2, v23 = *v2, *v2 != v13) )
      {
        if ( v11 )
        {
          if ( v10 < 0 || (v22 = MiRemovePhysicalMemory(v15, v11, v9), v10 = v22, v22 < 0) )
          {
            v16 = 48 * v15 - 0x220000000000LL;
            v17 = v11;
            do
            {
              MiSetPfnOwnedAndActive(v16, 1, -8LL, *(unsigned __int8 *)(v16 + 34) >> 6, 2u);
              v16 += 48LL;
              --v17;
            }
            while ( v17 );
            v6 = v19;
            MiFreeContiguousPages(v15, v11);
            v10 = v22;
            v12 += v11;
          }
          v8 = v23;
        }
        v15 = v8;
        v11 = 1LL;
      }
      else
      {
        ++v11;
      }
      ++v2;
      v13 = v8 + 1;
      v14 = v2 == (__int64 *)v6;
    }
    while ( v2 <= (__int64 *)v6 );
    v5 = P;
    v4 = v20;
  }
  _InterlockedExchangeAdd64(&qword_140C69630, -(__int64)v4);
  if ( !v12 )
  {
    v7 = v5;
    if ( !v4 )
      return v7;
LABEL_24:
    MiRemovePhysicalMemoryBatchComplete();
    return v5;
  }
  if ( v12 != v4 )
  {
    v5[10] += -4096 * v12;
    goto LABEL_24;
  }
  ExFreePoolWithTag(v5, 0);
  return v7;
}
