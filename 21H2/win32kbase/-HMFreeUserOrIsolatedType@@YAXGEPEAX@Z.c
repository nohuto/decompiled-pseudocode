/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0030D58
 * Callers:
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 * Callees:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0030D88 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
  {
    HMFreeIsolatedType(a2, a3);
  }
  else if ( a3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a3);
  }
}
