__int64 __fastcall ViMiscCheckKeRaiseIrql(unsigned __int8 a1)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax
  ULONG_PTR v3; // rdi

  v1 = a1;
  result = KeGetCurrentIrql();
  v3 = (unsigned __int8)result;
  if ( (unsigned __int8)result > a1 )
    result = VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, (unsigned __int8)result, a1, 0LL);
  if ( (unsigned __int8)v1 > 0xFu )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, v3, v1, 0LL);
  return result;
}
