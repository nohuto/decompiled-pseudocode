/*
 * XREFs of ?BreakEditionParentNotifyLoop@CTouchProcessor@@QEAAHPEAX@Z @ 0x1C01E9AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01FBF9C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::BreakEditionParentNotifyLoop(CTouchProcessor *this, CPointerInfoNode *a2)
{
  CPointerInfoNode *v2; // rcx
  unsigned int v3; // ebx

  v3 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    return 1LL;
  LOBYTE(v3) = (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v2, gptiCurrent) != 0;
  return v3;
}
