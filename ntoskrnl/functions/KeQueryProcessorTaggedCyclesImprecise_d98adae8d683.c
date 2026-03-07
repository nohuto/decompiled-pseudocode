__int64 __fastcall KeQueryProcessorTaggedCyclesImprecise(unsigned int a1, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a2;
  result = KeGetPrcb(a1);
  if ( result )
    return *(_QWORD *)(result + 8 * v2 + 33160);
  return result;
}
