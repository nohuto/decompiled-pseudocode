__int64 __fastcall IOCPDispatcher::Wait(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  int v8; // r8d
  bool v10; // al
  void *v11; // rdx
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0;
  *(_OWORD *)&a4->KeyContext = 0LL;
  *(_OWORD *)&a4->IoStatusBlock.Status = 0LL;
  if ( !PsIsThreadTerminating(KeGetCurrentThread()) )
    return ZwRemoveIoCompletionEx(*((_QWORD *)this + 363), a4, 1LL, v12, a2, a3);
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = &WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids;
    LOBYTE(v11) = v10;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v11,
      v8,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      3,
      25,
      (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids);
  }
  return 3221225547LL;
}
