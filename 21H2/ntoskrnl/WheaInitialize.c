/*
 * XREFs of WheaInitialize @ 0x140A6405C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     WheapInitializeWorkQueue @ 0x1403BAC34 (WheapInitializeWorkQueue.c)
 *     WheapCheckForClzeroSupport @ 0x1403BACCC (WheapCheckForClzeroSupport.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403BACF8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapCallErrorSourceInitialize @ 0x1403BAFC0 (WheapCallErrorSourceInitialize.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     WheaWmiInit @ 0x1405BDAAC (WheaWmiInit.c)
 *     WheapLogInitEvent @ 0x1407AF75C (WheapLogInitEvent.c)
 *     WheapLoadPolicy @ 0x140A63C18 (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x140A63E88 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeEventing @ 0x140A63F24 (WheapInitializeEventing.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6478C (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140A648F8 (WheapQueryPshedForErrorSources.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // r12
  __int64 v4; // r13
  int v5; // eax
  int PerProcessorInfo; // eax
  int v7; // eax
  int *v8; // rbx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v17; // rax
  _KPROCESS *Process; // rax
  unsigned __int64 v19; // rcx
  int v20; // eax
  bool v21; // zf
  int v23; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v27; // eax
  __int64 v28; // rbx
  int v29; // r13d
  int v30; // eax
  struct _KTHREAD *v31; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v33; // r12
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r14
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  unsigned int v43; // [rsp+34h] [rbp-1Ch] BYREF
  PVOID Address; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v45[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v47; // [rsp+98h] [rbp+48h] BYREF
  int v48; // [rsp+A0h] [rbp+50h]
  int v49; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  v3 = a2;
  Address = 0LL;
  v4 = a1;
  v45[0] = 0LL;
  v47 = 0;
  if ( !a2 )
  {
    WheapStatus = 0LL;
    dword_140C16148 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(v4, v45);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v47, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    qword_140CDB168 = (__int64)&qword_140CDB160;
    qword_140CDB160 = (__int64)&qword_140CDB160;
    KeInitializeEvent(&stru_140CDB170, SynchronizationEvent, 1u);
    WheapInitializeEventing();
    v8 = (int *)Address;
    v9 = 0;
    if ( v47 )
    {
      do
      {
        v10 = qword_140CF4798[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, v8[2]);
        v11 = (unsigned int)*v8;
        ++v9;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v11);
      }
      while ( v9 < v47 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
    return 0LL;
  }
  qword_140C16138 = (__int64)&WheapPrevErrList;
  WheapPrevErrList = (__int64)&WheapPrevErrList;
  v12 = PshedInitialize(a1, v45);
  if ( v12 < 0 )
    KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
  WheapInitializeWorkQueue();
  v13 = WheapQueryPshedForErrorSources(&v47, &Address);
  if ( v13 < 0 )
    KeBugCheckEx(0x122u, 5uLL, v13, v3, 0LL);
  CurrentThread = KeGetCurrentThread();
  v43 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&WheapConfigTableLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&WheapConfigTableLock);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v17, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
  v2 = (__int64)&CurrentThread->LockEntries[v17];
  if ( !v2 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( (unsigned __int64)&WheapConfigTableLock >= 0xFFFF800000000000uLL
    && byte_140C4FA08[(((unsigned __int64)&WheapConfigTableLock >> 39) & 0x1FF) - 256] == 1
    && (Process = CurrentThread->ApcState.Process, (v19 = Process[1].AffinityPadding[5]) != 0)
    && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    v20 = *(_DWORD *)(v19 + 8);
  }
  else
  {
    v20 = -1;
  }
  *(_DWORD *)(v2 + 40) = v20;
  v4 = a1;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&WheapConfigTableLock, &v43);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, (_RTL_BALANCED_NODE *)v2, (ULONG_PTR)&WheapConfigTableLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v23 = WheapInitializeErrorSourceTable(v47, Address);
  if ( v23 < 0 )
    KeBugCheckEx(0x122u, 7uLL, v23, 0LL, 0LL);
  PshedFreeMemory(Address);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 8LL) = &WheapErrorSourceTable )
  {
    Prcb = KeGetPrcb(i++);
    **(_DWORD **)(Prcb + 33568) = v47;
    *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 16LL) = &WheapWorkQueue;
  }
  for ( j = qword_140CDB160; (__int64 *)j != &qword_140CDB160; j = *(_QWORD *)j )
  {
    if ( *(_DWORD *)(j + 104) == 7 )
    {
      *(_DWORD *)(j + 108) = 2;
      v27 = WheapCallErrorSourceInitialize(j, v3);
      if ( v27 < 0 )
      {
        BugCheckParameter4 = *(int *)(j + 104);
        *(_DWORD *)(j + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v27, v3, BugCheckParameter4);
      }
    }
  }
  WheapCheckForClzeroSupport();
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 240) + 2616LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
    WheapCheckForAndReportErrorsFromPreviousSession();
  v28 = qword_140CDB160;
  v29 = 0;
  while ( (__int64 *)v28 != &qword_140CDB160 )
  {
    v21 = *(_DWORD *)(v28 + 104) == 7;
    *(_DWORD *)(v28 + 124) = v29;
    if ( !v21 && !*(_BYTE *)(v28 + 88) && *(_DWORD *)(v28 + 108) == 1 )
    {
      *(_DWORD *)(v28 + 108) = 2;
      v30 = WheapCallErrorSourceInitialize(v28, v3);
      if ( v30 < 0 )
      {
        BugCheckParameter4a = *(int *)(v28 + 104);
        *(_DWORD *)(v28 + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v30, v3, BugCheckParameter4a);
      }
    }
    v28 = *(_QWORD *)v28;
    ++v29;
  }
  WheapLogInitEvent();
  WheaWmiInit();
  WheapInitializationComplete = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&WheapConfigTableLock);
  v31 = KeGetCurrentThread();
  v49 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&WheapConfigTableLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
  else
    SessionId = -1;
  --v31->SpecialApcDisable;
  v33 = ++v31->AbAllocationRegionCount;
  v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v35, v34);
    v48 = v35;
    if ( v21 )
      break;
    v36 = (__int64)&v31->LockEntries[v35];
    v34 &= ~(1 << v35);
    if ( (*(_BYTE *)(v36 + 26) & 1) != 0
      && (*(_DWORD *)(v36 + 32) & 1) == 0
      && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v36 + 40) == SessionId )
    {
      *(_BYTE *)(v36 + 26) &= ~1u;
      if ( *(_QWORD *)(v36 + 32) )
      {
        if ( v36 )
        {
          *(_BYTE *)(v36 + 32) |= 2u;
          if ( *(__int64 *)(v36 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
          v37 = *(_DWORD *)(v36 + 88) & 0x1FFFF;
          v38 = *(_DWORD *)(v36 + 88) & 0xFFFE0000;
          *(_BYTE *)(v36 + 25) &= ~1u;
          v49 = v37;
          *(_DWORD *)(v36 + 88) = v38;
          *(_QWORD *)(v36 + 32) = 0LL;
          v39 = (signed __int64)(v36 - (unsigned __int64)v31->LockEntries) / 96;
          if ( v33 == 1 )
            v31->AbEntrySummary |= 1 << v39;
          else
            _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v39);
          goto LABEL_71;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&WheapConfigTableLock, SessionId, 0LL);
LABEL_71:
  --v31->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v31, (__int64)&WheapConfigTableLock, (unsigned int *)&v49);
  v21 = v31->SpecialApcDisable++ == -1;
  if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
