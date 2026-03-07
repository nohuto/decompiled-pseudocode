__int64 (*HalpCompleteInitializeProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = HalpProfileInterface[16];
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
