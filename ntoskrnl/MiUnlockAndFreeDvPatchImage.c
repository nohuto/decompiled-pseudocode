/*
 * XREFs of MiUnlockAndFreeDvPatchImage @ 0x14063EDD4
 * Callers:
 *     MiLockPatchIatForDV @ 0x14063E0B0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MiUnlockDriverPages @ 0x14087313C (MiUnlockDriverPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndFreeDvPatchImage(char *P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 15);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    IoFreeMdl(*((PMDL *)P + 15));
  }
  MiUnlockDriverPages(P + 16);
  ExFreePoolWithTag(P, 0);
}
