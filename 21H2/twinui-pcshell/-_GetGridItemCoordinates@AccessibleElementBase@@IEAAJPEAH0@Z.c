/*
 * XREFs of ?_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z @ 0x180424600
 * Callers:
 *     ?get_Column@AccessibleElementBase@@UEAAJPEAH@Z @ 0x180424AD0 (-get_Column@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_Row@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804250D0 (-get_Row@AccessibleElementBase@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804245C8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804246E8 (-_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z.c)
 */

__int64 __fastcall AccessibleElementBase::_GetGridItemCoordinates(AccessibleElementBase *this, int *a2, int *a3)
{
  int Element; // ebx
  int v7; // eax
  int v9[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct ISwitchItemGrid *v11; // [rsp+78h] [rbp+38h] BYREF
  void *v12; // [rsp+80h] [rbp+40h] BYREF
  int v13; // [rsp+88h] [rbp+48h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Element = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v12);
  if ( Element >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    Element = AccessibleElementBase::_GetParentGrid(this, &v11);
    if ( Element >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct ISwitchItemGrid *, void *, int *, int *))(*(_QWORD *)v11 + 80LL))(
             v11,
             v12,
             &v13,
             v9);
      Element = v7;
      if ( v7 >= 0 )
      {
        if ( a2 )
          *a2 = v13;
        if ( a3 )
          *a3 = v9[0];
        Element = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x301,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v7);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)Element;
}
