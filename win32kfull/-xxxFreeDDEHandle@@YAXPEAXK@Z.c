void __fastcall xxxFreeDDEHandle(void *a1, unsigned int a2, __int64 a3)
{
  char v5; // dl

  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      a3,
      53LL,
      4u,
      0xEu,
      0x35u,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      a1);
  xxxClientFreeDDEHandle(a1, a2, a3);
}
