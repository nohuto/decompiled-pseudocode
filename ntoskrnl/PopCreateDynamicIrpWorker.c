__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  void *v4; // rdi
  int PowerThread; // esi

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    *v2 = a1;
    PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
    if ( PowerThread >= 0 )
      return v3;
  }
  else
  {
    PowerThread = -1073741670;
  }
  if ( v4 )
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v4);
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ExReleaseFastMutex(&PopIrpWorkerMutex);
  return (unsigned int)PowerThread;
}
