/*
 * XREFs of PopGracefulShutdown @ 0x140A9D970
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeAttachProcess @ 0x1402F8D80 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1403D14B0 (CcWaitForCurrentLazyWriterActivity.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059B9D8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x1405CF398 (VfShutdownScheduleWatchdog.c)
 *     PopTransitionCheckpoint @ 0x14067F1CC (PopTransitionCheckpoint.c)
 *     PopCurrentPowerState @ 0x14078F3D0 (PopCurrentPowerState.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14081BD34 (PnpWaitForEmptyDeviceActionQueue.c)
 *     EtwWriteEndScenario @ 0x140842920 (EtwWriteEndScenario.c)
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x14097E450 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x14099E7B8 (SshSessionManagerFlushBuffers.c)
 *     SshSessionManagerTraceSystemStop @ 0x14099EC30 (SshSessionManagerTraceSystemStop.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B099C (PsWaitForAllProcesses.c)
 *     EtwShutdown @ 0x1409DFD2C (EtwShutdown.c)
 *     CmShutdownSystem @ 0x140A0E674 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x140A28834 (MmZeroPageFileAtShutdown.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x140AA42D0 (PopSetDevicesSystemState.c)
 *     PopShutdownSystem @ 0x140AA5DA4 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140AA79E8 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140AA8E60 (MmShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  PVOID *v4; // rbx
  struct _KPROCESS *v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  PopTransitionCheckpoint(10, 1);
  v6 = 0LL;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  PopCurrentPowerState(&v6);
  SshSessionManagerTraceSystemStop(SHIDWORD(v6), SDWORD2(v6));
  PopAdaptivePersistSystemInitatedRebootState(v1, v0);
  *(_QWORD *)(*(_QWORD *)&qword_140C3CD98 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C3CD90 )
    off_140C02178[0]();
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    ExAcquireFastMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    ExReleaseFastMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v3 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v2 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v2 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v3 + 16))(*(_QWORD *)(v3 + 24));
    }
    while ( 1 )
    {
      v4 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v4[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4[1], 0x64536F50u);
      ExFreePoolWithTag(v4, 0);
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
      (ULONG_PTR *)PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  SshSessionManagerFlushBuffers();
  EtwShutdown(0);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0LL);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C3CD90 )
  {
    v5 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C3CD90 + 8LL);
    if ( v5 )
      KeAttachProcess(v5);
    IoAddTriageDumpDataBlock(qword_140C3CD90, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C3CD90 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CD90 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CD90 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CD90 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CD90 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C3CD98 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C3CD98 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)qword_140C3CD64);
}
