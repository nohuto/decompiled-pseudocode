/*
 * XREFs of PpmIdleGuestExecute @ 0x1403C7A00
 * Callers:
 *     <none>
 * Callees:
 *     HalProcessorIdle @ 0x140411C30 (HalProcessorIdle.c)
 */

__int64 __fastcall PpmIdleGuestExecute(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle(a1, a2);
  return 0LL;
}
