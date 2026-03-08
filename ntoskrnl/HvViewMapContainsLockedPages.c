/*
 * XREFs of HvViewMapContainsLockedPages @ 0x140731AA4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402B2B14 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 4) != 0;
}
