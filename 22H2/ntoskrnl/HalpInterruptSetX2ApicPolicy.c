/*
 * XREFs of HalpInterruptSetX2ApicPolicy @ 0x1404BC828
 * Callers:
 *     HalpIommuInitSystem @ 0x14099EB40 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptSetX2ApicPolicy(char a1)
{
  HalpInterruptX2ApicPolicy = a1;
}
