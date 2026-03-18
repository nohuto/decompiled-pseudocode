/*
 * XREFs of DirectComposition::Memory::Allocate_0 @ 0x1C00EA1F2
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C00812D0 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::Memory::Allocate_0(unsigned __int64 a1)
{
  return NSInstrumentation::CLeakTrackingAllocator::Allocate(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           260LL,
           a1,
           1633960772);
}
