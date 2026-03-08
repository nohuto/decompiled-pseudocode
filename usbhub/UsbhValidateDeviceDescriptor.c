/*
 * XREFs of UsbhValidateDeviceDescriptor @ 0x1C0052668
 * Callers:
 *     UsbhGetHubDeviceInformation @ 0x1C002C4A8 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0037CEC (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C00388EC (UsbhGetUsbDeviceFlags.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhGetDeviceDescriptor @ 0x1C00546D0 (UsbhGetDeviceDescriptor.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 */

char __fastcall UsbhValidateDeviceDescriptor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  PDEVICE_OBJECT v6; // rcx
  unsigned __int16 v7; // r9
  __int64 v9; // rcx

  if ( *(_BYTE *)a2 < 0x12u )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v7 = 14;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a2 + 1) != 1 )
  {
    if ( a4 )
      *a4 = -1072693246;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v7 = 15;
LABEL_13:
    WPP_RECORDER_SF_((__int64)v6->DeviceExtension, 0, 1u, v7, (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids);
    return 0;
  }
  if ( *(_BYTE *)(a2 + 4) == 17 && !*(_BYTE *)(a2 + 5) && !*(_BYTE *)(a2 + 6) )
  {
    v9 = *(unsigned __int16 *)(a2 + 2);
    if ( (unsigned __int16)(v9 - 513) > 0xFEu )
    {
      Log(a1, 256, 1447314481, v9, 0LL);
      return 0;
    }
    if ( a5 )
      *a5 = 1;
  }
  return 1;
}
