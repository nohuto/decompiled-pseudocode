/*
 * XREFs of ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801D350C
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18005A5A4 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180058BEC (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindowManager::RecomputeOwner(CClassicWindowManager *this, struct IClassicWindow *a2)
{
  __int64 v4; // rbx
  HWND v5; // rax
  _QWORD *ClassicWindowOwner; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 160LL))(a2) )
  {
    v4 = *(_QWORD *)a2;
    v5 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(this, &v7, v5);
    (*(void (__fastcall **)(struct IClassicWindow *, _QWORD))(v4 + 104))(a2, *ClassicWindowOwner);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v7);
  }
}
