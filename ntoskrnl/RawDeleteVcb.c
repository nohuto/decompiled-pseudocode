/*
 * XREFs of RawDeleteVcb @ 0x1406F3E2C
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14028DD58 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1405A479C (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 184));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
