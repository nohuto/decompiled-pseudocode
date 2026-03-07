unsigned __int64 Amd64PauseProfiling()
{
  __int64 v0; // r8
  unsigned __int64 result; // rax
  unsigned int *v2; // r9
  __int64 v3; // r10

  if ( HalpProfileInterface == &DefaultProfileInterface )
    v0 = HalpCounterStatus;
  else
    v0 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  result = (unsigned int)Amd64NumberCounters;
  if ( Amd64NumberCounters )
  {
    v2 = (unsigned int *)&Amd64EventSelectRegisters;
    v3 = (unsigned int)Amd64NumberCounters;
    do
    {
      result = *(_QWORD *)v0;
      if ( *(int *)(*(_QWORD *)v0 + 24LL) < 2 )
      {
        result = __readmsr(*v2) & 0xFFBFFFFF;
        __writemsr(*v2, result);
      }
      v0 += 8LL;
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
