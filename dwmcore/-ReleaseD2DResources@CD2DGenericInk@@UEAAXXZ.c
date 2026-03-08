/*
 * XREFs of ?ReleaseD2DResources@CD2DGenericInk@@UEAAXXZ @ 0x180299840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DGenericInk::ReleaseD2DResources(CD2DGenericInk *this)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
}
