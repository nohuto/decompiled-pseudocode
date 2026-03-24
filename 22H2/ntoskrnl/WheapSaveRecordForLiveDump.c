/*
 * XREFs of WheapSaveRecordForLiveDump @ 0x1409B3AB4
 * Callers:
 *     WheapCreateLiveDumpFromPreviousSession @ 0x1409B3A04 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapSaveRecordForLiveDump(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  struct _LIST_ENTRY *PoolWithTag; // rbx
  struct _LIST_ENTRY *Flink; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v1 + 32), 0x61656857u);
    if ( PoolWithTag )
    {
      LODWORD(PoolWithTag[1].Flink) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      PoolWithTag[1].Blink = PoolWithTag + 2;
      memmove(&PoolWithTag[2], (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.DriverObject);
      Flink = WheapDispatchPtr.Queue.ListEntry.Flink;
      if ( WheapDispatchPtr.Queue.ListEntry.Flink->Flink != (struct _LIST_ENTRY *)&WheapDispatchPtr.DeviceType )
        __fastfail(3u);
      PoolWithTag->Flink = (struct _LIST_ENTRY *)&WheapDispatchPtr.DeviceType;
      PoolWithTag->Blink = Flink;
      Flink->Flink = PoolWithTag;
      WheapDispatchPtr.Queue.ListEntry.Flink = PoolWithTag;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.DriverObject);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
