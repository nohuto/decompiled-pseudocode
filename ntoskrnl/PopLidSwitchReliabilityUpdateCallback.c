/*
 * XREFs of PopLidSwitchReliabilityUpdateCallback @ 0x140829020
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x1408294F4 (PopBroadcastSessionInfo.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140999A7C (PopEvaluatePowerButtonSuppressionState.c)
 */

__int64 __fastcall PopLidSwitchReliabilityUpdateCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int128 v6; // xmm0
  int v7; // edi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v9 = 0uLL;
  v5 = *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    v6 = *(_OWORD *)a1;
    v10 = *a2;
    v9 = v6;
    PopBroadcastSessionInfo(0LL, 20LL, &v9);
    v7 = *a2;
    if ( PopPlatformAoAc )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C394D0);
      BYTE1(PopPowerButtonSuppression) = v7 != 0 ? PopPowerButtonSuppression : 0;
      PopEvaluatePowerButtonSuppressionState();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
