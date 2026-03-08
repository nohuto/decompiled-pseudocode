/*
 * XREFs of ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x180106360
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002B000 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C590 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 * Callees:
 *     <none>
 */

ShaderLinkingSamplerDesc *__fastcall ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(ShaderLinkingSamplerDesc *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = "NoOp";
  return this;
}
