/*
 * XREFs of UsbhAcquireBusInfo @ 0x1C00489A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetDeviceBusInfo @ 0x1C002BA9C (UsbhGetDeviceBusInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E788 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhAcquireBusInfo(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int DeviceBusInfo; // eax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x10u,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
      v12,
      a3);
  }
  *a4 = 0;
  if ( a3 >= 0x10 )
  {
    *a4 = 16;
    DeviceBusInfo = UsbhGetDeviceBusInfo(a1, 0LL, a5, a3);
    v10 = DeviceBusInfo;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v13) = *a4;
      LODWORD(v11) = DeviceBusInfo;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)*a4,
        1u,
        0x12u,
        (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids,
        v11,
        v13);
    }
    return v10;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x11u,
          (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids);
    }
    return 3221225507LL;
  }
}
