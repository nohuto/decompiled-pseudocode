/*
 * XREFs of PopGracefulShutdown @ 0x1409B10A0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAcquireGuardedMutex @ 0x14026F9E0 (KeAcquireGuardedMutex.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeAttachProcess @ 0x14031C270 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140381B00 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC128 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x1405A20A8 (VfShutdownScheduleWatchdog.c)
 *     EtwShutdown @ 0x140774A14 (EtwShutdown.c)
 *     PopTransitionCheckpoint @ 0x1407761D8 (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x1407882D0 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407ACB04 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C4C44 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1408DC4E0 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1408E170C (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090AE48 (PsWaitForAllProcesses.c)
 *     PopSetDevicesSystemState @ 0x1409913D8 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x1409971A8 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1409B02C0 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1409B2764 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1409B2C98 (ExShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  __int64 v3; // rdx
  struct _KPROCESS *v4; // rcx

  PopTransitionCheckpoint(10LL, 1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(*(_QWORD *)&qword_140C23A78 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C23A70 )
    off_140C00AF8[0]();
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    KeAcquireGuardedMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    KeReleaseGuardedMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v1 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v0 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v0 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v1 + 16))(*(_QWORD *)(v1 + 24));
    }
    while ( 1 )
    {
      v2 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v2[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v2[1], 0x64536F50u);
      ExFreePoolWithTag(v2, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem(0);
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      (ULONG_PTR *)PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  EtwShutdown(0LL, v3);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10LL, 2LL);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C23A70 )
  {
    v4 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C23A70 + 8LL);
    if ( v4 )
      KeAttachProcess(v4);
    IoAddTriageDumpDataBlock(qword_140C23A70, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C23A70 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A70 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A70 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A70 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A70 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C23A78 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C23A78 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_140C23A44);
}
