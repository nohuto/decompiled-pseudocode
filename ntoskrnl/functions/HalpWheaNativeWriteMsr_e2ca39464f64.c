unsigned __int64 __fastcall HalpWheaNativeWriteMsr(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax

  result = a3;
  __writemsr(a2, a3);
  return result;
}
