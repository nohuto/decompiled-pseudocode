_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, PEPROCESS *a2, char a3, __int64 a4)
{
  char v4; // bl
  char v6; // si
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _UNKNOWN **result; // rax
  char v12; // [rsp+64h] [rbp-54h]
  _OWORD v13[2]; // [rsp+68h] [rbp-50h] BYREF
  int v14; // [rsp+88h] [rbp-30h]

  v4 = a4;
  v12 = BYTE4(a4);
  v6 = (char)a2;
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
    McTemplateK0nqqq_EtwWriteTransfer(v8, (unsigned int)&UIPIClipboardEvent, v9, v10, (__int64)v13, a3, v4, v12);
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDD(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v7,
                          v9,
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          4,
                          18,
                          15,
                          (__int64)&WPP_a85011a72a953fa7ec44958fb9bca675_Traceguids,
                          v6,
                          a3,
                          v4);
  }
  return result;
}
