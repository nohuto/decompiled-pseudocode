/*
 * XREFs of IopProbeAndLockPages_2 @ 0x140559D7C
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x140765DB0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14061D324 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_2(__int64 a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  char v8; // dl
  __int64 result; // rax

  v7 = a2 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a2;
  MiProbeAndLockPages(a1, v8, 1);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
