__int64 __fastcall MmManagePartitionCharges(__int64 *a1, int *a2, __int64 a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdi
  int v8; // r10d
  __int64 v10; // rcx
  char *v11; // rbx
  char *Pool; // rsi
  size_t v13; // r14
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int *v17; // rdx
  int v18; // ecx
  int v19; // edi

  v7 = *a1;
  v8 = *a2;
  if ( !*a2 || ((v8 - 1) & v8) != 0 || (v8 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (v8 & 2) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    return 3221225569LL;
  v10 = (unsigned int)a2[1];
  if ( (unsigned int)(v10 - 1) > 0x1E )
    return 3221225485LL;
  v11 = (char *)(a3 + 8);
  if ( a4 )
  {
    v13 = 40 * v10;
    Pool = (char *)MiAllocatePool(64, 40 * v10, 0x6148694Du);
    if ( !Pool )
      return 3221225626LL;
    if ( v13 )
    {
      if ( ((unsigned __int8)v11 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v11[v13] > 0x7FFFFFFF0000LL || &v11[v13] < v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool, v11, v13);
  }
  else
  {
    Pool = v11;
    v13 = 0LL;
  }
  v14 = 0;
  v15 = 0;
  v16 = a2[1];
  if ( v16 )
  {
    v17 = (int *)Pool;
    do
    {
      v18 = *v17;
      if ( *v17 >= 2 )
        break;
      if ( ((1 << v18) & v14) != 0 )
        break;
      v14 |= 1 << v18;
      ++v15;
      v17 += 10;
    }
    while ( v15 < v16 );
  }
  if ( v15 >= v16 )
  {
    v19 = MiManagePartitionCharges(v7, *a2, v16, (__int64)Pool);
    if ( v19 >= 0 && a4 && *a2 == 1 )
    {
      ProbeForWrite(v11, v13, 8u);
      memmove(v11, Pool, v13);
    }
  }
  else
  {
    v19 = -1073741811;
  }
  if ( Pool != v11 )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v19;
}
