/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C0040CB0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C0158800 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C003D340 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     McTemplateK0nq_EtwWriteTransfer @ 0x1C014FE7C (McTemplateK0nq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPISystemError(PEPROCESS *a1, PEPROCESS *a2)
{
  char v2; // di
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _UNKNOWN **result; // rax
  _OWORD v8[2]; // [rsp+50h] [rbp-38h] BYREF
  int v9; // [rsp+70h] [rbp-18h]

  v9 = 0;
  v2 = (char)a1;
  memset(v8, 0, sizeof(v8));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v8,
    7,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nq_EtwWriteTransfer(v4, v3, v5, v6, (__int64)v8);
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v3,
                          v5,
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          4,
                          18,
                          16,
                          (__int64)&WPP_e42196a162103e27bc3596ad59aba599_Traceguids,
                          v2);
  }
  return result;
}
