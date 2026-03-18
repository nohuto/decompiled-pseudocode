/*
 * XREFs of PopGracefulShutdown @ 0x140AA0B20
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeAttachProcess @ 0x140363D20 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1403D69D0 (CcWaitForCurrentLazyWriterActivity.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DEF8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x1405D1848 (VfShutdownScheduleWatchdog.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     PopCurrentPowerState @ 0x1407A7258 (PopCurrentPowerState.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140813664 (PnpWaitForEmptyDeviceActionQueue.c)
 *     EtwWriteEndScenario @ 0x140845760 (EtwWriteEndScenario.c)
 *     ObShutdownSystem @ 0x14097AEB0 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x140981500 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x1409A1848 (SshSessionManagerFlushBuffers.c)
 *     SshSessionManagerTraceSystemStop @ 0x1409A1CC0 (SshSessionManagerTraceSystemStop.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B39EC (PsWaitForAllProcesses.c)
 *     EtwShutdown @ 0x1409E2BCC (EtwShutdown.c)
 *     CmShutdownSystem @ 0x140A11388 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x140A2B594 (MmZeroPageFileAtShutdown.c)
 *     IoShutdownSystem @ 0x140A99BF4 (IoShutdownSystem.c)
 *     PopBuildDeviceNotifyList @ 0x140AA71FC (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x140AA7500 (PopSetDevicesSystemState.c)
 *     PopShutdownSystem @ 0x140AA8FD4 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140AAAC18 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140AAC090 (MmShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
  *(_QWORD *)(*(_QWORD *)&qword_140C3CE58 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C3CE50 )
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
  if ( *(_QWORD *)&qword_140C3CE50 )
  {
    v5 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C3CE50 + 8LL);
    if ( v5 )
      KeAttachProcess(v5);
    IoAddTriageDumpDataBlock(qword_140C3CE50, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C3CE50 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CE50 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CE50 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CE50 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3CE50 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C3CE58 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C3CE58 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)qword_140C3CE24);
}
