/*
 * XREFs of DirectComposition::Memory::Allocate @ 0x1C00F63CA
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C008F990 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
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
