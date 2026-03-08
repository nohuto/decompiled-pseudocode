/*
 * XREFs of MiFlushCacheMdl @ 0x14065E8C0
 * Callers:
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiFlushCachedIoPfnRange @ 0x14062BB3C (MiFlushCachedIoPfnRange.c)
 *     MiFlushStaleCacheMap @ 0x14062BB84 (MiFlushStaleCacheMap.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403010D0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C65784;
  KeInvalidateAllCaches();
  return 1LL;
}
