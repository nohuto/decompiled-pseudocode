/*
 * XREFs of PopLidSwitchChangeCallback @ 0x1408E4140
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x1407969A4 (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopLidSwitchChangeCallback(_QWORD *a1, int *a2, int a3)
{
  __int128 v3; // xmm0
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 != *a1
    || *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 != a1[1]
    || a3 != 4
    || !a2 )
  {
    return 3221225485LL;
  }
  v3 = *(_OWORD *)a1;
  v6 = *a2;
  v5 = v3;
  PopBroadcastSessionInfo(0, 20, (__int64)&v5);
  PopQueueWorkItem((__int64)&PopRecordLidStateWorkItem, DelayedWorkQueue);
  return 0LL;
}
