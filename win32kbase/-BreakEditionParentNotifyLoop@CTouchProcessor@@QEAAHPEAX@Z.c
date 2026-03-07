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
