/*
 * XREFs of ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C01F72C8
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F632C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C01F821C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall CMouseProcessor::CButtonEvent::GetMessageWParamInfo(CMouseProcessor::CButtonEvent *this)
{
  if ( !*((_QWORD *)this + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7371);
  return *(_QWORD *)(*((_QWORD *)this + 5) + 16LL);
}
