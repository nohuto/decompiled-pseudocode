/*
 * XREFs of ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D110
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C022ED3C (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C007CFCC (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D1C4 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C007D6BC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C007EC74 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C00AD874 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C00AD970 (ApiSeEditionDeferWinEventNotify.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
      if ( !gpqForeground || CInputDest::GetQueue(a3, 2LL) != gpqForeground )
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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5072LL);
  }
}
