/*
 * XREFs of PopGracefulShutdown @ 0x140A6AEC0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAttachProcess @ 0x140252530 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140389F20 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfShutdownScheduleWatchdog @ 0x140601514 (VfShutdownScheduleWatchdog.c)
 *     PopTransitionCheckpoint @ 0x1407EBF04 (PopTransitionCheckpoint.c)
 *     EtwShutdown @ 0x1407FDA6C (EtwShutdown.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14082EFB8 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x140911B58 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1409681E4 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x140989C70 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x1409A0D80 (SshSessionManagerFlushBuffers.c)
 *     SshSessionManagerTraceSystemStop @ 0x1409A0FA4 (SshSessionManagerTraceSystemStop.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B1468 (PsWaitForAllProcesses.c)
 *     PopSetDevicesSystemState @ 0x140A49448 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x140A6A3E0 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x140A6BE04 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140A6C7A8 (ExShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  PVOID *v2; // rbx
  struct _KPROCESS *v3; // rcx

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  SshSessionManagerTraceSystemStop();
  *(_QWORD *)(*(_QWORD *)&qword_140C227F8 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C227F0 )
    off_140C02168[0]();
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
  CmShutdownSystem();
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
  CmShutdownSystem();
  CmShutdownSystem();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      (PVOID *)PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  SshSessionManagerFlushBuffers();
  EtwShutdown(0);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C227F0 )
  {
    v3 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C227F0 + 8LL);
    if ( v3 )
      KeAttachProcess(v3);
    IoAddTriageDumpDataBlock(qword_140C227F0, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C227F0 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C227F8 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C227F8 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_140C227C4);
}
