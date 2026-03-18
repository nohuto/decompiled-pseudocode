/*
 * XREFs of HalpHvWatchdogStop @ 0x140371C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpHvWatchdogStop()
{
  __int64 result; // rax

  result = 0LL;
  __writemsr(0x40000110u, 0LL);
  return result;
}
