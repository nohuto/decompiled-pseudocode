/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x140688B68
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406892C0 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(__int64 *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 152);
  v3 = *(_QWORD *)(*a1 + 160);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((void *)(v3 + 4), v2);
  return 0LL;
}
