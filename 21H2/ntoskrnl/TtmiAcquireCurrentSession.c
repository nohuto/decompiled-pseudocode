/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408FEFC4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FBC00 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FBF00 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408FBFC0 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1408FF178 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x140900ED8 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402830D0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1408FF5F0 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140902AC4 (TtmiLogError.c)
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
