CCommonRenderingShaderCache *__fastcall CCommonRenderingShaderCache::CCommonRenderingShaderCache(
        CCommonRenderingShaderCache *this)
{
  CCommonRenderingShaderCache *result; // rax

  dword_1803E30D0 = 0;
  result = (CCommonRenderingShaderCache *)&g_commonRenderingShaderCache;
  qword_1803E30D8 = (__int64)&g_commonRenderingShaderCache;
  g_commonRenderingShaderCache = 0LL;
  return result;
}
