/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x14080197C
 * Callers:
 *     PopEnableHiberFile @ 0x140803C60 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14094DE38 (IopLiveDumpAllocateMappingResources.c)
 *     PopHiberInitializeResources @ 0x1409888D4 (PopHiberInitializeResources.c)
 * Callees:
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C69A40, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
