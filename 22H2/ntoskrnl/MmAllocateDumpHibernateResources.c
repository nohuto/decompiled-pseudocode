/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x14078EA9C
 * Callers:
 *     PopHiberInitializeResources @ 0x140777840 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140897EBC (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EF40, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0), a3, a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
