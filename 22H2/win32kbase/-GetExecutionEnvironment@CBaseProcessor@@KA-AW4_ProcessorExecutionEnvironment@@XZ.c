/*
 * XREFs of ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C01F2AC0
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C0057AD4 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01CED30 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F4E24 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01F4F98 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F5058 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C01F8FD0 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C0081F54 (ApiSetEditionGetExecutionEvironment.c)
 */

__int64 __fastcall CBaseProcessor::GetExecutionEnvironment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_DWORD *)(v4 + 3456) )
    *(_DWORD *)(v4 + 3456) = ApiSetEditionGetExecutionEvironment();
  return *(unsigned int *)(v4 + 3456);
}
