/*
 * XREFs of ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C01A4700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall IOCPDispatcher::Wait(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  int v8; // edx
  char v10; // [rsp+28h] [rbp-20h]
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  *(_OWORD *)&a4->KeyContext = 0LL;
  *(_OWORD *)&a4->IoStatusBlock.Status = 0LL;
  if ( PsIsThreadTerminating(KeGetCurrentThread()) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        3,
        23,
        (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids);
    }
    return 3221225547LL;
  }
  else
  {
    v10 = a3;
    return ZwRemoveIoCompletionEx(*((_QWORD *)this + 343), a4, 1LL, v11, a2, v10);
  }
}
