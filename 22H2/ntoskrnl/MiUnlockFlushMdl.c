/*
 * XREFs of MiUnlockFlushMdl @ 0x1402D7A68
 * Callers:
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1402A6070 (MiUnlockMdlWritePages.c)
 *     MiReleaseControlAreaWaiters @ 0x1402D7A34 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1402D7BB8 (MiDecrementModifiedWriteCount.c)
 *     MiRetardMdl @ 0x140530C30 (MiRetardMdl.c)
 */

_QWORD *__fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3, _DWORD *a4)
{
  CSHORT MdlFlags; // ax
  _QWORD *result; // rax

  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(MemoryDescriptorList);
    MdlFlags = MemoryDescriptorList->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(
    &MemoryDescriptorList[1].Next,
    (unsigned __int64)&MemoryDescriptorList[1]
  + 8
  * ((MemoryDescriptorList->ByteCount
    + 4095LL
    + (unsigned __int64)((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)) >> 12),
    a3,
    a4);
  result = (_QWORD *)MiDecrementModifiedWriteCount(a2, 0LL);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
