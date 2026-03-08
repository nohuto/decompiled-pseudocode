/*
 * XREFs of _HMPheFromObject @ 0x1C00A0D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall HMPheFromObject(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    v5 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 8)) != 1 )
    {
      v11 = SGDGetUserSessionState(v7, v6, v8, v9);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 8))
        || ExIsResourceAcquiredExclusiveLite(gDomainHandleManagerLock) != 1
        && !ExIsResourceAcquiredSharedLite(gDomainHandleManagerLock) )
      {
        __int2c();
      }
    }
  }
  return (char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a1;
}
