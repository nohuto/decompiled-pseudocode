/*
 * XREFs of ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00BC680
 * Callers:
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0055768 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C00C4A90 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     Win32AllocPagedLookasideList @ 0x1C00C4AD0 (Win32AllocPagedLookasideList.c)
 *     Win32UAFMAllocPagedLookasideList @ 0x1C01672E0 (Win32UAFMAllocPagedLookasideList.c)
 *     InitQEntryLookaside @ 0x1C02E364C (InitQEntryLookaside.c)
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C002FE1C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T a2,
        int a3,
        ULONG a4,
        USHORT Depth)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  char *result; // rax
  char *v9; // rbx
  char IsTagTracked; // al
  SIZE_T Size; // rdx

  v5 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  result = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                     (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                     68LL,
                     0x90uLL,
                     a3);
  v9 = result;
  if ( result )
  {
    IsTagTracked = NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v5, a4);
    *v9 = IsTagTracked;
    Size = a2 + 16;
    if ( !IsTagTracked )
      Size = a2;
    ExInitializePagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(v9 + 16),
      (PALLOCATE_FUNCTION)lambda_c133004e6954e14cd1689f8a8d3530b0_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_,
      (PFREE_FUNCTION)lambda_b5ab72610ca6305d588698d100652821_::_lambda_invoker_cdecl__void___,
      0x220u,
      Size,
      a4,
      Depth);
    return v9;
  }
  return result;
}
