/*
 * XREFs of PopGracefulShutdown @ 0x1409B1E90
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAttachProcess @ 0x140241420 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x1402FA0B0 (KeAcquireGuardedMutex.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140381D10 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x1405A2398 (VfShutdownScheduleWatchdog.c)
 *     EtwShutdown @ 0x140774180 (EtwShutdown.c)
 *     PopTransitionCheckpoint @ 0x140775938 (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x140788590 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AC8C4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C4D54 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1408DC5F0 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1408E181C (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090AF58 (PsWaitForAllProcesses.c)
 *     PopSetDevicesSystemState @ 0x140991BF4 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x1409981B8 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1409B10B0 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1409B3554 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1409B3A88 (ExShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  __int64 v3; // rdx
  struct _KPROCESS *v4; // rcx

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(*(_QWORD *)&qword_140C23A98 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C23A90 )
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
      (PVOID *)PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  EtwShutdown(0LL, v3);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C23A90 )
  {
    v4 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C23A90 + 8LL);
    if ( v4 )
      KeAttachProcess(v4);
    IoAddTriageDumpDataBlock(qword_140C23A90, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C23A90 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A90 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A90 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A90 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23A90 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C23A98 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C23A98 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_140C23A64);
}
