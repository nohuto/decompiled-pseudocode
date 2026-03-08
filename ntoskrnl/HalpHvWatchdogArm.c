/*
 * XREFs of HalpHvWatchdogArm @ 0x14036DAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHvWatchdogArm(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __writemsr(0x40000111u, a3);
  return 0LL;
}
