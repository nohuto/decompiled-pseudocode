/*
 * XREFs of ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180024FC8
 * Callers:
 *     _lambda_3d1fcc114f22629400696f1d7422949c_::operator() @ 0x180022B10 (_lambda_3d1fcc114f22629400696f1d7422949c_--operator().c)
 *     ?WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180022E20 (-WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x180022E6C (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x180022F14 (-PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180023080 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180023440 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800253C0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180025914 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x180026324 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180026358 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetWindowId(_QWORD *a1, int a2, int a3)
{
  HWND v3; // rbx
  int v5; // r13d
  _QWORD *v6; // rdi
  int v7; // esi
  int v8; // eax
  int *v9; // r15
  __int64 v10; // rdx
  unsigned int PropW; // eax
  bool v12; // zf
  unsigned __int64 i; // r15
  __int64 v14; // rcx
  unsigned int v15; // edi
  const WCHAR *StringRawBuffer; // rax
  char v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+24h] [rbp-54h] BYREF
  int v19; // [rsp+28h] [rbp-50h]
  struct tagRECT Rect; // [rsp+30h] [rbp-48h] BYREF

  v19 = a3;
  v3 = (HWND)a2;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[36] + 216LL))(a1[36]);
  v5 = *((_DWORD *)a1 + 76);
  if ( (_DWORD)v3 != v5 )
  {
    *((_DWORD *)a1 + 76) = (_DWORD)v3;
    v6 = a1 + 46;
    v7 = 0;
    v8 = *((_DWORD *)a1 + 94);
    if ( !a1[46] || (v17 = 1, v8) )
      v17 = 0;
    *v6 = v3;
    v9 = (int *)(a1 + 47);
    v18 = v8;
    *((_DWORD *)a1 + 94) = v8 & 0xFFFFFFF1;
    ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
      a1 + 46,
      &v18,
      a1 + 47);
    if ( (_DWORD)v3 )
    {
      PropW = (unsigned int)GetPropW(v3, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
      *((_BYTE *)a1 + 392) = PropW == 1;
      if ( PropW == 1 )
      {
        v18 = *v9;
        *v9 = v18 | 2;
        ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
          a1 + 46,
          &v18,
          a1 + 47);
      }
      Rect = 0LL;
      GetWindowRect(v3, &Rect);
      *((_DWORD *)a1 + 99) = Rect.right - Rect.left;
      *((_DWORD *)a1 + 100) = Rect.bottom - Rect.top;
      a1[48] = 0LL;
      WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)(a1 + 46));
    }
    if ( !*v6 || (LOBYTE(v10) = 1, *v9) )
      LOBYTE(v10) = 0;
    if ( (_BYTE)v10 != v17 )
      std::_Func_class<void,bool>::operator()(a1 + 51, v10);
    v12 = (_DWORD)v3 == 0;
    if ( (_DWORD)v3 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 176LL))(a1, 0LL);
      if ( v19 != 1 )
      {
        WindowWrapperBase::PushZbidToWindow((__int64)a1, *((_DWORD *)a1 + 129));
        WindowWrapperBase::PushBoundsToWindow(a1, 3LL);
        WindowWrapperBase::PushPointerActivationPolicyToWindow((WindowWrapperBase *)a1);
        for ( i = 0LL; i < a1[27]; ++i )
        {
          v14 = *(_QWORD *)(a1[26] + 8 * i);
          v15 = *(_DWORD *)(v14 + 16);
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v14 + 8), 0LL);
          SetPropW(v3, StringRawBuffer, (HANDLE)v15);
        }
      }
      v12 = (_DWORD)v3 == 0;
    }
    if ( !v12 )
      v5 = (int)v3;
    LOBYTE(v7) = (_DWORD)v3 == 0;
    WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)a1, v5, v7);
    WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)a1);
  }
}
