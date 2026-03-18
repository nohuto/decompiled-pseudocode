/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1C013B8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C00365D0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C0074858 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x1C013C8A0 (McTemplateK0nqqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, PEPROCESS *a2, int a3, __int64 a4)
{
  int v4; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  char v10; // dl
  _UNKNOWN **result; // rax
  char v12; // [rsp+64h] [rbp-54h]
  _OWORD v13[2]; // [rsp+68h] [rbp-50h] BYREF
  int v14; // [rsp+88h] [rbp-30h]

  v4 = a4;
  v12 = BYTE4(a4);
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v13,
    6,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v7, (unsigned int)&UIPIClipboardEvent, v8, v9, (__int64)v13, a3, v4, v12);
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDD(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          v10,
                          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                          4u,
                          0xEu,
                          0xFu,
                          (__int64)&WPP_638838901a81363f021dd330a5466106_Traceguids,
                          a2,
                          a3,
                          v4);
  return result;
}
