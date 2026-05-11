/*
 * XREFs of PinReset @ 0x1C0024A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

_UNKNOWN **__fastcall PinReset(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            a2,
                            8u,
                            0x13u,
                            (__int64)&WPP_84ce55fa46883e648a4ace57328fee0f_Traceguids);
  }
  return result;
}
