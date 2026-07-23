/*
 * XREFs of WheaInitialize @ 0x140A6305C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     WheapInitializeWorkQueue @ 0x1403BA464 (WheapInitializeWorkQueue.c)
 *     WheapCheckForClzeroSupport @ 0x1403BA4FC (WheapCheckForClzeroSupport.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403BA528 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapCallErrorSourceInitialize @ 0x1403BA7F0 (WheapCallErrorSourceInitialize.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     WheaWmiInit @ 0x1405BD7BC (WheaWmiInit.c)
 *     WheapLogInitEvent @ 0x1407AF948 (WheapLogInitEvent.c)
 *     WheapLoadPolicy @ 0x140A62C18 (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x140A62E88 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeEventing @ 0x140A62F24 (WheapInitializeEventing.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6378C (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140A638F8 (WheapQueryPshedForErrorSources.c)
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
  __int64 v21; // rcx
  bool v22; // zf
  int v24; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v28; // eax
  __int64 v29; // rbx
  int v30; // r13d
  int v31; // eax
  struct _KTHREAD *v32; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v34; // r12
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // r14
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  int v45; // [rsp+34h] [rbp-1Ch] BYREF
  PVOID Address; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v47[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v49; // [rsp+98h] [rbp+48h] BYREF
  int v50; // [rsp+A0h] [rbp+50h]
  int v51; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  v3 = a2;
  Address = 0LL;
  v4 = a1;
  v47[0] = 0LL;
  v49 = 0;
  if ( !a2 )
  {
    WheapStatus = 0LL;
    dword_140C16158 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(v4, v47);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v49, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    qword_140CDB130 = (__int64)&qword_140CDB128;
    qword_140CDB128 = (__int64)&qword_140CDB128;
    KeInitializeEvent(&stru_140CDB138, SynchronizationEvent, 1u);
    WheapInitializeEventing();
    v8 = (int *)Address;
    v9 = 0;
    if ( v49 )
    {
      do
      {
        v10 = qword_140CF4758[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, v8[2]);
        v11 = (unsigned int)*v8;
        ++v9;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v11);
      }
      while ( v9 < v49 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
    return 0LL;
  }
  qword_140C160B8 = (__int64)&WheapPrevErrList;
  WheapPrevErrList = (__int64)&WheapPrevErrList;
  v12 = PshedInitialize(a1, v47);
  if ( v12 < 0 )
    KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
  WheapInitializeWorkQueue();
  v13 = WheapQueryPshedForErrorSources(&v49, &Address);
  if ( v13 < 0 )
    KeBugCheckEx(0x122u, 5uLL, v13, v3, 0LL);
  CurrentThread = KeGetCurrentThread();
  v45 = 0;
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
    && byte_140C4F9C8[(((unsigned __int64)&WheapConfigTableLock >> 39) & 0x1FF) - 256] == 1
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&WheapConfigTableLock, &v45);
  v22 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v22 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v21);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, v2, (ULONG_PTR)&WheapConfigTableLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v24 = WheapInitializeErrorSourceTable(v49, Address);
  if ( v24 < 0 )
    KeBugCheckEx(0x122u, 7uLL, v24, 0LL, 0LL);
  PshedFreeMemory(Address);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 8LL) = &WheapErrorSourceTable )
  {
    Prcb = KeGetPrcb(i++);
    **(_DWORD **)(Prcb + 33568) = v49;
    *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 16LL) = &WheapWorkQueue;
  }
  for ( j = qword_140CDB128; (__int64 *)j != &qword_140CDB128; j = *(_QWORD *)j )
  {
    if ( *(_DWORD *)(j + 104) == 7 )
    {
      *(_DWORD *)(j + 108) = 2;
      v28 = WheapCallErrorSourceInitialize(j, v3);
      if ( v28 < 0 )
      {
        BugCheckParameter4 = *(int *)(j + 104);
        *(_DWORD *)(j + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v28, v3, BugCheckParameter4);
      }
    }
  }
  WheapCheckForClzeroSupport();
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 240) + 2616LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
    WheapCheckForAndReportErrorsFromPreviousSession();
  v29 = qword_140CDB128;
  v30 = 0;
  while ( (__int64 *)v29 != &qword_140CDB128 )
  {
    v22 = *(_DWORD *)(v29 + 104) == 7;
    *(_DWORD *)(v29 + 124) = v30;
    if ( !v22 && !*(_BYTE *)(v29 + 88) && *(_DWORD *)(v29 + 108) == 1 )
    {
      *(_DWORD *)(v29 + 108) = 2;
      v31 = WheapCallErrorSourceInitialize(v29, v3);
      if ( v31 < 0 )
      {
        BugCheckParameter4a = *(int *)(v29 + 104);
        *(_DWORD *)(v29 + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v31, v3, BugCheckParameter4a);
      }
    }
    v29 = *(_QWORD *)v29;
    ++v30;
  }
  WheapLogInitEvent();
  WheaWmiInit();
  WheapInitializationComplete = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock);
  v32 = KeGetCurrentThread();
  v51 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&WheapConfigTableLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v32->ApcState.Process);
  else
    SessionId = -1;
  --v32->SpecialApcDisable;
  v34 = ++v32->AbAllocationRegionCount;
  v35 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v22 = !_BitScanReverse((unsigned int *)&v36, v35);
    v50 = v36;
    if ( v22 )
      break;
    v37 = (__int64)&v32->LockEntries[v36];
    v35 &= ~(1 << v36);
    if ( (*(_BYTE *)(v37 + 26) & 1) != 0
      && (*(_DWORD *)(v37 + 32) & 1) == 0
      && (*(_QWORD *)(v37 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v37 + 40) == SessionId )
    {
      *(_BYTE *)(v37 + 26) &= ~1u;
      if ( *(_QWORD *)(v37 + 32) )
      {
        if ( v37 )
        {
          *(_BYTE *)(v37 + 32) |= 2u;
          if ( *(__int64 *)(v37 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v37);
          v38 = *(_DWORD *)(v37 + 88) & 0x1FFFF;
          v39 = *(_DWORD *)(v37 + 88) & 0xFFFE0000;
          *(_BYTE *)(v37 + 25) &= ~1u;
          v51 = v38;
          *(_DWORD *)(v37 + 88) = v39;
          *(_QWORD *)(v37 + 32) = 0LL;
          v40 = (signed __int64)(v37 - (unsigned __int64)v32->LockEntries) / 96;
          if ( v34 == 1 )
            v32->AbEntrySummary |= 1 << v40;
          else
            _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v40);
          goto LABEL_71;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v32, (ULONG_PTR)&WheapConfigTableLock, SessionId, 0LL);
LABEL_71:
  --v32->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v32, (__int64)&WheapConfigTableLock, &v51);
  v22 = v32->SpecialApcDisable++ == -1;
  if ( v22 && ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
    KiCheckForKernelApcDelivery(v41);
  return 0LL;
}
