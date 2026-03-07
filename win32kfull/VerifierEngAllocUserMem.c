PVOID __fastcall VerifierEngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  if ( (unsigned int)VerifierRandomFailure(cjMemSize) )
    return 0LL;
  else
    return EngAllocUserMem(cjMemSize, ulTag);
}
