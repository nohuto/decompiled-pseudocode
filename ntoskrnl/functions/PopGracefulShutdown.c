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
