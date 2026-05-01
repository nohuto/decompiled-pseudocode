/*
 * XREFs of ?_IsItemVisible@VirtualDesktopItem@@AEAAJPEAUISwitchItem@@PEA_N@Z @ 0x18040F594
 * Callers:
 *     ?IsSwitchItemVisibleOnDesktop@VirtualDesktopItem@@UEAA_NPEAUISwitchItem@@@Z @ 0x18040F400 (-IsSwitchItemVisibleOnDesktop@VirtualDesktopItem@@UEAA_NPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopItem::_IsItemVisible(VirtualDesktopItem *this, struct ISwitchItem *a2, bool *a3)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  *a3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v6 = (**(__int64 (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = *((_QWORD *)this + 12);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v16);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v10 + 24LL))(v10, *v11, &v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v7 >= 0 )
    {
      v7 = 0;
      *a3 = v14 != 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v7;
    v9 = 83LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 80LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitem.cpp",
    (const char *)v8);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)v7;
}
