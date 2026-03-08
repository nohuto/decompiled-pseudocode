/*
 * XREFs of UsbhEnablePortIndicators @ 0x1C002F198
 * Callers:
 *     UsbhFinishStart @ 0x1C00378F4 (UsbhFinishStart.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C002F098 (UsbhDispatch_PindicatorEvent.c)
 */

_UNKNOWN **__fastcall UsbhEnablePortIndicators(__int64 a1)
{
  _DWORD *v2; // rbx
  _UNKNOWN **result; // rax
  unsigned __int16 i; // bx
  __int64 PortData; // rsi
  _DWORD *v6; // rax

  v2 = FdoExt(a1);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1u,
                            0xDu,
                            (__int64)&WPP_346fba89075f3ddfe8308178e462e0c2_Traceguids);
  if ( *((_BYTE *)v2 + 3008) )
  {
    for ( i = 1; ; ++i )
    {
      result = (_UNKNOWN **)FdoExt(a1);
      if ( i > *((unsigned __int8 *)result + 2938) )
        break;
      PortData = UsbhGetPortData(a1, i);
      if ( PortData )
      {
        v6 = FdoExt(a1);
        UsbhDispatch_PindicatorEvent(a1, PortData, 5, (__int64)(v6 + 346));
      }
    }
  }
  return result;
}
