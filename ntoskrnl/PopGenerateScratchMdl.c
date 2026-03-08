/*
 * XREFs of PopGenerateScratchMdl @ 0x14058C6D4
 * Callers:
 *     PopGenerateUnHibernatedMdl @ 0x140A9F9AC (PopGenerateUnHibernatedMdl.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateScratchMdl(__int64 a1, __int64 a2)
{
  PMDL result; // rax

  result = MmAllocatePagesForMdlEx(
             (PHYSICAL_ADDRESS)0x1000000LL,
             (PHYSICAL_ADDRESS)0xFFFFFFFFFFFLL,
             0LL,
             a2 << 12,
             MmCached,
             5u);
  if ( result )
  {
    result->Next = *(struct _MDL **)(a1 + 128);
    *(_QWORD *)(a1 + 136) += a2;
    *(_QWORD *)(a1 + 128) = result;
  }
  return result;
}
