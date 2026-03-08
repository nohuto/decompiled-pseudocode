/*
 * XREFs of HUBPSM20_PoweredOffSuspended @ 0x1C00122F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleasePortPowerReference @ 0x1C0010B94 (HUBMUX_ReleasePortPowerReference.c)
 */

__int64 __fastcall HUBPSM20_PoweredOffSuspended(__int64 a1)
{
  HUBMUX_ReleasePortPowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 1000LL;
}
