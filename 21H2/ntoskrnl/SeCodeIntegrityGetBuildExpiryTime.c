/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x1407D3A80
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407D39F0 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C1DB78 )
    return qword_140C1DB78();
  *a1 = 0LL;
  return 0LL;
}
