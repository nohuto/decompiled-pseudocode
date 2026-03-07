__int64 __fastcall CBaseInput::ivHandlePnpOtherPacket(__int64 a1, __int64 a2, void *a3)
{
  void *v3; // rdi
  __int64 v4; // rbx
  int v5; // r8d
  UNICODE_STRING v7; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      34,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
  }
  *(_QWORD *)(v4 + 16) = v4 + (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = *(_DWORD *)v4;
  v7 = *(UNICODE_STRING *)(v4 + 8);
  RIMVirtQueueRimDevChangeAsyncWorkItem(v3, &v7, v5);
  return 1LL;
}
