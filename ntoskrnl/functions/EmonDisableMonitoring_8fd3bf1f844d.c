__int64 __fastcall EmonDisableMonitoring(int a1, unsigned int *a2)
{
  unsigned int Number; // eax
  __int64 result; // rax
  unsigned int i; // ebx

  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    result = HalpCounterStatus;
  else
    result = HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
  if ( a2 )
  {
    i = *a2;
    if ( (*a2 & 0x40000000) != 0 )
      i = EmonNumberArchCounters + (i & 0xBFFFFFFF);
LABEL_12:
    EmonConfigureCounter(i, 0, 0LL, 0, 0);
    EmonFreeCounter(i);
    return (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2],
                           0xFFFFFFFE);
  }
  for ( i = 0; i < EmonNumberCounters; result += 8LL )
  {
    if ( !*(_DWORD *)(*(_QWORD *)result + 24LL) && *(_DWORD *)(*(_QWORD *)result + 32LL) == a1 )
      break;
    ++i;
  }
  if ( i != EmonNumberCounters )
    goto LABEL_12;
  return result;
}
