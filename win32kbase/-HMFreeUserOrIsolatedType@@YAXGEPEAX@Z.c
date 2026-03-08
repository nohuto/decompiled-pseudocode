/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C00D3268
 * Callers:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 * Callees:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0075514 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int64 a1, char a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
  {
    LOBYTE(a1) = a2;
    HMFreeIsolatedType(a1, a3);
  }
  else if ( a3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a3);
  }
}
