/*
 * XREFs of PopGenerateMdl @ 0x14058C638
 * Callers:
 *     PopAllocatePages @ 0x140A9E958 (PopAllocatePages.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateMdl(__int64 a1)
{
  unsigned __int64 v2; // rdi
  PMDL PagesForMdl; // rax
  PMDL v4; // r8
  unsigned __int64 v5; // rax

  v2 = __rdtsc();
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, a1 << 12, MmCached, 0xDu);
  v4 = PagesForMdl;
  if ( PagesForMdl )
  {
    PagesForMdl->Next = *(struct _MDL **)(qword_140C3CDA0 + 128);
    *(_QWORD *)(qword_140C3CDA0 + 128) = PagesForMdl;
    *(_QWORD *)(qword_140C3CDA0 + 136) += a1;
  }
  v5 = __rdtsc();
  qword_140C3CFE8 += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v2;
  return v4;
}
