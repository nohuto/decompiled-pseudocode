/*
 * XREFs of MiFlushCacheMdl @ 0x140660F10
 * Callers:
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiFlushCachedIoPfnRange @ 0x14062DFBC (MiFlushCachedIoPfnRange.c)
 *     MiFlushStaleCacheMap @ 0x14062E004 (MiFlushStaleCacheMap.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14036D4F0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C65C04;
  KeInvalidateAllCaches();
  return 1LL;
}
