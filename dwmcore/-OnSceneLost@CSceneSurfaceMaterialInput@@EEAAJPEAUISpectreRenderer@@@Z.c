__int64 __fastcall CSceneSurfaceMaterialInput::OnSceneLost(
        CSceneSurfaceMaterialInput *this,
        struct ISpectreRenderer *a2)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
  return 0LL;
}
