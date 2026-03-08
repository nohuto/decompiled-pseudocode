/*
 * XREFs of ??1?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E2F28
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180026C2C (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CLinkedShader>::~ComPtr<CLinkedShader>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)CMILRefCountBaseT<IMILRefCount>::InternalRelease(result);
  }
  return result;
}
