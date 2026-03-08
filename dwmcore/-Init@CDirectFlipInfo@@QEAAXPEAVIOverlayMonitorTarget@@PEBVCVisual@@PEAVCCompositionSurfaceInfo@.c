/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801F3F90
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801D85D4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x18004828C (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x18012D48A (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x1801D80A4 (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDirectFlipInfo::Init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int **a6)
{
  __int64 *v8; // rax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 16), a4);
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 52) = a5;
  std::shared_ptr<CRegion>::reset((_QWORD *)(a1 + 32));
  if ( *(int *)(a1 + 52) >= 3 && a6 )
  {
    v8 = std::make_shared<CRegion,>(&v11);
    std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 32), v8);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    v9 = FastRegion::CRegion::Copy(*(int ***)(a1 + 32), a6);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
  }
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 64LL))(a4);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
