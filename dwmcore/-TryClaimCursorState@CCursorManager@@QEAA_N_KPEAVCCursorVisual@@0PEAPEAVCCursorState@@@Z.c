/*
 * XREFs of ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x180274714
 * Callers:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x1802255E8 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x1802745F4 (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 *     ?TrySetVisual@CCursorState@@QEAA_NPEAVCCursorVisual@@_K@Z @ 0x180278404 (-TrySetVisual@CCursorState@@QEAA_NPEAVCCursorVisual@@_K@Z.c)
 */

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
