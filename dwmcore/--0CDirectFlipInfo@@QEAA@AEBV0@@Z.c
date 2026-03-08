/*
 * XREFs of ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801F3640
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x18008BD94 (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x18012D48A (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1801D828C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::CDirectFlipInfo(CDirectFlipInfo *this, const struct CDirectFlipInfo *a2)
{
  __int64 v4; // rax

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 2,
    *((_QWORD *)a2 + 2));
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 64LL))(*((_QWORD *)a2 + 2));
  *((_DWORD *)this + 12) = 1;
  *((_QWORD *)this + 3) = v4;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0x1000000;
  *((_WORD *)this + 62) = 0;
  std::shared_ptr<CRegion>::reset((_QWORD *)this + 4);
  return this;
}
