/*
 * XREFs of ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033DD0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01FB240 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033B48 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033FF0 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C003595C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C003D444 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C00996B0 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C00997AC (ApiSeEditionDeferWinEventNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DeliverMouseMoveToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        const struct CInputDest *a3,
        struct tagPOINT *a4,
        struct _mouseCursorEvent *a5)
{
  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      if ( !(unsigned __int8)CInputDest::DoesBelongToForeground(a3, 0LL) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput(a3);
      ApiSeEditionDeferWinEventNotify();
      CMouseProcessor::UpdateGlobalCursorOwner(
        this,
        a3,
        a4,
        (const struct tagINPUT_MESSAGE_SOURCE *)(*((_QWORD *)a2 + 1) + 104LL));
      CMouseProcessor::DetectAndApplyMouseMovePostStrategy(this, a3, (const struct tagLOGICALPOINT *)&a4[1], a2, a5);
      ApiSetEditionEndDeferWinEventNotify();
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  }
}
