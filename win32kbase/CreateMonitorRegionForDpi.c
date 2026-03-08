/*
 * XREFs of CreateMonitorRegionForDpi @ 0x1C003B6D0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003B638 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C003BDD8 (GetMonitorRectForDpi.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CreateMonitorRegionForDpi(__int64 a1, unsigned __int16 a2)
{
  int v2; // edx
  __int64 v3; // rbx
  int v4; // r8d
  struct _RECTL v6; // [rsp+40h] [rbp-18h] BYREF

  v6 = *(struct _RECTL *)GetMonitorRectForDpi(&v6, a1, a2);
  v3 = GreCreateRectRgnIndirect(&v6);
  if ( !v3 )
  {
    LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        25,
        10,
        (__int64)&WPP_f8563ecc31083c42ba75b8756f4e6851_Traceguids);
    }
  }
  return v3;
}
