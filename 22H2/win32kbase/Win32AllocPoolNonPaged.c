/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0078200
 * Callers:
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1C00D27A0 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(unsigned __int64 a1, unsigned int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 68LL, a1, a2);
}
