/*
 * XREFs of HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1C0011C10
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CreateNewDSM @ 0x1C0031308 (HUBMISC_CreateNewDSM.c)
 */

__int64 __fastcall HUBPSM30_CreatingDeviceInConnectedWithResetInProgress(__int64 a1)
{
  return HUBMISC_CreateNewDSM(*(_QWORD *)(a1 + 960));
}
