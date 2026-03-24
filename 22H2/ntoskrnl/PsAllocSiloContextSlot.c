/*
 * XREFs of PsAllocSiloContextSlot @ 0x1407905B0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x1407906D8 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
