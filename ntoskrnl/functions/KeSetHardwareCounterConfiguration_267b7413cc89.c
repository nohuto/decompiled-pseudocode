NTSTATUS __stdcall KeSetHardwareCounterConfiguration(PHARDWARE_COUNTER CounterArray, ULONG Count)
{
  unsigned int *v4; // rcx
  __int64 v5; // r9
  ULONG64 *p_Index; // r8
  unsigned int v7; // eax

  if ( Count > 0x10 )
    return -1073741811;
  if ( Count )
  {
    if ( KiHwCountersCount )
      return -1073741053;
    v4 = KiHwCounters;
    v5 = Count;
    p_Index = &CounterArray->Index;
    do
    {
      v7 = *(_DWORD *)p_Index;
      p_Index += 2;
      *v4++ = v7;
      --v5;
    }
    while ( v5 );
  }
  KiHwCountersCount = Count;
  return 0;
}
