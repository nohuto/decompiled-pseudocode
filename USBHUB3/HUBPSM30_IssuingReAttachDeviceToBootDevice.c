/*
 * XREFs of HUBPSM30_IssuingReAttachDeviceToBootDevice @ 0x1C00121B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ReAttachDevice @ 0x1C00311C8 (HUBMISC_ReAttachDevice.c)
 */

__int64 __fastcall HUBPSM30_IssuingReAttachDeviceToBootDevice(__int64 a1)
{
  HUBMISC_ReAttachDevice(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
