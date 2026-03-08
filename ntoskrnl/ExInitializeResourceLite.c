/*
 * XREFs of ExInitializeResourceLite @ 0x14030FAB0
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x14021BE20 (CcAllocateInitializeBcb.c)
 *     DifExInitializeResourceLiteWrapper @ 0x1405D6E50 (DifExInitializeResourceLiteWrapper.c)
 *     PnpInitializeNotifyEntry @ 0x1406F543C (PnpInitializeNotifyEntry.c)
 *     NtCreateJobObject @ 0x1406F7BA0 (NtCreateJobObject.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     PiPnpRtlInit @ 0x14081BE64 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14081C92C (PiDrvDbCreateNode.c)
 *     PiDqObjectManagerInit @ 0x14081D390 (PiDqObjectManagerInit.c)
 *     DrvDbOpenContext @ 0x14081D690 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14081DF10 (DrvDbCreateDatabaseNode.c)
 *     PiDmObjectManagerInit @ 0x14083A2C8 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140845B08 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x14084DBB0 (FsRtlInitializeTieringHeat.c)
 *     FsRtlInitializeDedupChange @ 0x14084DBE4 (FsRtlInitializeDedupChange.c)
 *     _PnpCtxOpenMachine @ 0x140851D74 (_PnpCtxOpenMachine.c)
 *     MUIInitializeResourceLock @ 0x14085B81C (MUIInitializeResourceLock.c)
 *     IopInitializeBootLogging @ 0x140941EE0 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1409A901C (TtmiCreateEventQueue.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     PpInitSystem @ 0x140B493C0 (PpInitSystem.c)
 *     SepInitializeWorkList @ 0x140B49464 (SepInitializeWorkList.c)
 *     ExpInitSystemPhase0 @ 0x140B49BD0 (ExpInitSystemPhase0.c)
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140B54540 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExInitializeTimeRefresh @ 0x140B545AC (ExInitializeTimeRefresh.c)
 *     PiSwInit @ 0x140B56DF0 (PiSwInit.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140B5A6EC (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseZero @ 0x140B5AA38 (PipDmgInitPhaseZero.c)
 *     PiDeviceDependencyInit @ 0x140B5AB1C (PiDeviceDependencyInit.c)
 *     MiInitializeLoadedModuleList @ 0x140B5D84C (MiInitializeLoadedModuleList.c)
 *     PopInitializeAdpm @ 0x140B5DF58 (PopInitializeAdpm.c)
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140B69A18 (SepRmDbInitialization.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlStdLogStackTrace @ 0x1405A70F4 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1405A7180 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405A7574 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405FE3D8 (PerfLogExecutiveResourceInitialize.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v4; // rax
  __int64 v6; // rdi
  unsigned __int16 v7; // si
  __int64 v8; // rax
  __int64 v9; // rbp
  int RecordedStackTraceIndex; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v19; // [rsp+40h] [rbp+8h] BYREF

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v6 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v8 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
      v9 = v8;
      if ( v8 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v6, v8);
        v7 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v6, v9);
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
    v2 = v7;
  }
  else
  {
    v2 = 0LL;
  }
  Resource->CreatorBackTraceIndex = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v19 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v19 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock);
    while ( (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (ExpResourceSpinLock & 0x40000000) == 0 )
        _InterlockedOr(&ExpResourceSpinLock, 0x40000000u);
      KeYieldProcessorEx(&v19);
    }
  }
  v4 = (struct _LIST_ENTRY *)qword_140C2D278;
  if ( *(__int64 **)qword_140C2D278 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140C2D278 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x8A58u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
