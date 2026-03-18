/*
 * XREFs of MiReservePageHash @ 0x140394198
 * Callers:
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1408355E4 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C69A40,
             (unsigned int)((a1 * (unsigned __int64)(unsigned int)dword_140C6974C) >> 12)
           + (((a1 * (unsigned __int64)(unsigned int)dword_140C6974C) & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
