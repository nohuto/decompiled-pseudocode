/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C003A560
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C0009040 (NtUserSetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C0078A00 (NtUserGetKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C007F9C0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1C007FBB0 (NtUserGetAsyncKeyState.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01FDB10 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0231A3C (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003A4AC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C003CD2C (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x1C0165800 (McTemplateK0nqqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        char a3,
        __int64 a4,
        char a5)
{
  char v5; // bl
  char v7; // di
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _UNKNOWN **result; // rax
  char v13; // [rsp+54h] [rbp-54h]
  _OWORD v14[2]; // [rsp+58h] [rbp-50h] BYREF
  int v15; // [rsp+78h] [rbp-30h]

  v5 = a4;
  v7 = (char)a1;
  v13 = BYTE4(a4);
  v15 = 0;
  memset(v14, 0, sizeof(v14));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    5u,
    a1,
    0LL,
    a2,
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v9, (unsigned int)&UIPIInputEvent, v10, v11, (__int64)v14, a5, v5, v13);
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qq(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v8,
                          v10,
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          4,
                          18,
                          14,
                          (__int64)&WPP_a85011a72a953fa7ec44958fb9bca675_Traceguids,
                          v7,
                          a3);
  }
  return result;
}
