/*
 * XREFs of KeReservePrivilegedPages @ 0x1403D1570
 * Callers:
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiReservePrivilegedPtes @ 0x1407F6AA8 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1407F7400 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x14087313C (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140881254 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
