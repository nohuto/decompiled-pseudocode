/*
 * XREFs of ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x180414070
 * Callers:
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1804134E0 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetAccessibleAncestor@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18041C5CC (-GetAccessibleAncestor@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@.c)
 *     ?GetFocusedDescendant@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18041C6A4 (-GetFocusedDescendant@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@P.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x18041C7E8 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::_RaiseFocusEvent(CMultitaskingViewElementBase *this)
{
  char v1; // bl
  _QWORD *RootElement; // rax
  bool v4; // si
  _QWORD *FocusedDescendant; // rax
  __int64 v6; // rbx
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  IRawElementProviderSimple *pProvider; // [rsp+40h] [rbp+20h] BYREF
  __int64 v13; // [rsp+48h] [rbp+28h] BYREF

  v1 = 0;
  LODWORD(pProvider) = 0;
  v4 = 0;
  if ( *((_BYTE *)this + 176) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this) )
    {
      if ( UiaClientsAreListening() )
      {
        RootElement = (_QWORD *)ElementHelpers::GetRootElement(&pProvider, this);
        v1 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*RootElement + 304LL))(*RootElement) )
          v4 = 1;
      }
    }
  }
  if ( (v1 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  if ( v4 )
  {
    FocusedDescendant = (_QWORD *)ElementHelpers::GetFocusedDescendant(&pProvider, this);
    ElementHelpers::GetAccessibleAncestor(&v13, *FocusedDescendant);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    v6 = v13;
    if ( v13 )
    {
      pProvider = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
      v7 = (*(__int64 (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v6 + 376LL))(
             v6,
             &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
             &pProvider);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1117LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        return v8;
      }
      v7 = UiaRaiseAutomationEvent(pProvider, 20005);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1118LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  return 0LL;
}
