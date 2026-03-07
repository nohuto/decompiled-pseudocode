__int64 __fastcall CTouchProcessor::ShouldGenerateMessagesForNode(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  unsigned int v3; // ebx
  CTouchProcessor *v5; // rcx

  v3 = 0;
  if ( *((_QWORD *)a3 + 2) )
  {
    v5 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(this, a2, a3) + 35);
    if ( ((unsigned __int8)v5 & 4) == 0 )
      return (unsigned int)CTouchProcessor::NodeMatchesMTGeneration(v5, a3) != 0;
  }
  return v3;
}
