/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x1407D39A0
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407D3910 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C1DB98 )
    return qword_140C1DB98();
  *a1 = 0LL;
  return 0LL;
}
