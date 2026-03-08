/*
 * XREFs of Controller_DeallocateIrqlTrackingArray @ 0x1C0032D9C
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C0036620 (Controller_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Controller_DeallocateIrqlTrackingArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 864);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_DWORD *)(a1 + 872) = 0;
  }
}
