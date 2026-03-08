/*
 * XREFs of PspThreadDelete @ 0x14075E4B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeEnumerateKernelStackSegments @ 0x1402A76A0 (KeEnumerateKernelStackSegments.c)
 *     KeCleanupThreadState @ 0x1402D35E4 (KeCleanupThreadState.c)
 *     KeFoldProcessStatisticsThread @ 0x1402D3778 (KeFoldProcessStatisticsThread.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspDeleteThreadSecurity @ 0x14075E8C0 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x1407D76E4 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1407D80C0 (ExMapHandleToPointer.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rax
  void *v6; // rcx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r9d
  _QWORD *v14; // r8
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  volatile signed __int64 *v18; // rsi
  __int64 *v19; // r14
  __int64 *v20; // rcx
  __int64 **v21; // rax

  KeCleanupThreadState(BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 1452) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1452), 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1440) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1440), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1444) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1444), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1448) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1448), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter2 + 1656);
  if ( v2 != BugCheckParameter2 + 1656 )
    KeBugCheckEx(0x1C6u, 0x14uLL, BugCheckParameter2, v2, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v3 != BugCheckParameter2 + 1680 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter2, v3, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter2,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1232) )
  {
    --CurrentThread->KernelApcDisable;
    v5 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1232));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1232), v5);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 1632);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  if ( UnbiasedInterruptTime >= qword_140C64760 )
  {
    v8 = qword_140C64750;
    if ( qword_140C64750 )
    {
      if ( (_DWORD)qword_140C64768 )
      {
        v9 = 0LL;
        v10 = ObpObjectTypes;
        v11 = (unsigned int)qword_140C64768;
        do
        {
          v12 = *v10;
          if ( ((*(unsigned __int8 *)(*v10 + 66) >> 6) & 1) != _bittest64(qword_140C64770, v9) && !qword_140C64720 )
          {
            qword_140C64720 = (unsigned int)__ROL4__(1207959560, 133);
            xmmword_140C64728 = 0LL;
            qword_140C64738 = 268LL;
            qword_140C64740 = v12;
          }
          ++v9;
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = qword_140C64750;
      }
      v13 = 64;
      v14 = (_QWORD *)(qword_140C64790 + 112);
      v15 = (const char *)(qword_140C64790 + 112);
      if ( qword_140C64790 + 112 < (unsigned __int64)(qword_140C64790 + 176) )
      {
        do
        {
          _mm_prefetch(v15, 0);
          v15 += 64;
        }
        while ( (unsigned __int64)v15 < qword_140C64790 + 176 );
      }
      v16 = 8LL;
      do
      {
        v8 = __ROR8__(v8 - *v14++, qword_140C64758);
        v13 -= 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *(unsigned __int8 *)v14;
        v14 = (_QWORD *)((char *)v14 + 1);
        v8 = __ROR8__(v8 - v17, qword_140C64758);
      }
      if ( qword_140C64798 != v8 )
      {
        if ( qword_140C64720 )
          goto LABEL_46;
        qword_140C64720 = (unsigned int)__ROR4__(150994945, 152);
        xmmword_140C64728 = 0LL;
        qword_140C64738 = 268LL;
        qword_140C64740 = qword_140C64790;
      }
    }
    if ( !qword_140C64720 )
    {
LABEL_31:
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime()
                            + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                            + 288000000000LL;
      qword_140C64760 = UnbiasedInterruptTime;
      goto LABEL_32;
    }
LABEL_46:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))stru_140C646E0.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140C646E0, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140C646E0);
    qword_140C64748 = 1934400LL;
    KeInsertQueueDpc(&stru_140C646E0, 0LL, 0LL);
    goto LABEL_31;
  }
LABEL_32:
  v18 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v18 )
  {
    v19 = (__int64 *)(BugCheckParameter2 + 1336);
    if ( *(_QWORD *)(BugCheckParameter2 + 1336) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 135), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 268), 0LL);
      KeFoldProcessStatisticsThread(BugCheckParameter2);
      v20 = (__int64 *)*v19;
      if ( *(__int64 **)(*v19 + 8) != v19 || (v21 = *(__int64 ***)(BugCheckParameter2 + 1344), *v21 != v19) )
        __fastfail(3u);
      *v21 = v20;
      v20[1] = (__int64)v21;
      if ( (_InterlockedExchangeAdd64(v18 + 268, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 268);
      KeAbPostRelease((ULONG_PTR)(v18 + 268));
      if ( (_InterlockedExchangeAdd64(v18 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 135);
      KeAbPostRelease((ULONG_PTR)(v18 + 135));
      LOBYTE(UnbiasedInterruptTime) = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1376) & 0x100000) != 0 )
      LOBYTE(UnbiasedInterruptTime) = ((__int64 (__fastcall *)(ULONG_PTR))xmmword_140C37D30)(BugCheckParameter2);
    if ( v18 != PsIdleProcess )
      LOBYTE(UnbiasedInterruptTime) = ObfDereferenceObjectWithTag((PVOID)v18, 0x72437350u);
  }
  return UnbiasedInterruptTime;
}
