/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C000B350
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C019755C (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DpiGetDxgAdapterSafe @ 0x1C01B3530 (DpiGetDxgAdapterSafe.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C01D8E60 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiPowerArbiterThread @ 0x1C021E730 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C001B304 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(KSPIN_LOCK *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 512, &LockHandle);
  if ( *((_DWORD *)a1 + 1040) != 4 && *((_DWORD *)a1 + 1041) == 1 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
