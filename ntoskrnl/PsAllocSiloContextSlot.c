/*
 * XREFs of PsAllocSiloContextSlot @ 0x14080C7A0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x14080C8BC (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
