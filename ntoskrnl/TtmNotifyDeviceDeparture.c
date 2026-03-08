/*
 * XREFs of TtmNotifyDeviceDeparture @ 0x14099F880
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmpFindDeviceByToken @ 0x1409A06D8 (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x1409A1950 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1409A475C (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifyDeviceDeparture(unsigned int a1, __int64 a2)
{
  char DeviceByToken; // bl
  int v5; // eax
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  DeviceByToken = 0;
  v5 = TtmiAcquireCurrentSession(&v10);
  if ( v5 >= 0 )
  {
    DeviceByToken = TtmpFindDeviceByToken(v10, a1, a2, &v11);
    if ( DeviceByToken )
    {
      v7 = *(_DWORD *)(v11 + 600);
      if ( (v7 & 4) == 0 )
      {
        v8 = v10;
        *(_DWORD *)(v11 + 600) = v7 | 4;
        TtmiScheduleSessionWorker(v8, 1LL);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyDeviceDeparture", 623LL, (unsigned int)v5, (unsigned int)v5);
  }
  LOBYTE(v6) = DeviceByToken;
  return TtmiLogDeviceDepartureNotified(a1, a2, v6);
}
