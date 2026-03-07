void __fastcall EditionIVSyncForeground(HWND a1)
{
  char v2; // dl
  char v3; // [rsp+60h] [rbp+8h] BYREF

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      108LL,
      4u,
      2u,
      0x6Cu,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      a1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v3);
  IVContainerForegroundSync::windowToForeground = a1;
  WakeRIT(0x100u);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v3);
}
