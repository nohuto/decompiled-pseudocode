/*
 * XREFs of PopPowerRequestNotifyUserSessionAttributed @ 0x14097E814
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1409A16F0 (TtmNotifySessionPowerRequestPresent.c)
 */

void __fastcall PopPowerRequestNotifyUserSessionAttributed(int a1, PVOID a2, void *a3)
{
  PVOID *v4; // rbx
  char v5; // di
  PVOID *i; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = 0LL;
  v5 = 0;
  PopAcquirePowerRequestPushLock(1);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    v4 = i;
    if ( *((_DWORD *)i + 26) == a1 && i[14] == a2 )
    {
      i[15] = a3;
      v5 = 1;
      break;
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( v5 )
  {
    if ( TtmIsEnabled(v10, v9) )
      TtmNotifySessionPowerRequestPresent(
        *((_DWORD *)v4 + 4),
        *((_DWORD *)v4 + 9),
        *((_DWORD *)v4 + 26),
        (unsigned int)v4[14],
        (__int64)v4[15]);
  }
}
