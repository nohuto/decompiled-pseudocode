/*
 * XREFs of MiReservePageHash @ 0x140392518
 * Callers:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x140835934 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C695C0,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140C692CC) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140C692CC) & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
