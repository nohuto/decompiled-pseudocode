/*
 * XREFs of ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00C6824
 * Callers:
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C002D210 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C002D5A0 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     Win32AllocPagedLookasideList @ 0x1C00D0440 (Win32AllocPagedLookasideList.c)
 *     Win32UAFMAllocPagedLookasideList @ 0x1C017D0D0 (Win32UAFMAllocPagedLookasideList.c)
 *     InitQEntryLookaside @ 0x1C031FF8C (InitQEntryLookaside.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4,
        USHORT Depth)
{
  NSInstrumentation::CPointerHashTable **v5; // rdi
  const void *Tag; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = (unsigned __int64)this;
  v5 = (NSInstrumentation::CPointerHashTable **)gpLeakTrackingAllocator;
  Tag = (const void *)a4;
  if ( *(_DWORD *)gpLeakTrackingAllocator == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a4) )
      return 0LL;
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(v5[1], Tag);
  }
  v9 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)v5,
         68LL,
         0x90uLL,
         a3);
  v10 = v9;
  if ( v9 )
  {
    v12 = 0LL;
    *(_DWORD *)v9 = (_DWORD)Tag;
    if ( *(_DWORD *)v5 )
    {
      if ( *(_DWORD *)v5 != 1 )
      {
        if ( *(_DWORD *)v5 == 2 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                 (NSInstrumentation::CLeakTrackingAllocator *)v5,
                 (unsigned int)Tag,
                 &v12) )
          {
            a2 += 16LL;
            *(_BYTE *)(v10 + 4) = v12;
            *(_BYTE *)(v10 + 5) = 1;
          }
          else
          {
            *(_BYTE *)(v10 + 5) = 0;
          }
        }
        goto LABEL_5;
      }
      a2 += 16LL;
    }
    *(_BYTE *)(v9 + 5) = 0;
LABEL_5:
    ExInitializePagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(v10 + 16),
      (PALLOCATE_FUNCTION)lambda_c133004e6954e14cd1689f8a8d3530b0_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_,
      (PFREE_FUNCTION)lambda_b5ab72610ca6305d588698d100652821_::_lambda_invoker_cdecl__void___,
      0x220u,
      a2,
      (ULONG)Tag,
      Depth);
    return v10;
  }
  return 0LL;
}
