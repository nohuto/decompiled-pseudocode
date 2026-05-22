/*
 * XREFs of ?Reset@EdgyImpl@@QEAAXXZ @ 0x18017BEC8
 * Callers:
 *     ??_EEdgyProcessor@@UEAAPEAXI@Z @ 0x180177D70 (--_EEdgyProcessor@@UEAAPEAXI@Z.c)
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180178080 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017AB24 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18017B240 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18017B600 (-StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@.c)
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x18017BD98 (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ??_G?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z @ 0x180178C84 (--_G-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x180178D08 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

void __fastcall EdgyImpl::Reset(EdgyImpl *this)
{
  CandidateIdentity *v2; // rcx

  v2 = (CandidateIdentity *)*((_QWORD *)this + 1);
  if ( v2 )
    CandidateIdentity::`scalar deleting destructor'(v2, 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( *(_QWORD *)this )
  {
    std::vector<CandidateIdentity>::`scalar deleting destructor'(*(CandidateIdentity ***)this);
    *(_QWORD *)this = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
