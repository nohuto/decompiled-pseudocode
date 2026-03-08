/*
 * XREFs of ?OnSceneLost@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180216170
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionLight::OnSceneLost(CCompositionLight *this, struct ISpectreRenderer *a2)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  return 0LL;
}
