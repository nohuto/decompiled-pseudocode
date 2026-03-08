/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x1407FCCCC
 * Callers:
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14094AE18 (IopLiveDumpAllocateMappingResources.c)
 *     PopHiberInitializeResources @ 0x140985824 (PopHiberInitializeResources.c)
 * Callees:
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C695C0, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
