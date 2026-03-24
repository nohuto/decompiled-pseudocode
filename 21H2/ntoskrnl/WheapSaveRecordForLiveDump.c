/*
 * XREFs of WheapSaveRecordForLiveDump @ 0x1409B3974
 * Callers:
 *     WheapCreateLiveDumpFromPreviousSession @ 0x1409B38C4 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapSaveRecordForLiveDump(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  struct _DEVICE_OBJECT *PoolWithTag; // rbx
  struct _DEVICE_OBJECT *NextDevice; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    PoolWithTag = (struct _DEVICE_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v1 + 32), 0x61656857u);
    if ( PoolWithTag )
    {
      LODWORD(PoolWithTag->NextDevice) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      PoolWithTag->AttachedDevice = (struct _DEVICE_OBJECT *)&PoolWithTag->CurrentIrp;
      memmove(&PoolWithTag->CurrentIrp, (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Timer);
      NextDevice = WheapDispatchPtr.NextDevice;
      if ( *(struct _DEVICE_OBJECT **)WheapDispatchPtr.NextDevice != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DriverObject )
        __fastfail(3u);
      *(_QWORD *)&PoolWithTag->Type = &WheapDispatchPtr.DriverObject;
      PoolWithTag->DriverObject = (struct _DRIVER_OBJECT *)NextDevice;
      *(_QWORD *)&NextDevice->Type = PoolWithTag;
      WheapDispatchPtr.NextDevice = PoolWithTag;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Timer);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
