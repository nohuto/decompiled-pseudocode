/*
 * XREFs of EtwTraceUIPIHandleValidationError @ 0x1C003CC40
 * Callers:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C0077D40 (ValidateHandleSecure.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C008F460 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C003CD2C (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x1C003CDFC (WPP_RECORDER_AND_TRACE_SF_DDqq.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     McTemplateK0nxqq_EtwWriteTransfer @ 0x1C0165A0C (McTemplateK0nxqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHandleValidationError(
        struct tagPROCESSINFO *a1,
        const struct tagPROCESSINFO *a2,
        char a3,
        char a4)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-88h]
  int v12; // [rsp+28h] [rbp-80h]
  int v13; // [rsp+30h] [rbp-78h]
  _OWORD v14[2]; // [rsp+60h] [rbp-48h] BYREF
  int v15; // [rsp+80h] [rbp-28h]

  memset(v14, 0, sizeof(v14));
  v15 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    4u,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nxqq_EtwWriteTransfer(v7, v6, v8, v9, (__int64)v14, a3, a4);
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_DDqq(WPP_GLOBAL_Control->AttachedDevice, v6, v8, v9, v11, v12, v13);
  }
  return result;
}
