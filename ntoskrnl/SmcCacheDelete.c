/*
 * XREFs of SmcCacheDelete @ 0x1409D7D8C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D50AC (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D532C (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1409D8EC0 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x1409D7CF4 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1409D8070 (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rdi

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(a1, v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
