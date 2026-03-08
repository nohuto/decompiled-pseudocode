/*
 * XREFs of IopProbeAndLockPages_1 @ 0x1405536D0
 * Callers:
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14061AE74 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(_DWORD *a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
