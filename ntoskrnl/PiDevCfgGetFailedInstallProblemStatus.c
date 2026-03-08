/*
 * XREFs of PiDevCfgGetFailedInstallProblemStatus @ 0x1407FCC30
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgGetFailedInstallProblemStatus(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD v4[6]; // [rsp+60h] [rbp-18h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v4[0] = 0;
  v5 = 1;
  v6 = 0;
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              a1,
              1LL,
              a2,
              0LL,
              (__int64)&DEVPKEY_Device_InstallError,
              (__int64)&v5,
              (__int64)v4,
              4,
              (__int64)&v6,
              0) >= 0
    && v5 == 23
    && v6 == 4 )
  {
    switch ( v4[0] )
    {
      case 0xE0000228:
        return (unsigned int)-1073740656;
      case 0xE0000219:
        return (unsigned int)-1073740652;
      case 0xE0000250:
        return (unsigned int)-1073740655;
      case 0xE0000251:
        return (unsigned int)-1073740654;
      case 0xE0000252:
        return (unsigned int)-1073740653;
    }
  }
  return v2;
}
