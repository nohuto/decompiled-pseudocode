/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0045200
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C005ADDC (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(unsigned __int64 a1, int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::Allocate(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           68LL,
           a1,
           a2);
}
