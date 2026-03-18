/*
 * XREFs of ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00D4174
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0056FE0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C005808C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BACC0 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CInputDest::GetUserWindow(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 2 )
    return (struct tagWND *)*((_QWORD *)this + 10);
  else
    return 0LL;
}
