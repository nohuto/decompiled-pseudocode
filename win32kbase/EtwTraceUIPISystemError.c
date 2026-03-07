_UNKNOWN **__fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, const struct tagPROCESSINFO *a2)
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
    7u,
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
                          (__int64)&WPP_a85011a72a953fa7ec44958fb9bca675_Traceguids,
                          v2);
  }
  return result;
}
