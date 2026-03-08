/*
 * XREFs of ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x1C023D1DC
 * Callers:
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x1C009BA28 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F3238 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x1C023D518 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

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
