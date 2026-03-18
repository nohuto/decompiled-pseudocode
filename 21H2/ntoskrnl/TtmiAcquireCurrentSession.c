/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1409A4B90
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A1960 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A1A20 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1409A4DA8 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A6AB0 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1409A5200 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
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
