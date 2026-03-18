/*
 * XREFs of DirectComposition::Memory::Allocate @ 0x1C00E7836
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0085100 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002C184 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::Memory::Allocate(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned int a2,
        char a3)
{
  if ( a3 )
    return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a1, 260LL, (unsigned __int64)a1, a2);
  else
    return NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, (unsigned __int64)a1, a2);
}
