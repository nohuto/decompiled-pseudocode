/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1409A1950
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14099F580 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14099F880 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14099F940 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1409A1AFC (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A37F4 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
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
