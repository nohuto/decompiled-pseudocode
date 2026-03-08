/*
 * XREFs of UsbhGetMaxPowerPerPort @ 0x1C002C9B4
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C0029DB0 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhGetHubPowerStatus @ 0x1C002C868 (UsbhGetHubPowerStatus.c)
 *     UsbhGetStatus @ 0x1C002CC48 (UsbhGetStatus.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetMaxPowerPerPort(__int64 a1)
{
  _DWORD *v2; // rbx
  __int64 Pool2; // rax
  _BYTE *v4; // rdi
  __int64 result; // rax
  unsigned int v6; // ecx

  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      34,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  Pool2 = ExAllocatePool2(64LL, 2LL, 1112885333LL);
  v4 = (_BYTE *)Pool2;
  if ( Pool2 )
  {
    if ( (int)UsbhGetStatus(a1, Pool2) >= 0 )
    {
      if ( (*v4 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            35,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
        v2[761] = 500;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            36,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
        v2[761] = 100;
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  UsbhGetHubPowerStatus(a1);
  if ( v2[759] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          37,
          (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
          v2[759]);
    }
    return (unsigned int)v2[759];
  }
  else
  {
    result = (unsigned int)v2[761];
    if ( !(_DWORD)result )
    {
      v6 = v2[760];
      result = 500LL;
      if ( v6 )
        return v6;
    }
  }
  return result;
}
