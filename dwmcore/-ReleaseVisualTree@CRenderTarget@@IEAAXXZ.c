/*
 * XREFs of ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C73AC
 * Callers:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800C6CF0 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C6DFC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x1800C6D30 (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTarget::ReleaseVisualTree(CRenderTarget *this)
{
  CVisualTree *v2; // rcx
  __int64 v3; // rcx

  v2 = (CVisualTree *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    CVisualTree::RemoveTreeClient(
      v2,
      (struct IVisualTreeClient *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((char *)this + 96);
    v3 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
