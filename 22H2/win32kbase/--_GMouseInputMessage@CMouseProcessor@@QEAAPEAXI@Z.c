/*
 * XREFs of ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01F4DEC
 * Callers:
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C00C21F0 (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01F8CB4 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01FAE14 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(
        CMouseProcessor::MouseInputMessage *this)
{
  CInputDest::SetEmpty((CMouseProcessor::MouseInputMessage *)((char *)this + 24));
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
