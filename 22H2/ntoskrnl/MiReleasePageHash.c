/*
 * XREFs of MiReleasePageHash @ 0x140666CAC
 * Callers:
 *     MiDeletePagefile @ 0x140A32870 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140C69A40,
           (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (unsigned int)((a2 * (unsigned __int64)(unsigned int)dword_140C6974C) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140C6974C) & 0xFFF) != 0));
}
