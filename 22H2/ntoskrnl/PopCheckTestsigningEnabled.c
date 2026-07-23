/*
 * XREFs of PopCheckTestsigningEnabled @ 0x1408E10EC
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA6F0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 */

bool PopCheckTestsigningEnabled()
{
  char v0; // bl
  ULONG v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 8LL;
  v2 = 0;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v3, 8u, &v2) >= 0 )
    return (v3 & 0x200000000LL) != 0;
  return v0;
}
