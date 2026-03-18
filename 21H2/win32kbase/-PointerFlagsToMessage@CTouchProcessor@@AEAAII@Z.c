/*
 * XREFs of ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01CF204
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C4708 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C6D20 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA7E0 (WPP_RECORDER_AND_TRACE_SF_L.c)
 */

__int64 __fastcall CTouchProcessor::PointerFlagsToMessage(CTouchProcessor *this, int a2)
{
  bool v3; // al
  _UNKNOWN **v4; // r8
  const int *v5; // rdx
  char v6; // [rsp+40h] [rbp-18h]

  if ( (a2 & 0x10000) != 0 )
    return 582LL;
  if ( (a2 & 0x40000) != 0 )
    return 583LL;
  if ( (a2 & 0x20000) != 0 )
    return 581LL;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a2;
    v5 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v5) = v3;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_L(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v5,
      (_DWORD)v4,
      286,
      2,
      7,
      286,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
      v6);
  }
  return 0LL;
}
