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
