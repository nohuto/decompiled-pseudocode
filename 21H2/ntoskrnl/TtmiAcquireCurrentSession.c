/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408FF124
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FBD60 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FC060 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408FC120 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1408FF2D8 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x140901038 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14023A7B0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1408FF750 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
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
