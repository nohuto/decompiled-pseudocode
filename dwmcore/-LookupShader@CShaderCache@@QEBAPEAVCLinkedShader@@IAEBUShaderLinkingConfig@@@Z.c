/*
 * XREFs of ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x1802078F4
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180026C2C (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18002CA90 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x180207878 (-LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z.c)
 */

struct CLinkedShader *__fastcall CShaderCache::LookupShader(
        CShaderCache *this,
        int a2,
        const struct ShaderLinkingConfig *a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  ShaderLinkingConfig::GetLookupKey((__int64)a3, &v5, a2);
  return (struct CLinkedShader *)CShaderCache::LookupLinkedShader((int *)this, (__int64)&v5);
}
