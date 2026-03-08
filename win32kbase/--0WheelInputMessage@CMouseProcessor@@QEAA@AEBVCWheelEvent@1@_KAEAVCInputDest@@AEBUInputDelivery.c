/*
 * XREFs of ??0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022AB6C
 * Callers:
 *     ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C022BE50 (-CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@A.c)
 * Callees:
 *     ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022A9C4 (--0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDelivery.c)
 */

CMouseProcessor::WheelInputMessage *__fastcall CMouseProcessor::WheelInputMessage::WheelInputMessage(
        CMouseProcessor::WheelInputMessage *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        __int64 a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  CMouseProcessor::MouseInputMessage::MouseInputMessage(this, a3, a2, a4, a5);
  *((_QWORD *)this + 43) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)this + 44) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 43) = &CMouseProcessor::CWheelEvent::`vftable';
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 7);
  *((_QWORD *)this + 44) = (char *)this + 176;
  return this;
}
