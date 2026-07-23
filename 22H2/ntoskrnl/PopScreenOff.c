/*
 * XREFs of PopScreenOff @ 0x1408F0318
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x140779C60 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x140779EA0 (PopControlMonitor.c)
 */

ULONG __fastcall PopScreenOff(int a1)
{
  ULONG v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  v3 = -1;
  PopBlockSessionSwitch(1, &v3);
  v4 = 0;
  v5 = a1;
  PopControlMonitor(&v4, v3);
  return PopBlockSessionSwitch(0, &v3);
}
