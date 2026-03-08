/*
 * XREFs of HUBPSM20_Disconnected @ 0x1C0011D20
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach @ 0x1C00337E8 (HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach.c)
 */

__int64 __fastcall HUBPSM20_Disconnected(__int64 a1)
{
  HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
