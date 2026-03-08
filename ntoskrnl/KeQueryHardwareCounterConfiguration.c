/*
 * XREFs of KeQueryHardwareCounterConfiguration @ 0x140972010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeQueryHardwareCounterConfiguration(
        PHARDWARE_COUNTER CounterArray,
        ULONG MaximumCount,
        PULONG Count)
{
  ULONG v3; // eax
  __int64 v6; // rdx
  ULONG64 v7; // rax
  __int64 v8; // rcx

  v3 = KiHwCountersCount;
  *Count = KiHwCountersCount;
  if ( v3 > MaximumCount )
    return -1073741789;
  v6 = 0LL;
  if ( v3 )
  {
    do
    {
      v7 = KiHwCounters[v6];
      v8 = (unsigned int)v6;
      v6 = (unsigned int)(v6 + 1);
      CounterArray[v8].Type = PMCCounter;
      CounterArray[v8].Reserved = 0;
      CounterArray[v8].Index = v7;
    }
    while ( (unsigned int)v6 < *Count );
  }
  return 0;
}
