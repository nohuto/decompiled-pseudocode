/*
 * XREFs of IopProbeAndLockPages @ 0x14036D5D4
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14061AE74 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages(_DWORD *a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  int v8; // r8d
  __int64 result; // rax

  v7 = a3 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a3;
  MiProbeAndLockPages(a1, 0, v8);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
