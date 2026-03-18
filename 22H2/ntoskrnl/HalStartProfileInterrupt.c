/*
 * XREFs of HalStartProfileInterrupt @ 0x140506FE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpStartProfileInterruptEx @ 0x1405080B0 (HalpStartProfileInterruptEx.c)
 */

__int64 __fastcall HalStartProfileInterrupt(__int64 a1)
{
  return HalpStartProfileInterruptEx(a1, 0LL, 0LL, 0LL);
}
