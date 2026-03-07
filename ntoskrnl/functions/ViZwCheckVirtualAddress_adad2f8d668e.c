__int64 __fastcall ViZwCheckVirtualAddress(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = BugCheckParameter3 - 1;
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFELL )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xE3uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return result;
}
