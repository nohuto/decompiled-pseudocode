/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C002B1A0
 * Callers:
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1C00DE6E0 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

void *__fastcall Win32AllocPoolNonPaged(unsigned __int64 a1, unsigned int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x44uLL, a1, a2);
}
