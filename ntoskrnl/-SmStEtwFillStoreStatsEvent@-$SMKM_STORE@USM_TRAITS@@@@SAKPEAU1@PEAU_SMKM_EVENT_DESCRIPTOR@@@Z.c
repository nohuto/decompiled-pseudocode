__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreStatsEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  _QWORD *v4; // r9
  _QWORD *v5; // rax
  _DWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned int *v9; // rbx
  unsigned int **v10; // rax
  __int64 v11; // rdx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 1896) )
  {
    v4 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    *v4 = a1;
    v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
    *v5 = v4;
    v5[1] = 8LL;
    *(_DWORD *)(a2 + 24) += 8;
    ++*(_DWORD *)(a2 + 16);
    v6 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    *v6 = 1348;
    v7 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
    *v7 = v6;
    v7[1] = 4LL;
    v8 = (unsigned int)++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 4;
    v9 = (unsigned int *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    v10 = (unsigned int **)(*(_QWORD *)a2 + 16 * v8);
    *v10 = v9;
    v10[1] = (unsigned int *)1348;
    ++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 1348;
    ST_STORE<SM_TRAITS>::StCopyIoStats(v9, a1 + 4280);
    StLcBucketsCopy(v9 + 321, v11, *(_QWORD **)(a1 + 5600), *(_DWORD *)(a1 + 5592));
    return 1;
  }
  return v2;
}
