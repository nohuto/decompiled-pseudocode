unsigned __int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140C695C0,
           (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (unsigned int)((a2 * (unsigned __int64)(unsigned int)dword_140C692CC) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140C692CC) & 0xFFF) != 0));
}
