PVOID __stdcall ExAllocateFromLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return Lookaside->L.AllocateEx((unsigned int)Lookaside->L.Type, Lookaside->L.Size, Lookaside->L.Tag, Lookaside);
  }
  return result;
}
