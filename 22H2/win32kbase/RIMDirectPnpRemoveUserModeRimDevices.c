/*
 * XREFs of RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00BAADC
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00BA9A0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C00711B0 (RIMSyncWalkRimObjList.c)
 */

void __fastcall RIMDirectPnpRemoveUserModeRimDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // dl
  bool v5; // dl

  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      103,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  RIMSyncWalkRimObjList(
    0LL,
    0LL,
    (void (__fastcall *)(_QWORD *, __int64))lambda_c7aafdfab81c67e8cf983f9f6cce2cc7_::_lambda_invoker_cdecl_,
    a4);
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      104,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
}
