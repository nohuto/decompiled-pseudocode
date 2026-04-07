/*
 * XREFs of ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x18008D7F8
 * Callers:
 *     ?UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180090FF0 (-UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180005758 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002D448 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v6[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  result = (__int64)wil::details::static_lazy<WindowFrameLogging>::get(
                      (__int64)a1,
                      _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v3 > 5u && (*(_QWORD *)(v3 + 16) & 0x200000000000LL) != 0 )
  {
    result = *(_QWORD *)(v3 + 24) & 0x200000000000LL;
    if ( result == *(_QWORD *)(v3 + 24) )
    {
      v4 = *a1;
      v9 = 0;
      v5 = v4;
      v8 = 8;
      v7 = &v5;
      return tlgWriteTransfer_EtwEventWriteTransfer(v3, byte_1800D03B9, 0LL, 0LL, 3, (__int64)v6);
    }
  }
  return result;
}
