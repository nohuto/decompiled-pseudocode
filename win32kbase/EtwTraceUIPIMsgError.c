/*
 * XREFs of EtwTraceUIPIMsgError @ 0x1C00C4A30
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C003CD2C (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDDD @ 0x1C00C4B3C (WPP_RECORDER_AND_TRACE_SF_qqDDD.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     McTemplateK0nqxx_EtwWriteTransfer @ 0x1C0165970 (McTemplateK0nqxx_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIMsgError(PEPROCESS *a1, PEPROCESS *a2, char a3, char a4, __int64 a5)
{
  char v6; // bl
  char v8; // r15
  char v9; // r14
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _UNKNOWN **result; // rax
  int v15; // [rsp+20h] [rbp-A8h]
  int v16; // [rsp+28h] [rbp-A0h]
  int v17; // [rsp+30h] [rbp-98h]
  int v18; // [rsp+38h] [rbp-90h]
  _OWORD v19[2]; // [rsp+70h] [rbp-58h] BYREF
  int v20; // [rsp+90h] [rbp-38h]

  memset(v19, 0, sizeof(v19));
  v20 = 0;
  v6 = 1;
  v8 = (char)a2;
  v9 = (char)a1;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v19,
    1,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxx_EtwWriteTransfer(v11, v10, v12, v13, (__int64)v19, a3, a4, a5);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = v6;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqDDD(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v10,
                          v12,
                          v13,
                          v15,
                          v16,
                          v17,
                          v18,
                          v8,
                          v9,
                          a3,
                          a4,
                          a5);
  }
  return result;
}
