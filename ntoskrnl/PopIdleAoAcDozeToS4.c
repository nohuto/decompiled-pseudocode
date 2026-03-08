/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x140998D70
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x14098FC28 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleAoAcDozeToS4(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD v5[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v6[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v7; // [rsp+48h] [rbp-18h]

  PopAcquirePolicyLock(a1);
  PopTraceSystemIdleS0LowPowerDoze();
  dword_140C3C9B0 = 0;
  v7 = 0LL;
  if ( dword_140C3C9C8 == 1 )
    goto LABEL_10;
  if ( dword_140C3C9C8 != 2 )
  {
    if ( dword_140C3C9C8 == 3 )
    {
      v6[0] = 13;
      goto LABEL_11;
    }
    if ( dword_140C3C9C8 == 4 )
    {
      v6[0] = 14;
      goto LABEL_11;
    }
LABEL_10:
    v6[0] = 6;
    goto LABEL_11;
  }
  v6[0] = 11;
  if ( qword_140C3CDB8
    && MEMORY[0xFFFFF78000000008] - qword_140C3CDB8 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v6[0] = 12;
  }
LABEL_11:
  v5[2] = 0;
  v6[1] = 128;
  v5[0] = 3;
  v5[1] = -2147483612;
  PopExecutePowerAction(v6, 0, v5, 5, 1u);
  PopReleasePolicyLock(v2, v1, v3);
  _InterlockedAnd(&dword_140C3C9CC, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
