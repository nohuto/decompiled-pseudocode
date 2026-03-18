/*
 * XREFs of ??0CCommonRenderingShaderCache@@QEAA@XZ @ 0x18010EDC8
 * Callers:
 *     _dynamic_initializer_for__g_commonRenderingShaderCache__ @ 0x180001530 (_dynamic_initializer_for__g_commonRenderingShaderCache__.c)
 * Callees:
 *     <none>
 */

CCommonRenderingShaderCache *__fastcall CCommonRenderingShaderCache::CCommonRenderingShaderCache(
        CCommonRenderingShaderCache *this)
{
  CCommonRenderingShaderCache *result; // rax

  dword_1803E6350 = 0;
  result = (CCommonRenderingShaderCache *)&g_commonRenderingShaderCache;
  qword_1803E6358 = (__int64)&g_commonRenderingShaderCache;
  g_commonRenderingShaderCache = 0LL;
  return result;
}
