/*
 * XREFs of _dynamic_atexit_destructor_for__CCommonRenderingEffectFactory::s_cpSolidColorEffect__ @ 0x180120220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__CCommonRenderingEffectFactory::s_cpSolidColorEffect__()
{
  return wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&CCommonRenderingEffectFactory::s_cpSolidColorEffect);
}
