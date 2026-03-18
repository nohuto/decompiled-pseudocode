/*
 * XREFs of ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0034240
 * Callers:
 *     NtUserReportInertia @ 0x1C0002E00 (NtUserReportInertia.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C00BCA10 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CF4BC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F9E20 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C01FC70C (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     ApiSetEditionIsCompositionInputWindow @ 0x1C0034270 (ApiSetEditionIsCompositionInputWindow.c)
 */

bool __fastcall CInputDest::IsCompositionInput(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 2 )
    return (unsigned int)ApiSetEditionIsCompositionInputWindow(*((_QWORD *)this + 10)) == 1;
  else
    return *(_DWORD *)this != 0;
}
