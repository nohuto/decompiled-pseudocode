/*
 * XREFs of ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C0007278
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0007110 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

struct tagINPUT_MESSAGE_SOURCE *__fastcall QHelper::GetInputMessageSource(QHelper *this, const struct CInputDest *a2)
{
  __int64 Queue; // rcx
  struct tagINPUT_MESSAGE_SOURCE *result; // rax

  Queue = CInputDest::GetQueue(this, 2LL);
  result = 0LL;
  if ( Queue )
    return (struct tagINPUT_MESSAGE_SOURCE *)(Queue + 420);
  return result;
}
