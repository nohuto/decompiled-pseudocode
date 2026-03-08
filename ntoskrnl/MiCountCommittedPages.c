/*
 * XREFs of MiCountCommittedPages @ 0x140644EA8
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x140345CE0 (MiComputePageCommitment.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx

  v8 = MiLockWorkingSetShared(a4);
  v9 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL, 0LL);
  MiUnlockWorkingSetShared(a4, v8);
  return v9;
}
