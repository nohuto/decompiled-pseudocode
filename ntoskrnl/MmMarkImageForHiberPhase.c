/*
 * XREFs of MmMarkImageForHiberPhase @ 0x140AA9DFC
 * Callers:
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140640440 (MiMarkHotPatchesForHiberPhase.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140AA9324 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v1 = MiLookupDataTableEntry(a1, 2);
  v2 = ((unsigned int)dword_140C694FC + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  result = MiMarkNonPagedHiberPhasePages(v1[6], v2 + v1[6] + *((unsigned int *)v1 + 16) - 1LL, 0);
  if ( v2 )
    return MiMarkHotPatchesForHiberPhase((__int64)v1);
  return result;
}
