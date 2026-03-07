void __fastcall __noreturn ACPIWorkerThread(PVOID StartContext)
{
  KIRQL v1; // al
  _QWORD *v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rsi
  KIRQL CurrentIrql; // al
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int WaitMode; // [rsp+20h] [rbp-48h]
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  ACPIThread = KeGetCurrentThread();
  KeSetPriorityThread(KeGetCurrentThread(), 16);
  Object[1] = &ACPITerminateEvent;
  Object[0] = &ACPIProcessWorkQueueEvent;
  while ( 1 )
  {
    if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray) == 1 )
      PsTerminateSystemThread(0);
    while ( 1 )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
      v2 = (_QWORD *)ACPIWorkQueue;
      v3 = v1;
      if ( (__int64 *)ACPIWorkQueue == &ACPIWorkQueue )
      {
        KeClearEvent(&ACPIProcessWorkQueueEvent);
        v2 = 0LL;
      }
      else
      {
        if ( *(__int64 **)(ACPIWorkQueue + 8) != &ACPIWorkQueue
          || (v4 = *(_QWORD *)ACPIWorkQueue, *(_QWORD *)(*(_QWORD *)ACPIWorkQueue + 8LL) != ACPIWorkQueue) )
        {
          __fastfail(3u);
        }
        ACPIWorkQueue = *(_QWORD *)ACPIWorkQueue;
        *(_QWORD *)(v4 + 8) = &ACPIWorkQueue;
        v2[1] = 0LL;
        *v2 = 0LL;
      }
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v3);
      if ( !v2 )
        break;
      v5 = (void (__fastcall *)(__int64))v2[2];
      v6 = v2[3];
      v5(v6);
      if ( KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          CurrentIrql = KeGetCurrentIrql();
          WPP_RECORDER_SF_dqqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            v9,
            v10,
            WaitMode,
            CurrentIrql,
            (char)v5,
            v6,
            (char)v2);
        }
      }
    }
  }
}
