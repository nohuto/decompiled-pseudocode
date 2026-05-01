/*
 * XREFs of ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x18040DD58
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x18040D734 (--$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Mi.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z @ 0x180400474 (--4-$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z.c)
 *     ?_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z @ 0x18040DF24 (-_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x18040E0E4 (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 */

__int64 __fastcall SwitchItem::RuntimeClassInitialize(__int64 a1, struct IApplicationView *a2, int a3)
{
  _QWORD *v3; // r14
  __int64 v7; // rcx
  int Title; // ebx
  __int64 v9; // rdx
  int v11; // eax
  SwitchItem *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 96);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 96), (__int64)a2);
  v7 = *v3;
  *(_DWORD *)(a1 + 184) = a3;
  Title = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 184LL))(v7, a1 + 192);
  if ( Title < 0 )
  {
    v9 = 88LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
      (const char *)(unsigned int)Title);
    return (unsigned int)Title;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v3 + 72LL))(*v3, &v14);
  if ( v11 >= 0 )
    ObservableProperty<HWND__ *>::operator=((_QWORD *)(a1 + 144), &v14);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
      (const char *)(unsigned int)v11);
  Title = SwitchItem::_LoadTitle((SwitchItem *)a1);
  if ( Title < 0 )
  {
    v9 = 90LL;
    goto LABEL_3;
  }
  if ( SwitchItem::_IsCortanaAltTabProxyWindowView(v12, a2) )
    *(_QWORD *)(a1 + 192) = -1LL;
  return 0LL;
}
