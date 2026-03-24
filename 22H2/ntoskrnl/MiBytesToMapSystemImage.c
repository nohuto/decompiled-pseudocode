/*
 * XREFs of MiBytesToMapSystemImage @ 0x1406FF140
 * Callers:
 *     MiSessionInsertImage @ 0x1403A2274 (MiSessionInsertImage.c)
 *     MiSelectImageBase @ 0x14066AAC0 (MiSelectImageBase.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14075C8B4 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x14075E09C (MiGetSystemAddressForImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiBytesToMapSystemImage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v1 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 < a1 )
    return 0LL;
  v2 = (((unsigned int)dword_140C4CCB0 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140C4CC4C << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
