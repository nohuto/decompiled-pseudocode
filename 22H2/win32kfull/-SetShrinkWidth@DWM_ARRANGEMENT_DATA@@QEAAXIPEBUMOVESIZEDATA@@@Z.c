/*
 * XREFs of ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1C023B1A8
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01ED340 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F2058 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1C023AD04 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
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
        (__int64)&WPP_0bf01d38e7493d5599743f09d218946b_Traceguids,
        v3);
  }
}
