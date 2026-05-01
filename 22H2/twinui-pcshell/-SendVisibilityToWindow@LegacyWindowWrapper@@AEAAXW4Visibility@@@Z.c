/*
 * XREFs of ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x18034A44C
 * Callers:
 *     ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x18034A5A0 (-v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18034A600 (-v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18034BDC8 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18034BA20 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall LegacyWindowWrapper::SendVisibilityToWindow(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 216LL))(*(_QWORD *)(a1 + 296));
  v5 = *(int *)(a1 + 312);
  v6 = 0LL;
  if ( *(_BYTE *)(a1 + 625) && *(_DWORD *)(a1 + 312) && (*(_BYTE *)(a1 + 372) & 0x10) == 0 )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 296) + 160LL))(
                     *(_QWORD *)(a1 + 296),
                     &v8);
    LOBYTE(v6) = a2 == 1;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 24LL))(*v7, v5, 0LL, 0LL, v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
    WindowReadyState::VisibilityChanged(a1 + 376, 0LL, a2);
    return WindowReadyState::VisibilityChanged(a1 + 376, 1LL, a2);
  }
  return result;
}
