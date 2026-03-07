struct CLinkedShader *__fastcall CShaderCache::LookupShader(
        CShaderCache *this,
        int a2,
        const struct ShaderLinkingConfig *a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  ShaderLinkingConfig::GetLookupKey((__int64)a3, &v5, a2);
  return (struct CLinkedShader *)CShaderCache::LookupLinkedShader((int *)this, (__int64)&v5);
}
