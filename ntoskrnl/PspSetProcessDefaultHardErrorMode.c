/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x14076AD54
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeSetAutoAlignmentProcess @ 0x14076AE0C (KeSetAutoAlignmentProcess.c)
 */

char __fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rdi
  unsigned int v8; // esi

  v3 = (volatile signed __int64 *)(a1 + 1080);
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( *(_DWORD *)(a1 + 1528) != a3 )
  {
    *(_DWORD *)(a1 + 1528) = a3;
    v8 = (a3 >> 2) & 1;
    if ( *(_QWORD *)(a1 + 1408) )
      v8 = 1;
    KeSetAutoAlignmentProcess(a1, v8);
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread(a2);
}
