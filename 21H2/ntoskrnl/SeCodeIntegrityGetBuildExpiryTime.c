/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x140811D70
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x140864400 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C1B958 )
    return qword_140C1B958();
  *a1 = 0LL;
  return 0LL;
}
