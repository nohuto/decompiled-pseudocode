/*
 * XREFs of PspSetProcessAffinityUpdateMode @ 0x14077D040
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     PspLockUnlockProcessExclusive @ 0x140241524 (PspLockUnlockProcessExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PspUpdateSingleProcessAffinity @ 0x140908930 (PspUpdateSingleProcessAffinity.c)
 */

__int64 __fastcall PspSetProcessAffinityUpdateMode(__int64 a1, int *a2)
{
  _KPROCESS *Process; // rdi
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  signed __int32 DirectoryTableBase; // edx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *a2;
  v5 = (*a2 & 2) << 17;
  v6 = v5 | 0x80000;
  if ( (v4 & 1) == 0 )
    v6 = v5;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v8 = DirectoryTableBase;
  do
  {
    if ( (v8 & 0xC0000) == v6 )
      break;
    if ( (DirectoryTableBase & 0x40000) != 0 )
      return 3221225473LL;
    v8 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
           v6 | DirectoryTableBase & 0xFFF3FFFF,
           DirectoryTableBase);
    v9 = DirectoryTableBase == v8;
    DirectoryTableBase = v8;
  }
  while ( !v9 );
  if ( v6 == 0x40000 )
  {
    PspLockUnlockProcessExclusive((__int64)Process, a1);
  }
  else if ( (v6 & 0x80000) != 0 && KeDynamicPartitioningSupported )
  {
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspAffinityUpdateLock, 0LL);
    if ( !(unsigned int)KeIsEmptyAffinityEx(PspLastUpdateAffinityMask) )
      PspUpdateSingleProcessAffinity(a1, Process, PspLastUpdateAffinityMask);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspAffinityUpdateLock);
    KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
    KeLeaveCriticalRegionThread(a1, v10, v11, v12);
  }
  return 0LL;
}
