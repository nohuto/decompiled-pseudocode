__int64 __fastcall CSceneSurfaceMaterialInput::ProcessSetWrappingUMode(
        CSceneSurfaceMaterialInput *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 27) != v3 )
  {
    *((_DWORD *)this + 27) = v3;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
  }
  return 0LL;
}
