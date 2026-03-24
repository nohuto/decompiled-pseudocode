/*
 * XREFs of MiReleasePrivilegedPtes @ 0x1407738F8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x14075E09C (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408DA794 (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140A92C18 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x140394DA0 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
