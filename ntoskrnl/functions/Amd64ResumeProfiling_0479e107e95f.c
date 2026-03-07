unsigned __int64 Amd64ResumeProfiling()
{
  __int64 v0; // r8
  unsigned __int64 result; // rax
  unsigned int *v2; // r9
  __int64 v3; // r10
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax

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
        v4 = *v2;
        v5 = __readmsr(*v2);
        result = (unsigned int)v5 | 0x400000LL;
        __writemsr(v4, result);
      }
      v0 += 8LL;
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
