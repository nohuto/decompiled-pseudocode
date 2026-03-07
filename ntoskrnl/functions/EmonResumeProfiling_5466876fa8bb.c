unsigned __int64 EmonResumeProfiling()
{
  __int64 v0; // r9
  unsigned __int64 result; // rax
  __int64 v2; // r8
  unsigned int v3; // ecx
  unsigned __int64 *v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  unsigned int v7; // r11d
  unsigned __int64 v8; // rdx
  __int64 v9; // r10

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
        v6 = __readmsr(v3);
        result = (unsigned int)v6 | 0x400000LL;
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
    v7 = EmonNumberCounters;
    v8 = __readmsr(0x38Fu);
    if ( (unsigned int)v2 < EmonNumberCounters )
    {
      v9 = v0 + 8 * v2;
      do
      {
        if ( *(int *)(*(_QWORD *)v9 + 24LL) < 2 )
          _bittestandset64((__int64 *)&v8, (unsigned int)(v2 - EmonNumberArchCounters + 32));
        LODWORD(v2) = v2 + 1;
        v9 += 8LL;
      }
      while ( (unsigned int)v2 < v7 );
    }
    result = v8;
    __writemsr(0x38Fu, v8);
  }
  return result;
}
