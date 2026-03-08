/*
 * XREFs of _dynamic_initializer_for__g_commonRenderingShaderCache__ @ 0x180001440
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCommonRenderingShaderCache@@QEAA@XZ @ 0x18010E288 (--0CCommonRenderingShaderCache@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_commonRenderingShaderCache__(CCommonRenderingShaderCache *a1)
{
  CCommonRenderingShaderCache::CCommonRenderingShaderCache(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_commonRenderingShaderCache__);
}
