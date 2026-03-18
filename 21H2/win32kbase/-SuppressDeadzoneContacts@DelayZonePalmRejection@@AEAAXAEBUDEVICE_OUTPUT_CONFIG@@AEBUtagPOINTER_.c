/*
 * XREFs of ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C01E6EF8
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E625C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C00DC800 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 */

void __fastcall DelayZonePalmRejection::SuppressDeadzoneContacts(
        DelayZonePalmRejection *this,
        const struct DEVICE_OUTPUT_CONFIG *a2,
        const struct tagPOINTER_INFO *a3)
{
  struct CPointerInputFrame *Next; // rbx
  const struct tagPOINTER_INFO *v4; // rdi
  struct CPointerInputFrame *v5; // rbp
  const struct DEVICE_OUTPUT_CONFIG *v6; // rsi

  Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
  v4 = a3;
  v5 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
  v6 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      30,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  }
  if ( Next )
  {
    while ( Next != v5 )
    {
      Next = CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
               (struct _LIST_ENTRY *)gpTouchProcessor,
               Next,
               v6,
               v4);
      if ( !Next )
        return;
    }
    CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext((struct _LIST_ENTRY *)gpTouchProcessor, Next, v6, v4);
  }
}
