/*
 * XREFs of EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A4B3A
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1408A4190 (EtwpCovSampContextAddSamples.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpCovSampHashLookupInTable @ 0x1408A4A72 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1409F00DC (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1409F0328 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampHashMakeRoomAndAcquireLock(ULONG_PTR BugCheckParameter2, int a2, __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *Table; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  struct _KTHREAD *v13; // rax
  __int64 *v14; // rsi
  unsigned int v15; // r8d
  __int64 *v16; // rcx
  __int64 **v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 *v22; // r14
  struct _KTHREAD *v24; // rax
  unsigned int v26; // eax
  __int64 **v27; // rcx
  __int64 *v28; // [rsp+50h] [rbp+8h] BYREF

  v28 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Table = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v8 = 0;
  v9 = *(_QWORD *)(BugCheckParameter2 + 1664);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v10 = a2 + *(_DWORD *)(v9 + 16);
  if ( v10 >= (unsigned int)(7 * *(_DWORD *)(v9 + 20)) >> 3 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 + 20);
      v12 = *(_DWORD *)(BugCheckParameter2 + 40);
      if ( v11 < v12 )
      {
        if ( !v11 )
        {
          v11 = *(_DWORD *)(BugCheckParameter2 + 36);
          goto LABEL_8;
        }
        do
        {
          v11 *= 2;
LABEL_8:
          ;
        }
        while ( (7 * v11) >> 3 < v10 );
        if ( v11 >= v12 )
          v11 = *(_DWORD *)(BugCheckParameter2 + 40);
        v12 = v11;
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 1696) >= *(_DWORD *)(BugCheckParameter2 + 44) )
      {
        goto LABEL_28;
      }
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( Table )
        EtwpCoverageSamplerFreeTable(Table);
      Table = (__int64 *)EtwpCoverageSamplerAllocateTable(v12);
      if ( !Table )
        goto LABEL_30;
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v14 = *(__int64 **)(BugCheckParameter2 + 1664);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v15 = *((_DWORD *)v14 + 5);
      if ( a2 + *((_DWORD *)v14 + 4) < (7 * v15) >> 3 )
        goto LABEL_29;
      if ( v15 >= v12 )
        break;
      *(_QWORD *)(BugCheckParameter2 + 1664) = Table;
      Table = v14;
      v16 = (__int64 *)*v14;
      if ( *(__int64 **)(*v14 + 8) != v14 )
        goto LABEL_35;
      v17 = (__int64 **)v14[1];
      if ( *v17 != v14 )
        goto LABEL_35;
      *v17 = v16;
      v16[1] = (__int64)v17;
      v18 = *(_QWORD **)(BugCheckParameter2 + 1688);
      v19 = *(_QWORD **)(BugCheckParameter2 + 1664);
      if ( *v18 != BugCheckParameter2 + 1680 )
        goto LABEL_35;
      *v19 = BugCheckParameter2 + 1680;
      v20 = 0LL;
      v19[1] = v18;
      *v18 = v19;
      *(_QWORD *)(BugCheckParameter2 + 1688) = v19;
      for ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1664) + 16LL) = *((_DWORD *)v14 + 4);
            (unsigned int)v20 < *((_DWORD *)v14 + 5);
            v20 = (unsigned int)(v20 + 1) )
      {
        v21 = v14[3];
        v22 = (__int64 *)(v21 + 8 * v20);
        if ( *v22 )
        {
          EtwpCovSampHashLookupInTable(*(_QWORD *)(BugCheckParameter2 + 1664), (unsigned __int8 *)(v21 + 8 * v20), &v28);
          *v28 = *v22;
          if ( (*((_DWORD *)v14 + 4))-- == 1 )
            break;
        }
      }
      if ( v8 < 0x14 )
      {
        v9 = *(_QWORD *)(BugCheckParameter2 + 1664);
        ++v8;
        v10 = a2 + *(_DWORD *)(v9 + 16);
        if ( v10 >= (unsigned int)(7 * *(_DWORD *)(v9 + 20)) >> 3 )
          continue;
      }
LABEL_28:
      if ( !Table )
        goto LABEL_30;
      goto LABEL_29;
    }
    v26 = *(_DWORD *)(BugCheckParameter2 + 1696);
    if ( v26 >= *(_DWORD *)(BugCheckParameter2 + 44) )
    {
LABEL_29:
      *a3 = Table;
      goto LABEL_30;
    }
    *(_QWORD *)(BugCheckParameter2 + 1664) = Table;
    *(_DWORD *)(BugCheckParameter2 + 1696) = v26 + 1;
    v27 = *(__int64 ***)(BugCheckParameter2 + 1688);
    if ( *v27 != (__int64 *)(BugCheckParameter2 + 1680) )
LABEL_35:
      __fastfail(3u);
    *Table = BugCheckParameter2 + 1680;
    Table[1] = (__int64)v27;
    *v27 = Table;
    *(_QWORD *)(BugCheckParameter2 + 1688) = Table;
    if ( *(_DWORD *)(BugCheckParameter2 + 1696) == 2 )
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1672), 0, 0);
  }
LABEL_30:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) != KeGetCurrentThread() )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  }
  return *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1664) + 16LL) < (unsigned int)(7
                                                                                   * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1664)
                                                                                               + 20LL)) >> 3
       ? ((unsigned int)(7 * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1664) + 20LL)) >> 3)
       - *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1664) + 16LL)
       : 0;
}
