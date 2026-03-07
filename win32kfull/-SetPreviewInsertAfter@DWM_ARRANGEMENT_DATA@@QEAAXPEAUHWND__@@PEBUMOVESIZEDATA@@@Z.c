void __fastcall DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(
        DWM_ARRANGEMENT_DATA *this,
        HWND a2,
        const struct MOVESIZEDATA *a3)
{
  void *v4; // rax
  char v5; // dl

  if ( *((HWND *)this + 1) != a2 )
  {
    *((_QWORD *)this + 1) = a2;
    v4 = (void *)UserReferenceDwmApiPort(this, a2, a3);
    DwmAsyncSendSnapPreviewInsertAfter(v4);
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        27LL,
        4u,
        1u,
        0x1Bu,
        (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
        *((_QWORD *)this + 1));
  }
}
