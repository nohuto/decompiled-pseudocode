/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x14099CEC0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1409941B8 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleAoAcDozeToS4(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _DWORD v4[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v5[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v6; // [rsp+48h] [rbp-18h]

  PopAcquirePolicyLock(a1);
  PopTraceSystemIdleS0LowPowerDoze();
  dword_140C22710 = 0;
  v6 = 0LL;
  if ( dword_140C22728 == 1 )
    goto LABEL_10;
  if ( dword_140C22728 != 2 )
  {
    if ( dword_140C22728 == 3 )
    {
      v5[0] = 13;
      goto LABEL_11;
    }
    if ( dword_140C22728 == 4 )
    {
      v5[0] = 14;
      goto LABEL_11;
    }
LABEL_10:
    v5[0] = 6;
    goto LABEL_11;
  }
  v5[0] = 11;
  if ( qword_140C22818
    && MEMORY[0xFFFFF78000000008] - qword_140C22818 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v5[0] = 12;
  }
LABEL_11:
  v4[2] = 0;
  v5[1] = 128;
  v4[0] = 3;
  v4[1] = -2147483612;
  PopExecutePowerAction(v5, 0, v4, 5, 1u);
  PopReleasePolicyLock(v2, v1);
  _InterlockedAnd(&dword_140C2272C, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
