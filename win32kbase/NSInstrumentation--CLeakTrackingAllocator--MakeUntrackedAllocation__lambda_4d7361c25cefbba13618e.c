/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1C00BAA3C
 * Callers:
 *     AllocThreadBufferWithTag @ 0x1C003C700 (AllocThreadBufferWithTag.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00627A8 (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0062898 (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     Win32AllocPool @ 0x1C0062A10 (Win32AllocPool.c)
 *     EngAllocMem @ 0x1C009EBD0 (EngAllocMem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = ExAllocatePool2(**(_QWORD **)a2 | 2LL, *a3, **(unsigned int **)(a2 + 8));
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  return result;
}
