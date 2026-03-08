/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1407F7400
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x140A472B8 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140B975CC (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403D1570 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
