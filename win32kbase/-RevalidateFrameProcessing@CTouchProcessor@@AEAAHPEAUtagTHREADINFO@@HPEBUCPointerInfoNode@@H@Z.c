__int64 __fastcall CTouchProcessor::RevalidateFrameProcessing(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        int a3,
        const struct CPointerInfoNode *a4,
        int a5)
{
  unsigned int v5; // ebx
  CPointerInfoNode *v6; // rcx
  struct tagTHREADINFO *v7; // r10

  v5 = 0;
  if ( a3 && (*((_DWORD *)a2 + 318) & 0x2000) == 0 && (*((_DWORD *)a2 + 319) & 0x40) == 0
    || !(unsigned int)CPointerInfoNode::IsValid(a4) )
  {
    return 0LL;
  }
  LOBYTE(v5) = ((unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v6, v7) != 0) == (a5 != 0);
  return v5;
}
