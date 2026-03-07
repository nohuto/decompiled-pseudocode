__int64 __fastcall CInteractionProcessor::SupportsAnyPointerType(CInteractionProcessor *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)CInteractionProcessor::SupportsPointerType(this, 2, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 4, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 3, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 5, 0)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 6, 0) )
  {
    return 1;
  }
  return v2;
}
