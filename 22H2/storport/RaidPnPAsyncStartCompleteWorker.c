/*
 * XREFs of RaidPnPAsyncStartCompleteWorker @ 0x1C00327F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000B9B4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterStartDevice @ 0x1C002F9D4 (RaidAdapterStartDevice.c)
 */

void __fastcall RaidPnPAsyncStartCompleteWorker(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rbx
  IRP *v4; // rbp
  unsigned int started; // edi

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (IRP *)Context[1];
  RaidAcquireAdapterRemoveLock((__int64)DeviceExtension);
  started = RaidAdapterStartDevice((char *)DeviceExtension, (__int64)v4);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 35));
  IoUninitializeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0);
  RaidCompleteRequestEx(v4, 0, started);
}
