void __fastcall CTouchProcessor::SetPointerInfoNodeTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  CTouchProcessor *v12; // rcx
  struct CPointerInfoNode *v13; // rdi
  BOOL v14; // ebx
  CTouchProcessor *v15; // rcx

  v13 = CTouchProcessor::LookupNode(this, a2, a3);
  v14 = (*((_DWORD *)gptiCurrent + 318) & 0x2000) != 0 || (*((_DWORD *)gptiCurrent + 319) & 0x40) != 0;
  CTouchProcessor::SetPointerInfoNodeTargetInt(v12, v13, a4, a5, a6, a7, a8, v14, a10);
  if ( a9 && (unsigned int)CPointerInfoNode::GetHistoryCount(v13) > 1 )
    CTouchProcessor::UpdateHistoryWithTarget(this, a2, v13, a4, a5, a6, a7, v14, a10);
  if ( a7 )
  {
    if ( !v14 )
      CTouchProcessor::SetQFrameNonCoalescable(v15, a2, v13);
  }
}
