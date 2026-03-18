/*
 * XREFs of ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C004173C
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C00415CC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

struct tagINPUT_MESSAGE_SOURCE *__fastcall QHelper::GetInputMessageSource(
        QHelper *this,
        const struct CInputDest *a2,
        __int64 a3)
{
  __int64 Queue; // rcx
  struct tagINPUT_MESSAGE_SOURCE *result; // rax

  Queue = CInputDest::GetQueue((__int64)this, 2, a3);
  result = 0LL;
  if ( Queue )
    return (struct tagINPUT_MESSAGE_SOURCE *)(Queue + 412);
  return result;
}
