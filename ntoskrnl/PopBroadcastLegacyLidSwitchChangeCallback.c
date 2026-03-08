/*
 * XREFs of PopBroadcastLegacyLidSwitchChangeCallback @ 0x140987B10
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 */

__int64 __fastcall PopBroadcastLegacyLidSwitchChangeCallback(_QWORD *a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9

  v3 = 0;
  v4 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - a1[1];
  if ( !v4 && a3 == 4 && a2 )
    ExNotifyCallback(ExCbPowerState, (PVOID)4, (PVOID)*a2);
  else
    return (unsigned int)-1073741811;
  return v3;
}
