/*
 * XREFs of ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1C023DE18
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01EE504 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F3238 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1C023D974 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

void __fastcall DWM_ARRANGEMENT_DATA::SetShrinkWidth(DWM_ARRANGEMENT_DATA *this, int a2, const struct MOVESIZEDATA *a3)
{
  int v3; // r9d
  char v4; // dl
  char v5; // r8

  v3 = (*((_DWORD *)a3 + 50) & 0x20) != 0 ? a2 : 0;
  if ( *(_DWORD *)this != v3 )
  {
    *(_DWORD *)this = v3;
    *((_BYTE *)this + 4) = 1;
    v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( v4 || v5 )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        (__int64)gFullLog,
        5u,
        1u,
        0x19u,
        (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
        v3);
  }
}
