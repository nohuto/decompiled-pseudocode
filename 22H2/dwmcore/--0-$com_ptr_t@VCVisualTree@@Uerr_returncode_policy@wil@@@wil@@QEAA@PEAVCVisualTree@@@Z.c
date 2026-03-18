/*
 * XREFs of ??0?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisualTree@@@Z @ 0x18003A510
 * Callers:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180020430 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18003A454 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1800BB528 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAV23@@Z @ 0x1800F35A0 (--$_Emplace_reallocate@AEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@-$vector.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::com_ptr_t<CVisualTree,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
