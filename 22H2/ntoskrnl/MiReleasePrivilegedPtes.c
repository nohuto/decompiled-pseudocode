/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1406971C4
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x140A49F88 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140B9B7DC (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1403D6A90 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x4000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
