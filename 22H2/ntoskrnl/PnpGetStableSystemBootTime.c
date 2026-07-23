/*
 * XREFs of PnpGetStableSystemBootTime @ 0x1408A1ED0
 * Callers:
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14089B730 (PipHardwareConfigGetLastUseTime.c)
 */

__int64 __fastcall PnpGetStableSystemBootTime(_QWORD *a1)
{
  int LastUseTime; // edx
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]

  memset(SystemInformation, 0, sizeof(SystemInformation));
  v5 = 0LL;
  LastUseTime = PipHardwareConfigGetLastUseTime((__int64)a1, a1);
  if ( LastUseTime < 0 )
  {
    LastUseTime = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
    if ( LastUseTime >= 0 )
      *a1 = *(_QWORD *)&SystemInformation[0] - v5;
  }
  return (unsigned int)LastUseTime;
}
