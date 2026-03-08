/*
 * XREFs of HUBPSM20_DetachingDeviceOnCleanup @ 0x1C0011CC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_DetachDevice @ 0x1C0031170 (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM20_DetachingDeviceOnCleanup(__int64 a1)
{
  HUBMISC_DetachDevice(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
