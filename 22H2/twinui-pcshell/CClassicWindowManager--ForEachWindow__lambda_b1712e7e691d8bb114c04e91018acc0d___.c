/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x180059F80
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180059620 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 * Callees:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180058BEC (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___(
        __int64 a1,
        CClassicWindowManager *a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 i; // rbp
  __int64 v6; // rbx
  void (__fastcall *v8)(__int64, _QWORD); // rsi
  HWND v9; // rax
  _QWORD *ClassicWindowOwner; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6) )
    {
      v8 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL);
      v9 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(a2, &v11, v9);
      v8(v6, *ClassicWindowOwner);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 1;
}
