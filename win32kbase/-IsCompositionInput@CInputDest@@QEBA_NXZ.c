/*
 * XREFs of ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C007D3DC
 * Callers:
 *     NtUserReportInertia @ 0x1C0002CA0 (NtUserReportInertia.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D1C4 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C01E3988 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01FCDE4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C0202354 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C35C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0231380 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     ApiSetEditionIsCompositionInputWindow @ 0x1C007D40C (ApiSetEditionIsCompositionInputWindow.c)
 */

bool __fastcall CInputDest::IsCompositionInput(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 2 )
    return (unsigned int)ApiSetEditionIsCompositionInputWindow(*((_QWORD *)this + 10)) == 1;
  else
    return *(_DWORD *)this != 0;
}
