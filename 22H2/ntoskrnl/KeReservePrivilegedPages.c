/*
 * XREFs of KeReservePrivilegedPages @ 0x140394DA0
 * Callers:
 *     MiReservePrivilegedPtes @ 0x14075E2C0 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x1407738F8 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x1408C4E10 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x14077D250 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
