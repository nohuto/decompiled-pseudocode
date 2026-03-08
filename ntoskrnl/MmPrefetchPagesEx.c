/*
 * XREFs of MmPrefetchPagesEx @ 0x1406A387C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1406A2A70 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x1406A3830 (MmPrefetchPages.c)
 *     PfSnPrefetchSections @ 0x1407E16A0 (PfSnPrefetchSections.c)
 *     PfpPrefetchFiles @ 0x14097AEE4 (PfpPrefetchFiles.c)
 * Callees:
 *     MiDereferenceInPageAutoBoostLock @ 0x14020CA70 (MiDereferenceInPageAutoBoostLock.c)
 *     MiGetInPageAutoBoostLock @ 0x14020CAA0 (MiGetInPageAutoBoostLock.c)
 *     MiPfCompletePrefetchIos @ 0x14020DA48 (MiPfCompletePrefetchIos.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiLockDynamicMemoryShared @ 0x1402DAC90 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1402DC340 (MiUnlockDynamicMemoryShared.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiNotifyPageHeat @ 0x140652018 (MiNotifyPageHeat.c)
 *     MiPfExecuteReadList @ 0x1406A3F98 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x1406A4E80 (MiReleaseReadListResources.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int *v4; // r15
  int v5; // ebx
  __int64 v6; // r12
  __int64 *v7; // rsi
  volatile signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rbp
  __int64 v10; // rax
  int v11; // r14d
  __int64 *v12; // rdi
  int v13; // ebp
  int List; // eax
  int v15; // ecx
  unsigned int v16; // edi
  PVOID *v17; // rbx
  __int64 v18; // rbp
  __int64 v20; // rbp
  __int64 *v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  __int64 *v24; // r14
  __int64 v25; // rax
  unsigned int *v26; // rax
  struct _SLIST_ENTRY **v27; // rax
  struct _SLIST_ENTRY *v28; // rcx
  _SLIST_ENTRY *Next; // rdx
  __int64 v30; // [rsp+30h] [rbp-68h]
  __int64 *Pool; // [rsp+38h] [rbp-60h]
  ULONG_PTR v32; // [rsp+48h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  LOBYTE(v5) = 0;
  v6 = a1;
  if ( a1 > 0x1FFFFFFF )
    return (unsigned int)-1073741585;
  v30 = a1;
  Pool = (__int64 *)MiAllocatePool(64, 8LL * a1, 0x6C526D4Du);
  v7 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  v8 = MiGetInPageAutoBoostLock();
  BugCheckParameter2 = (ULONG_PTR)v8;
  v9 = v8;
  if ( !v8 )
  {
    v16 = -1073741670;
    goto LABEL_28;
  }
  v10 = KeAbPreAcquire((__int64)v8, 0LL);
  v32 = v10;
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    v26 = (unsigned int *)MiAllocatePool(66, 0x1008uLL, 0x6C68694Du);
    v4 = v26;
    if ( !v26 )
    {
      v16 = -1073741670;
      goto LABEL_22;
    }
    v26[1] = 0;
    *v26 = 1;
    v26[2] = 511;
    MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
    v5 = 10;
  }
  else
  {
    v5 = 2;
  }
  --CurrentThread->KernelApcDisable;
  v11 = 0;
  if ( (_DWORD)v6 )
  {
    v12 = Pool;
    v13 = (int)Pool;
    do
    {
      List = MiPfPrepareReadList(*(__int64 *)((char *)v12 + a2 - (_QWORD)Pool), v13, a3, (_DWORD)v4, BugCheckParameter2);
      if ( List < 0 )
      {
        v11 = List;
      }
      else
      {
        v15 = v5 | 1;
        if ( !*v12 )
          v15 = v5;
        v5 = v15;
      }
      v13 += 8;
      ++v12;
      --v6;
    }
    while ( v6 );
    v7 = Pool;
    LODWORD(v6) = a1;
  }
  if ( v4 )
  {
    if ( v4[1] )
      MiNotifyPageHeat(v4);
    MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
    LOBYTE(v5) = v5 & 0xF7;
    ExFreePoolWithTag(v4, 0);
  }
  if ( (v5 & 1) == 0 )
  {
    v16 = v11 != 0 ? v11 : 0;
    goto LABEL_19;
  }
  ++BYTE6(CurrentThread[1].Queue);
  LOBYTE(v5) = v5 & 0xFA | 4;
  v16 = 0;
  v20 = 0LL;
  if ( !(_DWORD)v6 )
    goto LABEL_42;
  v21 = v7;
  while ( !*v21 )
  {
LABEL_41:
    v20 = (unsigned int)(v20 + 1);
    ++v21;
    if ( (unsigned int)v20 >= (unsigned int)v6 )
      goto LABEL_42;
  }
  *(_DWORD *)(*v21 + 104) = 0;
  v22 = MiPfPutPagesInTransition(*v21, a3, 0, -1);
  if ( v22 >= 0 )
  {
    v23 = *v21;
    if ( *(_QWORD *)(*v21 + 120) == *v21 + 120 )
    {
      MiReleaseReadListResources(v23);
      ExFreePoolWithTag((PVOID)*v21, 0);
      *v21 = 0LL;
    }
    else
    {
      LOBYTE(v5) = v5 | 1;
      MiPfExecuteReadList(v23, 0LL, 0xFFFFFFFFLL, 0LL, BugCheckParameter2);
    }
    goto LABEL_41;
  }
  v16 = v22;
  while ( (unsigned int)v20 < (unsigned int)v6 )
  {
    if ( v7[v20] )
    {
      while ( 1 )
      {
        v27 = (struct _SLIST_ENTRY **)(v7[v20] + 120);
        v28 = *v27;
        if ( *v27 == (struct _SLIST_ENTRY *)v27 )
          break;
        if ( *((struct _SLIST_ENTRY ***)&v28->Next + 1) != v27 || (Next = v28->Next, *(&v28->Next->Next + 1) != v28) )
          __fastfail(3u);
        *v27 = Next;
        *((_QWORD *)&Next->Next + 1) = v27;
        MiFreeInPageSupportBlock(v28);
      }
      MiReleaseReadListResources(v7[v20]);
      ExFreePoolWithTag((PVOID)v7[v20], 0);
      v7[v20] = 0LL;
    }
    v20 = (unsigned int)(v20 + 1);
  }
LABEL_42:
  if ( (v5 & 1) != 0 )
  {
    v16 = 0;
    if ( (_DWORD)v6 )
    {
      v24 = v7;
      v25 = (unsigned int)v6;
      do
      {
        if ( *v24 )
        {
          MiPfCompletePrefetchIos((_QWORD **)(*v24 + 120), 0LL, 0LL);
          MiReleaseReadListResources(*v24);
          v25 = v30;
        }
        ++v24;
        v30 = --v25;
      }
      while ( v25 );
    }
  }
LABEL_19:
  if ( (v5 & 8) != 0 )
    MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
  v9 = (volatile signed __int64 *)BugCheckParameter2;
LABEL_22:
  if ( v32 )
    KeAbPostReleaseEx((ULONG_PTR)v9, v32);
  MiDereferenceInPageAutoBoostLock(v9);
  if ( (v5 & 2) != 0 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (v5 & 4) != 0 )
    --BYTE6(CurrentThread[1].Queue);
LABEL_28:
  if ( (_DWORD)v6 )
  {
    v17 = (PVOID *)v7;
    v18 = (unsigned int)v6;
    do
    {
      if ( *v17 )
        ExFreePoolWithTag(*v17, 0);
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  ExFreePoolWithTag(v7, 0);
  return v16;
}
