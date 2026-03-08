/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x14085FD10
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x14085FC80 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  if ( qword_140C37670 )
    return qword_140C37670();
  *a1 = 0LL;
  return 0LL;
}
