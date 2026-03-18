/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C00C3D50
 * Callers:
 *     HMAllocObjectEx @ 0x1C0012A1C (HMAllocObjectEx.c)
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 * Callees:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C004FDA8 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int16 a1, unsigned __int8 a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
  {
    HMFreeIsolatedType(a2, a3);
  }
  else if ( a3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a3);
  }
}
