char __fastcall ViMiscCheckKeLowerIrql(unsigned __int8 a1, unsigned __int8 a2)
{
  _UNKNOWN **v2; // rax
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = a2;
  v4 = a1;
  if ( a1 < a2 )
    LOBYTE(v2) = VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
  if ( (unsigned __int8)v4 < 2u || (unsigned __int8)v3 >= 2u )
  {
    if ( (unsigned __int8)v3 > 0xFu )
      LOBYTE(v2) = VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v4, v3, 0LL);
  }
  else
  {
    LOBYTE(v2) = KeGetPcr()->Prcb.DpcRequestSummary;
    if ( ((unsigned __int8)v2 & 1) != 0 )
      LOBYTE(v2) = VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v4, v3, 1LL);
  }
  return (char)v2;
}
