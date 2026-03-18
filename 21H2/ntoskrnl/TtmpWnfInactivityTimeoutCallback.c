/*
 * XREFs of TtmpWnfInactivityTimeoutCallback @ 0x1409A4000
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     TtmiResetInactivityTimer @ 0x1409A332C (TtmiResetInactivityTimer.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x1409A8964 (TtmiLogInactivityTimoutUpdate.c)
 */

__int64 __fastcall TtmpWnfInactivityTimeoutCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0;
  v3 = 4;
  v1 = ExQueryWnfStateData(a1, &v5, v4, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 == 4 )
    {
      ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
      TtmpTerminalInactivityTimeout = -(__int64)(unsigned int)(10000 * v4[0]);
      TtmiLogInactivityTimoutUpdate();
      ExReleaseResourceLite(&TtmpTerminalInactivityLock);
      TtmiResetInactivityTimer(0xDu);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
