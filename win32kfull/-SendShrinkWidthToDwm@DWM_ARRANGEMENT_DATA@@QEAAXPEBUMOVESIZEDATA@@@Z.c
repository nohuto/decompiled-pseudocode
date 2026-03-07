void __fastcall DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm(
        DWM_ARRANGEMENT_DATA *this,
        const struct MOVESIZEDATA *a2,
        __int64 a3)
{
  void *v4; // rax
  char v5; // dl

  if ( *((_BYTE *)this + 4) )
  {
    *((_BYTE *)this + 4) = 0;
    v4 = (void *)UserReferenceDwmApiPort(this, a2, a3);
    DwmAsyncSendShrinkMoveSizeWindow(v4);
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        1u,
        0x1Au,
        (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
        *(_DWORD *)this);
  }
}
