/*
 * XREFs of ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C003B4E4
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C00356F8 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C003B30C (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0041BA4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01D012C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F90E8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01F91EC (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F9294 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00C1BC8 (ApiSetEditionGetExecutionEvironment.c)
 */

__int64 CBaseProcessor::GetExecutionEnvironment()
{
  __int64 result; // rax

  result = CBaseProcessor::_exEnvironment;
  if ( !CBaseProcessor::_exEnvironment )
  {
    result = ApiSetEditionGetExecutionEvironment();
    CBaseProcessor::_exEnvironment = result;
  }
  return result;
}
