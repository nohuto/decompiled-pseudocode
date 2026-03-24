/*
 * XREFs of ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180051850
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180050DD8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 * Callees:
 *     <none>
 */

int *__fastcall ShaderLinkingConfig::GetConstantBufferRequirements(_BYTE *a1, int *a2)
{
  int v2; // r8d
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  int *result; // rax
  int v7; // [rsp+8h] [rbp+8h] BYREF
  char v8; // [rsp+Ch] [rbp+Ch] BYREF

  v2 = 0;
  if ( a1[22] || a1[18] || (v3 = 0, a1[19]) )
    v3 = 1;
  if ( a1[54] || a1[50] || a1[51] )
    v3 |= 2u;
  if ( a1[86] || a1[82] || a1[83] )
    v3 |= 4u;
  if ( a1[118] || a1[114] || a1[115] )
    v3 |= 8u;
  *a2 = v3;
  v4 = 0LL;
  v7 = v3;
  do
  {
    v5 = *((unsigned __int8 *)&v7 + v4++);
    v2 += byte_1802CE450[v5];
  }
  while ( v4 != (&v8 < (char *)&v7 ? 0 : 4) );
  result = a2;
  a2[1] = 32 * v2;
  return result;
}
