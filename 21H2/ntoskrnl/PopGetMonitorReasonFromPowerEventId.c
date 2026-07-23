/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x140382C34
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EE060 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetMonitorReasonFromPowerEventId(int a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  _DWORD *i; // rdx

  result = 0LL;
  if ( a1 == 45 )
    return 20LL;
  v3 = 0;
  for ( i = &unk_140CFB864; *i != a1; i += 2 )
  {
    if ( ++v3 >= 0x33 )
      return result;
  }
  return *((unsigned int *)&PopMonitorEventMapping + 2 * v3);
}
