unsigned __int64 EmonPauseProfiling()
{
  __int64 v0; // r9
  unsigned __int64 result; // rax
  __int64 v2; // r8
  unsigned int v3; // ecx
  unsigned __int64 *v4; // r10
  __int64 v5; // r11
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdx
  __int64 v8; // r10

  if ( HalpProfileInterface == &DefaultProfileInterface )
    v0 = HalpCounterStatus;
  else
    v0 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  result = (unsigned int)EmonNumberArchCounters;
  v2 = 0LL;
  if ( EmonNumberArchCounters )
  {
    v3 = 390;
    v4 = (unsigned __int64 *)v0;
    v2 = (unsigned int)EmonNumberArchCounters;
    v5 = (unsigned int)EmonNumberArchCounters;
    do
    {
      result = *v4;
      if ( *(int *)(*v4 + 24) < 2 )
      {
        result = __readmsr(v3) & 0xFFBFFFFF;
        __writemsr(v3, result);
      }
      ++v3;
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( (unsigned int)EmonVersion >= 2 )
  {
    v6 = EmonNumberCounters;
    v7 = __readmsr(0x38Fu);
    if ( (unsigned int)v2 < EmonNumberCounters )
    {
      v8 = v0 + 8 * v2;
      do
      {
        if ( *(int *)(*(_QWORD *)v8 + 24LL) < 2 )
          _bittestandreset64((__int64 *)&v7, (unsigned int)(v2 - EmonNumberArchCounters + 32));
        LODWORD(v2) = v2 + 1;
        v8 += 8LL;
      }
      while ( (unsigned int)v2 < v6 );
    }
    result = v7;
    __writemsr(0x38Fu, v7);
  }
  return result;
}
