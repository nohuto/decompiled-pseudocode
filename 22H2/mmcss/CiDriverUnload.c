/*
 * XREFs of CiDriverUnload @ 0x1C000C460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0004634 (WPP_SF_.c)
 *     CsTerminate @ 0x1C000C4C4 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_69ae99e199ca39a7c7a05b58b80334a5_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  return CsTerminate();
}
