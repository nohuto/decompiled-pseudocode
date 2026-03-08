/*
 * XREFs of ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800CFF5C
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18002CD5C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinkedShader::CreateResource(
        CLinkedShader *this,
        struct CD3DDevice *a2,
        struct CD3DPixelShader **a3)
{
  unsigned __int64 v6; // rbx
  const void *v7; // rax

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  v7 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  return CD3DPixelShader::Create(a2, v7, v6, a3);
}
