/*
 * XREFs of MiGetPfnRemovalRequested @ 0x14064B338
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiGetPfnRemovalRequested(__int64 a1)
{
  return (*(_BYTE *)(a1 + 35) & 0x40) != 0;
}
