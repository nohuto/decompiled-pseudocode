/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ @ 0x180029E00
 * Callers:
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x180029CBC (--1CRenderingTechnique@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180029114 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ @ 0x180029D90 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ.c)
 */

void __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>(
        __int64 a1)
{
  __int64 v2; // r8
  void *v3; // rcx

  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::`vftable';
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources((struct IDeviceResourceNotify *)a1);
  v2 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
  if ( v2 )
    detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)(a1 + 16),
      0LL,
      v2);
  v3 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v3 == (void *)(a1 + 40) )
    v3 = 0LL;
  operator delete(v3);
}
