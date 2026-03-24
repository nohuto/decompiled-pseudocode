/*
 * XREFs of WheaInitialize @ 0x140A6305C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeGetPrcb @ 0x140228E30 (KeGetPrcb.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     WheapInitializeWorkQueue @ 0x1403BAAC4 (WheapInitializeWorkQueue.c)
 *     WheapCheckForClzeroSupport @ 0x1403BAB5C (WheapCheckForClzeroSupport.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403BAB88 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapCallErrorSourceInitialize @ 0x1403BAE50 (WheapCallErrorSourceInitialize.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     WheaWmiInit @ 0x1405BD87C (WheaWmiInit.c)
 *     WheapLogInitEvent @ 0x1407AF508 (WheapLogInitEvent.c)
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
  _DWORD *v14; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v18; // rax
  _KPROCESS *Process; // rax
  unsigned __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  bool v23; // zf
  int v25; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v29; // eax
  __int64 v30; // rbx
  int v31; // r13d
  int v32; // eax
  struct _KTHREAD *v33; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v35; // r12
  _DWORD *v36; // r9
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r14
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  int v47; // [rsp+34h] [rbp-1Ch] BYREF
  PVOID Address; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v49[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v51; // [rsp+98h] [rbp+48h] BYREF
  int v52; // [rsp+A0h] [rbp+50h]
  int v53; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  v3 = a2;
  Address = 0LL;
  v4 = a1;
  v49[0] = 0LL;
  v51 = 0;
  if ( !a2 )
  {
    WheapStatus = 0LL;
    dword_140C16118 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(v4, v49);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v51, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    qword_140CDB130 = (__int64)&qword_140CDB128;
    qword_140CDB128 = (__int64)&qword_140CDB128;
    KeInitializeEvent(&stru_140CDB138, SynchronizationEvent, 1u);
    WheapInitializeEventing();
    v8 = (int *)Address;
    v9 = 0;
    if ( v51 )
    {
      do
      {
        v10 = qword_140CF4748[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, v8[2]);
        v11 = (unsigned int)*v8;
        ++v9;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v11);
      }
      while ( v9 < v51 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
    return 0LL;
  }
  qword_140C16078 = (__int64)&WheapPrevErrList;
  WheapPrevErrList = (__int64)&WheapPrevErrList;
  v12 = PshedInitialize(a1, v49);
  if ( v12 < 0 )
    KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
  WheapInitializeWorkQueue();
  v13 = WheapQueryPshedForErrorSources(&v51, &Address);
  if ( v13 < 0 )
    KeBugCheckEx(0x122u, 5uLL, v13, v3, 0LL);
  CurrentThread = KeGetCurrentThread();
  v47 = 0;
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
  _BitScanForward((unsigned int *)&v18, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
  v2 = (__int64)&CurrentThread->LockEntries[v18];
  if ( !v2 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_29;
  }
  if ( (unsigned __int64)&WheapConfigTableLock >= 0xFFFF800000000000uLL
    && byte_140C4F9C8[(((unsigned __int64)&WheapConfigTableLock >> 39) & 0x1FF) - 256] == 1
    && (Process = CurrentThread->ApcState.Process, (v20 = Process[1].AffinityPadding[5]) != 0)
    && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    v21 = *(_DWORD *)(v20 + 8);
  }
  else
  {
    v21 = -1;
  }
  *(_DWORD *)(v2 + 40) = v21;
  v4 = a1;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_29:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&WheapConfigTableLock, (__int64)&v47, v14);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v22);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, v2, (ULONG_PTR)&WheapConfigTableLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v25 = WheapInitializeErrorSourceTable(v51, Address);
  if ( v25 < 0 )
    KeBugCheckEx(0x122u, 7uLL, v25, 0LL, 0LL);
  PshedFreeMemory(Address);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 8LL) = &WheapErrorSourceTable )
  {
    Prcb = KeGetPrcb(i++);
    **(_DWORD **)(Prcb + 33568) = v51;
    *(_QWORD *)(*(_QWORD *)(Prcb + 33568) + 16LL) = &WheapWorkQueue;
  }
  for ( j = qword_140CDB128; (__int64 *)j != &qword_140CDB128; j = *(_QWORD *)j )
  {
    if ( *(_DWORD *)(j + 104) == 7 )
    {
      *(_DWORD *)(j + 108) = 2;
      v29 = WheapCallErrorSourceInitialize(j, v3);
      if ( v29 < 0 )
      {
        BugCheckParameter4 = *(int *)(j + 104);
        *(_DWORD *)(j + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v29, v3, BugCheckParameter4);
      }
    }
  }
  WheapCheckForClzeroSupport();
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 240) + 2616LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
    WheapCheckForAndReportErrorsFromPreviousSession();
  v30 = qword_140CDB128;
  v31 = 0;
  while ( (__int64 *)v30 != &qword_140CDB128 )
  {
    v23 = *(_DWORD *)(v30 + 104) == 7;
    *(_DWORD *)(v30 + 124) = v31;
    if ( !v23 && !*(_BYTE *)(v30 + 88) && *(_DWORD *)(v30 + 108) == 1 )
    {
      *(_DWORD *)(v30 + 108) = 2;
      v32 = WheapCallErrorSourceInitialize(v30, v3);
      if ( v32 < 0 )
      {
        BugCheckParameter4a = *(int *)(v30 + 104);
        *(_DWORD *)(v30 + 108) = 1;
        KeBugCheckEx(0x122u, 6uLL, v32, v3, BugCheckParameter4a);
      }
    }
    v30 = *(_QWORD *)v30;
    ++v31;
  }
  WheapLogInitEvent();
  WheaWmiInit();
  WheapInitializationComplete = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&WheapConfigTableLock);
  v33 = KeGetCurrentThread();
  v53 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&WheapConfigTableLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v33->ApcState.Process);
  else
    SessionId = -1;
  --v33->SpecialApcDisable;
  v35 = ++v33->AbAllocationRegionCount;
  v36 = (_DWORD *)((unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL);
  v37 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v23 = !_BitScanReverse((unsigned int *)&v38, v37);
    v52 = v38;
    if ( v23 )
      break;
    v39 = (__int64)&v33->LockEntries[v38];
    v37 &= ~(1 << v38);
    if ( (*(_BYTE *)(v39 + 26) & 1) != 0
      && (*(_DWORD *)(v39 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v36
      && *(_DWORD *)(v39 + 40) == SessionId )
    {
      *(_BYTE *)(v39 + 26) &= ~1u;
      if ( *(_QWORD *)(v39 + 32) )
      {
        if ( v39 )
        {
          *(_BYTE *)(v39 + 32) |= 2u;
          if ( *(__int64 *)(v39 + 32) < 0 )
            KiAbEntryRemoveFromTree(v39);
          v40 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
          v41 = *(_DWORD *)(v39 + 88) & 0xFFFE0000;
          *(_BYTE *)(v39 + 25) &= ~1u;
          v53 = v40;
          *(_DWORD *)(v39 + 88) = v41;
          *(_QWORD *)(v39 + 32) = 0LL;
          v42 = (signed __int64)(v39 - (unsigned __int64)v33->LockEntries) / 96;
          if ( v35 == 1 )
            v33->AbEntrySummary |= 1 << v42;
          else
            _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v42);
          goto LABEL_71;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v33, (ULONG_PTR)&WheapConfigTableLock, SessionId, 0LL);
LABEL_71:
  --v33->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v33, (__int64)&WheapConfigTableLock, (__int64)&v53, v36);
  v23 = v33->SpecialApcDisable++ == -1;
  if ( v23 && ($C459BD0D405E8E46662177FB3D0A143F *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
    KiCheckForKernelApcDelivery(v43);
  return 0LL;
}
