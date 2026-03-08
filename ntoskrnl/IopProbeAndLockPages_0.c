/*
 * XREFs of IopProbeAndLockPages_0 @ 0x1403CE574
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140240590 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14061AE74 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(_DWORD *a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  char v8; // dl
  __int64 result; // rax

  v7 = a2 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a2;
  MiProbeAndLockPages(a1, v8, 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
