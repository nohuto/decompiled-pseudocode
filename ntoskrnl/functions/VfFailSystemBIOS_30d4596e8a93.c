__int64 __fastcall VfFailSystemBIOS(ULONG a1, unsigned int a2)
{
  __int64 result; // rax

  if ( ViDdiInitialized )
  {
    if ( (MmVerifierData & 0x40000000) != 0 )
      return VerifierBugCheckIfAppropriate(a1, a2, 0LL, 0LL, 0LL);
  }
  return result;
}
