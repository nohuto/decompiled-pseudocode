/*
 * XREFs of ?OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180400CE4
 * Callers:
 *     _lambda_de01ca16b280740cb5775a2ceb806b0d_::operator() @ 0x1800D4F7C (_lambda_de01ca16b280740cb5775a2ceb806b0d_--operator().c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18040139C (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

__int64 __fastcall SwitchItemCollection::OnTabSelectionChanged(
        SwitchItemCollection *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  int updated; // eax
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v18; // [rsp+58h] [rbp+28h] BYREF
  struct IUnknown *v19; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *v20; // [rsp+68h] [rbp+38h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, char *))(*(_QWORD *)a2 + 176LL))(
         a2,
         &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v19 = 0LL;
    v6 = *((_QWORD *)this + 27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v5 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct IUnknown **))(*(_QWORD *)v6 + 24LL))(
           v6,
           a2,
           &v19);
    if ( v5 < 0 )
    {
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      return (unsigned int)v5;
    }
    if ( v18 )
    {
      updated = SwitchItemCollection::UpdateTabSelection(this, (struct IApplicationView *)v19, 1);
      v5 = updated;
      if ( updated < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x162,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
          (const char *)(unsigned int)updated);
      goto LABEL_21;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 *))(*(_QWORD *)a2 + 168LL))(
           a2,
           &v16);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v8);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_21;
    }
    v15 = 0LL;
    v9 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 96LL))(v9, &v15);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v10);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_20;
    }
    v20 = 0LL;
    v11 = *((_QWORD *)this + 27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v11 + 24LL))(v11, v15, &v20);
    v5 = v12;
    if ( v12 < 0 )
    {
      v13 = 367LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_18;
    }
    if ( (unsigned int)SHIsSameObject(v20, v19) )
    {
      v5 = 0;
    }
    else
    {
      v12 = SwitchItemCollection::UpdateTabSelection(this, (struct IApplicationView *)v19, v18 != 0);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 372LL;
        goto LABEL_17;
      }
    }
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v5;
}
