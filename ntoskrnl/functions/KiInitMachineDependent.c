char KiInitMachineDependent()
{
  int v0; // ebp
  char v1; // si
  unsigned int v2; // edi
  __int64 v3; // rcx
  char result; // al
  int v5; // eax
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  if ( (KiCacheErrataMonitor & 3) != 0 )
  {
    if ( (KiCacheErrataMonitor & 2) != 0 )
    {
      v5 = 2;
    }
    else if ( MEMORY[0xFFFFF780000002EC] )
    {
      v5 = 1;
    }
    else
    {
      v5 = KiTLBCOverride & 1;
    }
    KiTLBCOverride = v5;
  }
  else
  {
    KiTLBCOverride = 0;
  }
  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      if ( v0 )
      {
        KiSetSystemAffinityThreadToProcessor(v2, 0LL);
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v2, &PreviousAffinity);
        v0 = 1;
      }
      if ( v2 == (_DWORD)KeNumberProcessors_0 - 1 )
        v1 = 1;
      if ( (KiCacheErrataMonitor & 3) != 0 )
      {
        LOBYTE(v3) = v1;
        result = KiInitializeCacheErrataSupport(v3);
        if ( !result )
          break;
      }
      LOBYTE(v3) = v1;
      KiInitializeMTRR(v3);
      if ( (KeFeatureBits & 0x400000) != 0 )
        __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
      if ( ++v2 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( KeGetCurrentPrcb()->CpuVendor == 2 )
      KiIa32MiscEnable = __readmsr(0x1A0u);
    if ( v0 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    KiUserCodePatchMutex.Count = 1;
    KiUserCodePatchMutex.Owner = 0LL;
    KiUserCodePatchMutex.Contention = 0;
    LOWORD(KiUserCodePatchMutex.Event.Header.Lock) = 1;
    KiUserCodePatchMutex.Event.Header.Size = 6;
    KiUserCodePatchMutex.Event.Header.SignalState = 0;
    KiUserCodePatchMutex.Event.Header.WaitListHead.Blink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    KiUserCodePatchMutex.Event.Header.WaitListHead.Flink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    memset(&KiAltContextWorkQueue, 0, 0x80uLL);
    KiAltContextWorkQueue.Blink = &KiAltContextWorkQueue;
    *(&Dpc + 3) = (ULONG_PTR)KiAltReturnDpcRoutine;
    result = 1;
    KiAltContextWorkQueue.Flink = &KiAltContextWorkQueue;
    stru_140C40978.WorkerRoutine = (void (__fastcall *)(void *))KiAltReturnWorkerRoutine;
    qword_140C40998 = (__int64)KiAltContextProcessMcheckAltReturn;
    Lock = 0LL;
    LODWORD(Dpc) = 275;
    *(&Dpc + 4) = (ULONG_PTR)&KiAltContextWorkQueue;
    *(&Dpc + 7) = 0LL;
    *(&Dpc + 2) = 0LL;
    stru_140C40978.Parameter = &KiAltContextWorkQueue;
    stru_140C40978.List.Flink = 0LL;
    KiAltReturnInitialized = 1;
  }
  return result;
}
