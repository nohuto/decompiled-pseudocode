/*
 * XREFs of ?get_SelectionContainer@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x180424DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180424238 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_SelectionContainer(
        AccessibleElementBase *this,
        struct IRawElementProviderSimple **a2)
{
  int Element; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 40),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v10);
  if ( Element >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
    if ( v11 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderSimple **))(*(_QWORD *)v11 + 376LL))(
             v11,
             &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
             a2);
      Element = v7;
      if ( v7 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        goto LABEL_8;
      }
      v6 = (unsigned int)v7;
      v5 = 438LL;
    }
    else
    {
      Element = -2147220991;
      v5 = 436LL;
      v6 = 2147746305LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v6);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return (unsigned int)Element;
}
