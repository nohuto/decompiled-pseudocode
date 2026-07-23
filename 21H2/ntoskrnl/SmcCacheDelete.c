/*
 * XREFs of SmcCacheDelete @ 0x14092D5CC
 * Callers:
 *     SmcProcessCreateRequest @ 0x14092A940 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x14092ABA0 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14092E730 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x14092D548 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14092D8D8 (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rbx

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
