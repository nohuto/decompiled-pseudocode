/*
 * XREFs of ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800C7540
 * Callers:
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800C6D90 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800C75E0 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??$insert_unchecked@AEBQEAVCVisualTree@@@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisualTree@@@1@V?$basic_iterator@QEAVCVisualTree@@@1@AEBQEAVCVisualTree@@@Z @ 0x1800C7628 (--$insert_unchecked@AEBQEAVCVisualTree@@@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTree::Initialize(CVisualTree *this)
{
  CVisual *v1; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax
  CVisualTree *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF
  char v9; // [rsp+58h] [rbp+20h] BYREF

  v1 = (CVisual *)*((_QWORD *)this + 8);
  CVisual::SetVisualTreeNoRef(v1, this);
  *((_BYTE *)v1 + 96) |= 1u;
  v3 = *((_QWORD *)this + 2);
  v6 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)(v3 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 16));
  if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 184LL))(this) )
    v4 = *(_QWORD *)(v3 + 56);
  else
    v4 = *(_QWORD *)(v3 + 64);
  v7 = v4;
  detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::insert_unchecked<CVisualTree * const &>(
    v3 + 56,
    &v9,
    &v7,
    &v6);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return 0LL;
}
