/*
 * XREFs of PopBlockSessionSwitch @ 0x140994CF0
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x14059BAF0 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x14059BB7C (PoSessionEngagementUpdate.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140990B24 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x140995234 (PopScreenOff.c)
 *     PopScreenOn @ 0x140995280 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x140998BBC (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x14067F698 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PopBlockSessionSwitch(char a1, int *a2)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 0LL;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch((__int64)&v5, (__int64)a2);
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
