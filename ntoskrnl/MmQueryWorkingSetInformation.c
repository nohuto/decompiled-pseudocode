/*
 * XREFs of MmQueryWorkingSetInformation @ 0x140299640
 * Callers:
 *     CmSipQueryProcessWorkingSetLimits @ 0x140388B3C (CmSipQueryProcessWorkingSetLimits.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405C9B48 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405C9DA4 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspQueryQuotaLimits @ 0x14071F77C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int64 *v10; // rbp
  unsigned __int8 v11; // dl

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = MiLockWorkingSetShared(v10);
  *a1 = v10[20] << 12;
  *a2 = v10[16] << 12;
  *a3 = v10[17] << 12;
  *a4 = v10[14] << 12;
  *a5 = v10[15] << 12;
  if ( *((char *)v10 + 184) < 0 )
    *a6 |= 4u;
  if ( (v10[23] & 0x40) != 0 )
    *a6 |= 1u;
  MiUnlockWorkingSetShared((__int64)v10, v11);
  return 0LL;
}
