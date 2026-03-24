/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C0169C1C
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C0133B00 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C017FFE0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C018033C (RIMCmFreePointerDeviceContacts.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8

  v3 = 0;
  v4 = a2;
  if ( (a1[78] & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 536);
  if ( !a1[180] )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 537);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 538);
  v6 = v4 + 1;
  if ( a1[6] != 7 )
    v6 = v4;
  RIMCmFreePointerDeviceContacts(a1, a2, a3);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) >= 0 )
  {
    if ( Win32AllocPoolZInit(8LL * v6, 2020635474LL) )
    {
      a1[180] = v6;
      return 1;
    }
    else
    {
      RIMCmFreePointerDeviceContacts(a1, v7, v8);
    }
  }
  return v3;
}
