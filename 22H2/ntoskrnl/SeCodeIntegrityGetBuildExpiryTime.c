/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x1408641D0
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x140864140 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C37A70 )
    return qword_140C37A70();
  *a1 = 0LL;
  return 0LL;
}
