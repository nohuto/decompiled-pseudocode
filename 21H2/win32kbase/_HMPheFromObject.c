/*
 * XREFs of _HMPheFromObject @ 0x1C002FB80
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00C2298 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1)
{
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!IS_USERCRIT_OWNED_SHARED()
     || ExIsResourceAcquiredExclusiveLite(gDomainHandleManagerLock) != 1
     && !ExIsResourceAcquiredSharedLite(gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  return (char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1;
}
