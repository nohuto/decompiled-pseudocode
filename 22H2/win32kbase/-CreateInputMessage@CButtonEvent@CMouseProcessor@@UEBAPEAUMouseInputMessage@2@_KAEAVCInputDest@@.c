/*
 * XREFs of ?CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1C01BF290
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     ??0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BE46C (--0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDelive.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CButtonEvent::CreateInputMessage(
        CMouseProcessor::CButtonEvent *this,
        unsigned __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  CMouseProcessor::ButtonInputMessage *v8; // rcx
  struct CMouseProcessor::MouseInputMessage *result; // rax

  v8 = (CMouseProcessor::ButtonInputMessage *)Win32AllocPool(400LL, 0x70724D50u);
  result = 0LL;
  if ( v8 )
    return CMouseProcessor::ButtonInputMessage::ButtonInputMessage(v8, this, a2, a3, a4);
  return result;
}
