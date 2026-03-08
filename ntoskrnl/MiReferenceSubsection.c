/*
 * XREFs of MiReferenceSubsection @ 0x1403327C0
 * Callers:
 *     MiTrimSection @ 0x1402A0034 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x1402D4788 (MiFlushAcquire.c)
 *     MiComputeDataFlushRange @ 0x1403324D0 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x1403A10A8 (MiPreventControlAreaDeletion.c)
 *     MiUpdateActiveSubsection @ 0x1406337C0 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x140214CC0 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x140332840 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiReferenceSubsection(ULONG_PTR a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  BOOL v4; // esi
  int v5; // ebp

  v2 = *(_QWORD *)a1;
  result = 1LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(v2 + 64) != 0LL;
    v5 = MiIncrementSubsectionViewCount(a1);
    if ( v5 > 1 && v4 && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(a1);
      *(_WORD *)(a1 + 32) |= 1u;
    }
    return (unsigned int)v5;
  }
  return result;
}
