/*
 * XREFs of ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x180028C0C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     <none>
 */

char __fastcall DoesSamplerRequireConstantBufferData(const struct ShaderLinkingSamplerDesc *a1)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)a1 + 23) || *((_BYTE *)a1 + 18) || *((_BYTE *)a1 + 19) )
    return 1;
  return result;
}
