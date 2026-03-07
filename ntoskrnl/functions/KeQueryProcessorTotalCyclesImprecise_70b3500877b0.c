__int64 __fastcall KeQueryProcessorTotalCyclesImprecise(unsigned int a1)
{
  __int64 result; // rax

  result = KeGetPrcb(a1);
  if ( result )
    return *(_QWORD *)(result + 33152);
  return result;
}
