/*
 * XREFs of HvViewMapContainsLockedPages @ 0x14071BE00
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140361750 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_BYTE *)(a1 + 32) & 4) != 0;
}
