/*
 * XREFs of ?_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtualDesktop@@@Z @ 0x1804A78DC
 * Callers:
 *     ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180076230 (-ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopForegroundPolicy::_FindDesktopForView(
        CVirtualDesktopForegroundPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, struct IVirtualDesktop **); // rdi
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  unsigned int v17; // [rsp+70h] [rbp+40h] BYREF
  struct IVirtualDesktop *v18; // [rsp+80h] [rbp+50h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  *a3 = 0LL;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 2);
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 40LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v8 = v7(v6, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 176LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 179LL;
    goto LABEL_5;
  }
  v11 = 0;
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = 0LL;
      v12 = v19;
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v19 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      v14 = v13(v12, v11, &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4, &v18);
      v9 = v14;
      if ( v14 < 0 )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             a2,
             v18) )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        *a3 = v18;
        v9 = 0;
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      if ( ++v11 >= v17 )
        goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v14);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  else
  {
LABEL_10:
    v9 = -2147023728;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v9;
}
