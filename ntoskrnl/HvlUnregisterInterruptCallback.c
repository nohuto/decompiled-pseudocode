/*
 * XREFs of HvlUnregisterInterruptCallback @ 0x14053D9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall HvlUnregisterInterruptCallback(unsigned int a1, signed __int64 a2)
{
  signed __int64 result; // rax

  if ( a1 <= 4 )
    return _InterlockedCompareExchange64(
             (volatile signed __int64 *)&HvlpInterruptCallback[a1],
             (signed __int64)HvlDummyInterruptCallback,
             a2);
  return result;
}
