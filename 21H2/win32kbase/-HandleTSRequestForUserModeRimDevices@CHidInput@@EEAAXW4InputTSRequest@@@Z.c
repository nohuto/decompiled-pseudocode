/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00B4650
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00B4690 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00B4790 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00D3FB0 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 == 1 )
          return RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3);
      }
      else
      {
        return RIMDirectStartUserModeRimDeviceClassNotifications();
      }
    }
    else
    {
      return RIMDirectPnpRemoveUserModeRimDevices();
    }
  }
  return result;
}
