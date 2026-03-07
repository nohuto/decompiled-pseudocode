__int64 __fastcall MiAddRun(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbp
  PVOID Pool; // rax
  void *v12; // rsi
  __int64 v13; // r14
  __int64 v15; // rcx

  v3 = *a2;
  if ( *a2 )
  {
    v6 = a2[2];
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(v6 + 8 * v3 - 8) % v7;
    if ( v8 + ((*(_QWORD *)(v6 + 8 * v3 - 8) / v7) & 0x3FFFFF) + 1 == (a3 & 0x3FFFFF) && v8 != v7 - 1 )
    {
      ++*(_QWORD *)(v6 + 8 * v3 - 8);
      return 0LL;
    }
  }
  v9 = a2[1];
  if ( v3 != v9 )
  {
LABEL_15:
    v15 = *a2;
    *(_QWORD *)(a2[2] + 8 * v15) = (*(_QWORD *)&a3 & 0x3FFFFFLL) << 30;
    *a2 = v15 + 1;
    return 0LL;
  }
  v10 = 2LL;
  if ( v9 )
    v10 = 2 * v9;
  Pool = MiAllocatePool(64, 8 * v10, 0x7048694Du);
  v12 = (void *)a2[2];
  v13 = (__int64)Pool;
  if ( Pool )
  {
    if ( v12 )
    {
      memmove(Pool, (const void *)a2[2], 8 * a2[1]);
      ExFreePoolWithTag(v12, 0);
    }
    a2[2] = v13;
    a2[1] = v10;
    goto LABEL_15;
  }
  if ( v12 )
  {
    ExFreePoolWithTag((PVOID)a2[2], 0);
    a2[2] = 0LL;
  }
  return 3221225626LL;
}
