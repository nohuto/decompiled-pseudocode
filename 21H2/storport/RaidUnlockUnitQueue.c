/*
 * XREFs of RaidUnlockUnitQueue @ 0x1C0011B7C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C007479C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 693) = 0;
}
