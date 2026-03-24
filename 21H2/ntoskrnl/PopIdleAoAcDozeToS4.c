/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x1408F5540
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402815D0 (PopDeepSleepClearDisengageReason.c)
 *     PopExecutePowerAction @ 0x1407751C8 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1408EC754 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleAoAcDozeToS4(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-30h] BYREF
  int v5; // [rsp+38h] [rbp-28h]
  _DWORD v6[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v7; // [rsp+48h] [rbp-18h]

  PopAcquirePolicyLock(a1);
  PopTraceSystemIdleS0LowPowerDoze();
  dword_140C23390 = 0;
  v7 = 0LL;
  if ( dword_140C233A8 == 1 )
    goto LABEL_10;
  if ( dword_140C233A8 != 2 )
  {
    if ( dword_140C233A8 == 3 )
    {
      v6[0] = 13;
      goto LABEL_11;
    }
    if ( dword_140C233A8 == 4 )
    {
      v6[0] = 14;
      goto LABEL_11;
    }
LABEL_10:
    v6[0] = 6;
    goto LABEL_11;
  }
  v6[0] = 11;
  if ( qword_140C23498
    && MEMORY[0xFFFFF78000000008] - qword_140C23498 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v6[0] = 12;
  }
LABEL_11:
  v5 = 0;
  v6[1] = 128;
  v4 = 0x8000002400000003uLL;
  PopExecutePowerAction((__int64)v6, 0, &v4, 5, 1u);
  PopReleasePolicyLock(v2, v1);
  _InterlockedAnd(&dword_140C233AC, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
