__int64 (*HalpInitializeUncoreProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = HalpProfileInterface[19];
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
