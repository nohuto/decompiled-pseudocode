/*
 * XREFs of EtwTraceUIPIHookError @ 0x1C0164A70
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C003CD2C (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     McTemplateK0ndcdxx_EtwWriteTransfer @ 0x1C01656C4 (McTemplateK0ndcdxx_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1C0167D28 (WPP_RECORDER_AND_TRACE_SF_qDqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHookError(
        char a1,
        char a2,
        PETHREAD *a3,
        PETHREAD *a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  char v9; // si
  char v11; // di
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _UNKNOWN **result; // rax
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+28h] [rbp-80h]
  int v19; // [rsp+30h] [rbp-78h]
  int v20; // [rsp+38h] [rbp-70h]
  _OWORD v21[2]; // [rsp+60h] [rbp-48h] BYREF
  int v22; // [rsp+80h] [rbp-28h]

  v9 = (char)a4;
  memset(v21, 0, sizeof(v21));
  v11 = (char)a3;
  v22 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v21,
    2,
    a3,
    0LL,
    a4,
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0ndcdxx_EtwWriteTransfer(v13, v12, v14, v15, (__int64)v21, a5, a2, a6, a7, a8);
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDqq(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v12,
                          v14,
                          v15,
                          v17,
                          v18,
                          v19,
                          v20,
                          a1,
                          a2,
                          v11,
                          v9);
  }
  return result;
}
