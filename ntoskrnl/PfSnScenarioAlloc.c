/*
 * XREFs of PfSnScenarioAlloc @ 0x140798BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnScenarioAlloc(unsigned int a1)
{
  return ExAllocatePool2(256LL, a1, 1884316483LL);
}
