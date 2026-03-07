void ACPIDeviceWorkerThread()
{
  KIRQL v0; // al
  _QWORD *v1; // rdi
  KIRQL v2; // dl
  __int64 v3; // rcx
  _QWORD *v4; // rax
  unsigned int v5; // ebx

  v0 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  ACPIWorkerBusy = 1;
  while ( 1 )
  {
    v1 = (_QWORD *)ACPIDeviceWorkQueue;
    v2 = v0;
    if ( (__int64 *)ACPIDeviceWorkQueue == &ACPIDeviceWorkQueue )
      break;
    v3 = *(_QWORD *)ACPIDeviceWorkQueue;
    if ( *(_QWORD *)(*(_QWORD *)ACPIDeviceWorkQueue + 8LL) != ACPIDeviceWorkQueue
      || (v4 = *(_QWORD **)(ACPIDeviceWorkQueue + 8), *v4 != ACPIDeviceWorkQueue) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = *((_DWORD *)v1 - 2);
    *((_DWORD *)v1 - 2) = 0;
    *v1 = 0LL;
    KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*(v1 - 18) + 56LL))(v1 - 21, v5);
    v0 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  }
  ACPIWorkerBusy = 0;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v0);
}
