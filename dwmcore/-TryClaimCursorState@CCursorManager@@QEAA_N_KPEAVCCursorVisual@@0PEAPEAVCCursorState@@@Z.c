bool __fastcall CCursorManager::TryClaimCursorState(
        CCursorManager *this,
        unsigned __int64 a2,
        struct CCursorVisual *a3,
        unsigned __int64 a4,
        struct CCursorState **a5)
{
  CCursorManager *v8; // rcx
  struct CCursorState *v9; // rcx
  bool v10; // bl
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-18h] BYREF
  struct CCursorState *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v12 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
  if ( (int)CCursorManager::EnsureCursorState(v8, a2, &v13) >= 0 && !CCursorState::TrySetVisual(v13, a3, a4) )
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
  v9 = v13;
  v13 = 0LL;
  *a5 = v9;
  v10 = v9 != 0LL;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v10;
}
