struct tagWND *__fastcall MOVESIZEDATA::SHData_GetCustomDockTargetWindow(MOVESIZEDATA *this)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  char v5; // dl

  v2 = *((_QWORD *)this + 41);
  if ( !v2 )
    return 0LL;
  v4 = HMValidateHandleNoSecure(v2, 1);
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0xFu,
      (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
      *((_QWORD *)this + 41),
      v4);
  return (struct tagWND *)v4;
}
