/*
 * XREFs of ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180210C84
 * Callers:
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x1801B30E4 (-EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z.c)
 * Callees:
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180074E70 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800C4210 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectInvalidClientRects@CVisualTree@@IEAAXXZ @ 0x180210C14 (-CollectInvalidClientRects@CVisualTree@@IEAAXXZ.c)
 */

void __fastcall CVisualTree::EndPreCompute(CVisualTree *this, int a2)
{
  __int64 v4; // rax
  __int64 i; // rdi
  __int64 v6; // rcx

  v4 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 216LL))(this);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  if ( a2 >= 0 || (CDirtyRegion::SetFullDirty((CVisualTree *)((char *)this + 104)), a2 != -2147467260) )
  {
    CVisualTree::CollectInvalidClientRects(this);
    CDirtyRegion::Optimize((CVisualTree *)((char *)this + 104));
    for ( i = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 567) + 8LL * (unsigned int)(i - 1));
      (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v6 + 16LL))(v6, this, (char *)this + 104);
    }
  }
}
