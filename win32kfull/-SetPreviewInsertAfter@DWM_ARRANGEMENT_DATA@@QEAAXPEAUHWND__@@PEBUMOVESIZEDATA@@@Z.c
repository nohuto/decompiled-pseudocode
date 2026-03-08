/*
 * XREFs of ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1C023DC70
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01EE504 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F3238 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1C023D974 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DwmAsyncSendSnapPreviewInsertAfter @ 0x1C02701D8 (DwmAsyncSendSnapPreviewInsertAfter.c)
 */

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
