/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408FF014
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FBC50 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FBF50 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408FC010 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1408FF1C8 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x140900F28 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140315400 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1408FF640 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140902B14 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1762LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
