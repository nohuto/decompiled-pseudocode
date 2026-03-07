__int64 __fastcall PsSetProcessWin32Process(_QWORD *Object, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v4; // rbp
  unsigned int v8; // edi
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v11; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = Object + 135;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 135), 0LL);
  if ( a2 )
  {
    if ( (*((_DWORD *)Object + 281) & 8) != 0 || Object[161] )
    {
      v8 = -1073741558;
    }
    else
    {
      Object[161] = a2;
      if ( ((Object[302] | (Object[302] >> 30)) & 0x3FFFFFFFLL) != 0 )
      {
        Pool2 = ExAllocatePool2(256LL, 40LL, 1698982228LL);
        v11 = (struct _WORK_QUEUE_ITEM *)Pool2;
        if ( Pool2 )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v11[1].List.Flink = (struct _LIST_ENTRY *)Object;
          v11->WorkerRoutine = (void (__fastcall *)(void *))PspTimerDelayWorkerRoutine;
          v11->Parameter = v11;
          v11->List.Flink = 0LL;
          ExQueueWorkItem(v11, NormalWorkQueue);
        }
      }
    }
  }
  else if ( Object[161] == a3 )
  {
    Object[161] = 0LL;
  }
  else
  {
    v8 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v8;
}
