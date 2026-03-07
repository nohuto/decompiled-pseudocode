void __fastcall DelayZonePalmRejection::SuppressDeadzoneContacts(
        DelayZonePalmRejection *this,
        const struct DEVICE_OUTPUT_CONFIG *a2,
        const struct tagPOINTER_INFO *a3,
        __int64 a4)
{
  struct _LIST_ENTRY **Next; // rbx
  const struct tagPOINTER_INFO *v5; // rdi
  struct _LIST_ENTRY **v6; // rbp
  const struct DEVICE_OUTPUT_CONFIG *v7; // rsi
  PDEVICE_OBJECT v8; // rcx
  CTouchProcessor *v9; // rcx

  Next = (struct _LIST_ENTRY **)*((_QWORD *)this + 7);
  v5 = a3;
  v6 = (struct _LIST_ENTRY **)*((_QWORD *)this + 8);
  v7 = a2;
  v8 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      30,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  if ( Next )
  {
    while ( 1 )
    {
      v9 = *(CTouchProcessor **)(SGDGetUserSessionState(v8, a2, a3, a4) + 3424);
      if ( Next == v6 )
        break;
      Next = CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(v9, (struct CPointerInputFrame *)Next, v7, v5);
      if ( !Next )
        return;
    }
    CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(v9, (struct CPointerInputFrame *)Next, v7, v5);
  }
}
