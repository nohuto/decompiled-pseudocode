/*
 * XREFs of MiCountCommittedPages @ 0x1405498E8
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3214 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x14028D1E0 (MiComputePageCommitment.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int16 v8; // r9
  unsigned __int8 v9; // di
  __int64 v10; // rbx

  LOBYTE(v8) = MiLockWorkingSetShared((__int64)a4, a2, a3, a4);
  v9 = v8;
  v10 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL);
  MiUnlockWorkingSetShared((__int64)a4, v9);
  return v10;
}
