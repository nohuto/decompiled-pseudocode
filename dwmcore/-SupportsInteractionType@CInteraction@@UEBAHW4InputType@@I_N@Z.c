__int64 __fastcall CInteraction::SupportsInteractionType(__int64 a1, int a2)
{
  if ( a2 == 7 )
    return 0LL;
  else
    return CInteractionProcessor::SupportsInteractionType(a1 + 288);
}
