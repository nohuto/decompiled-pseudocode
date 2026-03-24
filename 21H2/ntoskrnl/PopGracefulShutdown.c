/*
 * XREFs of PopGracefulShutdown @ 0x1409B0F60
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     KeAttachProcess @ 0x1402C2F00 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 *     KeAcquireGuardedMutex @ 0x1402EF360 (KeAcquireGuardedMutex.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1403821C0 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC828 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x1405A2168 (VfShutdownScheduleWatchdog.c)
 *     EtwShutdown @ 0x140773FC0 (EtwShutdown.c)
 *     PopTransitionCheckpoint @ 0x140775778 (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x1407883D0 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AC6C4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C4BF4 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1408DC490 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1408E16BC (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090ADF8 (PsWaitForAllProcesses.c)
 *     PopSetDevicesSystemState @ 0x140990BF4 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x1409971B8 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1409B0180 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1409B2624 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1409B2B58 (ExShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  *(_QWORD *)(*(_QWORD *)&qword_140C23478 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C23470 )
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
  if ( *(_QWORD *)&qword_140C23470 )
  {
    v4 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C23470 + 8LL);
    if ( v4 )
      KeAttachProcess(v4);
    IoAddTriageDumpDataBlock(qword_140C23470, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C23470 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23470 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23470 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23470 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C23470 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C23478 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C23478 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_140C23444);
}
