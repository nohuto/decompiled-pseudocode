/*
 * XREFs of RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00D845C
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00BD9D0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMSyncWalkRimObjList @ 0x1C00BDC0C (RIMSyncWalkRimObjList.c)
 */

void __fastcall RIMDirectStartUserModeRimDeviceClassNotifications(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
      124,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  RIMSyncWalkRimObjList(
    0LL,
    0LL,
    (void (__fastcall *)(_QWORD *, __int64))lambda_6f5ab2194e3463602bd95b9ff9de69b8_::_lambda_invoker_cdecl_,
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
      125,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
}
