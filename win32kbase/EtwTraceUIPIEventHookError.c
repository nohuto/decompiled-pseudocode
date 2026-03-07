_UNKNOWN **__fastcall EtwTraceUIPIEventHookError(__int64 a1, PETHREAD *a2, PETHREAD *a3)
{
  char v3; // si
  char v4; // di
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-98h]
  int v12; // [rsp+28h] [rbp-90h]
  int v13; // [rsp+30h] [rbp-88h]
  int v14; // [rsp+38h] [rbp-80h]
  _OWORD v15[2]; // [rsp+70h] [rbp-48h] BYREF
  int v16; // [rsp+90h] [rbp-28h]

  v3 = (char)a3;
  memset(v15, 0, sizeof(v15));
  v4 = (char)a2;
  v16 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v15,
    3,
    a2,
    0LL,
    a3,
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxqqddq_EtwWriteTransfer(
      v7,
      v6,
      v8,
      v9,
      (__int64)v15,
      *(_DWORD *)(a1 + 28),
      *(_QWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a1 + 48),
      *(_DWORD *)(a1 + 52),
      *(_DWORD *)(a1 + 56));
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqDqq(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v6,
                          v8,
                          v9,
                          v11,
                          v12,
                          v13,
                          v14,
                          a1,
                          *(_QWORD *)(a1 + 16),
                          *(_DWORD *)(a1 + 56),
                          v4,
                          v3);
  }
  return result;
}
