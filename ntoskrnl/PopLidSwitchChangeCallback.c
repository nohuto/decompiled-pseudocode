/*
 * XREFs of PopLidSwitchChangeCallback @ 0x140981400
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x1408294F4 (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopLidSwitchChangeCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  __int128 v4; // xmm0
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v6 = 0uLL;
  v3 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - a1[1];
  if ( v3 || a3 != 4 || !a2 )
    return 3221225485LL;
  v4 = *(_OWORD *)a1;
  v7 = *a2;
  v6 = v4;
  PopBroadcastSessionInfo(0, 20, (__int64)&v6);
  PopQueueWorkItem((__int64)&PopRecordLidStateWorkItem, DelayedWorkQueue);
  return 0LL;
}
