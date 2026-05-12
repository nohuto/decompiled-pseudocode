/*
 * XREFs of RaidIsUnitQueueLocked @ 0x1C0011B6C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C007479C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidIsUnitQueueLocked(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 693);
}
