/*
 * XREFs of UsbhGetMaxPowerPerPort @ 0x1C002D400
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C002A738 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhGetHubPowerStatus @ 0x1C002D2B4 (UsbhGetHubPowerStatus.c)
 *     UsbhGetStatus @ 0x1C002D6A0 (UsbhGetStatus.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetMaxPowerPerPort(__int64 a1)
{
  _DWORD *v2; // rbx
  _WORD *PoolWithTag; // rdi
  unsigned int v4; // edx
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
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 2uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    if ( (int)UsbhGetStatus(a1, (_DWORD)PoolWithTag) >= 0 )
    {
      if ( (*(_BYTE *)PoolWithTag & 1) != 0 )
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
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  UsbhGetHubPowerStatus(a1);
  v4 = v2[759];
  if ( v4 )
  {
    result = v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          37,
          (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
          v4);
        return (unsigned int)v2[759];
      }
    }
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
