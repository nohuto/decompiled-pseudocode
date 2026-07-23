/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x1407217D0
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetAutoAlignmentProcess @ 0x1407216A4 (KeSetAutoAlignmentProcess.c)
 */

_QWORD *__fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v6; // rdi
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  --*(_WORD *)(a2 + 484);
  v6 = (volatile signed __int64 *)(a1 + 1080);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( *(_DWORD *)(a1 + 1528) != a3 )
  {
    *(_DWORD *)(a1 + 1528) = a3;
    v7 = (a3 >> 2) & 1;
    if ( *(_QWORD *)(a1 + 1408) )
      v7 = 1;
    KeSetAutoAlignmentProcess(a1, v7);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2, v8, v9, v10);
}
