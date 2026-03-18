/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1409A49E0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A2610 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A2910 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A29D0 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1409A4B8C (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A687C (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036F3B0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1409A4FE0 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A83F4 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1758LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
