/*
 * XREFs of CmpVolumeContextFree @ 0x140872E58
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140721364 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x140872E20 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup((__int64)Privileges);
  CmSiFreeMemory(Privileges);
}
