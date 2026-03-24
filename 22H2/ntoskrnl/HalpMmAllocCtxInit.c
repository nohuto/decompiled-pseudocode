/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403BAB30
 * Callers:
 *     HalpMmInitSystem @ 0x1409A0240 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C4BA50 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C4BA48 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
