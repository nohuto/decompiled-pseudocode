/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x1403B0960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HalpEfiCalls != 0;
}
