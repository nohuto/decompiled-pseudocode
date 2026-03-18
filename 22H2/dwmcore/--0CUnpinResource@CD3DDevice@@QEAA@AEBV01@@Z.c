/*
 * XREFs of ??0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z @ 0x18028F95C
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18028F89C (--$uninitialized_move@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_ite.c)
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x180290BB4 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1801DB4E4 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ??0?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z @ 0x1801EC574 (--0-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z.c)
 */

CD3DDevice::CUnpinResource *__fastcall CD3DDevice::CUnpinResource::CUnpinResource(
        CD3DDevice::CUnpinResource *this,
        const struct CD3DDevice::CUnpinResource *a2)
{
  __int64 v4; // rcx

  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
    this,
    *(_QWORD *)a2);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  v4 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4);
  return this;
}
