/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180077674
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800B9638 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18006CB10 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18006CC80 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z @ 0x180076B40 (-MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z @ 0x180076BDC (-MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x18007CAA4 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall MPCHolographicInputManager::OnTargetWithFocus3dChanged(
        MPCHolographicInputManager *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  char v6; // bp
  char v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  MPCCursorManager *v11; // rcx
  ISMTracing *v12; // rcx
  ISMTracing *v13; // rcx
  MPCGamepadInputHelper *Instance; // rax
  struct IMPCFocusTarget *v15; // rdx
  _QWORD *v16; // rsi
  _QWORD *i; // rdi

  v6 = 0;
  v7 = 0;
  if ( !IsEdition(1024LL) )
  {
    if ( a3 && (*(unsigned __int8 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 32LL))(a3) )
    {
      v9 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v6 = GetPropW((HWND)v9, L"Windows.UI.Input.Spatial.DisableMouseRouting") != 0LL;
      v10 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v7 = GetPropW((HWND)v10, L"Windows.UI.Input.Spatial.Disable3DFocusGamepadRouting") != 0LL;
    }
    if ( v6 != *((_BYTE *)this + 2366) )
    {
      *((_BYTE *)this + 2366) = v6;
      v11 = (MPCCursorManager *)*((_QWORD *)this + 298);
      if ( v11 )
        MPCCursorManager::UpdateState(v11);
      if ( ISMTracing::IsEnabled((__int64)v11) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v8,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DMouse_(v12, (const bool *)this + 2366);
      }
    }
    if ( v7 != *((_BYTE *)this + 2367) )
    {
      *((_BYTE *)this + 2367) = v7;
      if ( ISMTracing::IsEnabled(v8) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v8,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DGamepad_(v13, (const bool *)this + 2367);
      }
    }
  }
  Instance = MPCGamepadInputHelper::GetInstance(v8);
  MPCGamepadInputHelper::OnTargetWithFocus3dChanged(Instance, v15, a3);
  v16 = (_QWORD *)*((_QWORD *)this + 290);
  for ( i = (_QWORD *)*((_QWORD *)this + 289); i != v16; ++i )
    (*(void (__fastcall **)(_QWORD, struct IMPCFocusTarget *, struct IMPCFocusTarget *))(*(_QWORD *)*i + 328LL))(
      *i,
      a2,
      a3);
}
