/*
 * XREFs of HalpMmAllocCtxInit @ 0x14039F22C
 * Callers:
 *     HalpMmInitSystem @ 0x140A8D600 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C63A50 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C63A48 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
