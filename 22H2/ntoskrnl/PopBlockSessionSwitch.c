/*
 * XREFs of PopBlockSessionSwitch @ 0x140779C60
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x14057BF50 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x14057BFE0 (PoSessionEngagementUpdate.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408EE640 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1408F0318 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408F0364 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x1408F543C (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140725A44 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140725A94 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PopBlockSessionSwitch(char a1, ULONG *a2)
{
  ULONG result; // eax
  ULONG v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 0LL;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch((__int64)&v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(&v5, (__int64)&v4);
  }
  return result;
}
