/*
 * XREFs of ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x1800C7434
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ?FinalRelease@CVisualTree@@MEAAXXZ @ 0x1800C7420 (-FinalRelease@CVisualTree@@MEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C74A0 (-clear_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_.c)
 */

void __fastcall CComposition::RemoveVisualTree(CComposition *this, const struct CVisualTree *a2)
{
  const struct CVisualTree **i; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = (const struct CVisualTree **)*((_QWORD *)this + 7); i != *((const struct CVisualTree ***)this + 8); ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 56,
        ((__int64)i - *((_QWORD *)this + 7)) >> 3,
        1LL);
      break;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
