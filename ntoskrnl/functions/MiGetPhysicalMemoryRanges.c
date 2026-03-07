_QWORD *__fastcall MiGetPhysicalMemoryRanges(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // rbp
  int v6; // edi
  unsigned int *v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  char *v10; // r12
  _QWORD *Pool; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rax
  char *FileOnlyRanges; // rax
  size_t v18; // rbp
  char v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v19 = 0;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 || (unsigned __int16 *)a1 != MiSystemPartition )
  {
    v19 = 1;
    MiLockDynamicMemoryShared(a1, (__int64)CurrentThread);
    if ( (unsigned __int16 *)a1 != MiSystemPartition )
    {
      while ( *(_QWORD *)(a1 + 17040) && !*(_QWORD *)(a1 + 96) )
      {
        MiUnlockDynamicMemoryShared(a1, (__int64)CurrentThread);
        MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
        if ( *(_QWORD *)(a1 + 17040) )
        {
          if ( !*(_QWORD *)(a1 + 96) )
            MiMakePartitionMemoryBlock(a1);
          if ( *(_QWORD *)(a1 + 17040) && !*(_QWORD *)(a1 + 96) )
          {
            MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
            return 0LL;
          }
        }
        MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
        MiLockDynamicMemoryShared(a1, (__int64)CurrentThread);
      }
    }
  }
  v7 = (unsigned int *)MiReferencePageRuns(a1, 0);
  v8 = (__int64)v7;
  if ( v7 )
    v9 = *v7 & (unsigned __int64)-(__int64)(*(_QWORD *)(a1 + 17040) != 0LL);
  else
    v9 = 0LL;
  v20 = 0LL;
  v10 = 0LL;
  if ( v6 )
  {
    FileOnlyRanges = MiGetFileOnlyRanges((__int16 *)a1, a2, &v20);
    v3 = v20;
    v10 = FileOnlyRanges;
  }
  Pool = MiAllocatePool(64, 16 * (v9 + v3 + 1), 0x68506D4Du);
  v12 = Pool;
  if ( Pool )
  {
    v13 = Pool;
    if ( v9 )
    {
      v14 = (__int64 *)(v8 + 24);
      do
      {
        *v13 = *(v14 - 1) << 12;
        v15 = *v14;
        v14 += 2;
        v13[1] = v15 << 12;
        v13 += 2;
        --v9;
      }
      while ( v9 );
    }
    if ( v3 )
    {
      v18 = 16 * v3;
      memmove(v13, v10, v18);
      v13 = (_QWORD *)((char *)v13 + v18);
    }
    *v13 = 0LL;
    v13[1] = 0LL;
  }
  if ( v19 )
    MiUnlockDynamicMemoryShared(a1, (__int64)CurrentThread);
  if ( v8 )
    MiDereferencePageRuns(v8);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v12;
}
