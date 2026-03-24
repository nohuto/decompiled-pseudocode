/*
 * XREFs of MiFlushCacheMdl @ 0x1405543F8
 * Callers:
 *     MiReferenceIoPages @ 0x1402E8B74 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403A4700 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C4DF04;
  KeInvalidateAllCaches();
  return 1LL;
}
