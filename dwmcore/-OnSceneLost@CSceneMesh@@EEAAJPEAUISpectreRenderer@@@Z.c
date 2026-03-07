__int64 __fastcall CSceneMesh::OnSceneLost(CSceneMesh *this, struct ISpectreRenderer *a2)
{
  __int64 *v3; // rcx

  v3 = (__int64 *)((char *)this + 8);
  if ( *v3 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
    *((_BYTE *)this + 16) = 1;
  }
  return 0LL;
}
