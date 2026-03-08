/*
 * XREFs of ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ @ 0x180029D90
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ @ 0x180029E00 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C1D8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180029114 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800292C0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources(
        struct IDeviceResourceNotify *a1)
{
  __int64 *v1; // rdi
  CD3DResource **v3; // rbx
  CD3DResource **v4; // rbp
  __int64 v5; // r8

  v1 = (__int64 *)((char *)a1 + 16);
  v3 = (CD3DResource **)*((_QWORD *)a1 + 2);
  v4 = (CD3DResource **)*((_QWORD *)a1 + 3);
  while ( v3 != v4 )
    CD3DResource::RemoveResourceNotifier(*v3++, a1);
  v5 = (v1[1] - *v1) >> 3;
  if ( v5 )
    detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
      v1,
      0LL,
      v5);
}
