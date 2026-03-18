/*
 * XREFs of MiBytesToMapSystemImage @ 0x140696AE4
 * Callers:
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiSelectImageBase @ 0x1406AAA28 (MiSelectImageBase.c)
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
  v2 = (unsigned int)dword_140C6997C + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140C65944 << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
