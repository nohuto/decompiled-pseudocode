/*
 * XREFs of RIMIsEssentialUsage @ 0x1C01B8B10
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C01AF510 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  int v3; // edx

  v1 = 0;
  if ( a1 > 0x4D30u )
  {
    if ( a1 == 19775 || a1 == 19784 || a1 == 19785 || a1 == 20784 || a1 == 20785 || a1 == 23856 )
      return 1;
    v3 = a1 - 23880;
    v2 = a1 == 23880;
  }
  else
  {
    if ( a1 == 19760 || a1 == 4400 || a1 == 4401 || a1 == 7472 || a1 == 7485 || a1 == 7486 || a1 == 7489 )
      return 1;
    v3 = a1 - 16688;
    v2 = a1 == 16688;
  }
  if ( v2 || v3 == 1 )
    return 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v3) = 0;
  }
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      36,
      (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
  return v1;
}
