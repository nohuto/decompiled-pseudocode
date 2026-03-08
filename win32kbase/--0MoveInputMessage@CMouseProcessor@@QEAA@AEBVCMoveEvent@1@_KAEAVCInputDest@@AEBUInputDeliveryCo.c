/*
 * XREFs of ??0MoveInputMessage@CMouseProcessor@@QEAA@AEBVCMoveEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022AAF0
 * Callers:
 *     ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C022BC50 (-CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AE.c)
 * Callees:
 *     ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022A9C4 (--0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDelivery.c)
 */

CMouseProcessor::MoveInputMessage *__fastcall CMouseProcessor::MoveInputMessage::MoveInputMessage(
        CMouseProcessor::MoveInputMessage *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        __int64 a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  CMouseProcessor::MouseInputMessage::MouseInputMessage(this, a3, a2, a4, a5);
  *((_QWORD *)this + 43) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)this + 44) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 43) = &CMouseProcessor::CMoveEvent::`vftable';
  *((_QWORD *)this + 44) = (char *)this + 176;
  return this;
}
