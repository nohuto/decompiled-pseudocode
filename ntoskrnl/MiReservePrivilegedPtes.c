/*
 * XREFs of MiReservePrivilegedPtes @ 0x1407F6AA8
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403D1570 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
