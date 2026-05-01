/*
 * XREFs of ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18032FCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180064728 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CBA4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007CC78 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCFC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1803190F4 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x180332DC8 (-StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnRemoved(
        ViewEventDispatcher **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  __int64 (*QueryInterface)(void); // rbx
  int v6; // eax
  void *v7; // rbx
  int v8; // eax
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, __int64 *); // rdi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  ViewEventDispatcher **v13; // rsi
  __int64 v14; // rdx
  void *v15; // rbx
  __int64 (__fastcall *v16)(void *, GUID *, __int64 *); // rdi
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  void *v21; // [rsp+20h] [rbp-188h] BYREF
  __int64 v22; // [rsp+28h] [rbp-180h] BYREF
  __int64 v23; // [rsp+30h] [rbp-178h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v25[40]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v21 = 0LL;
  QueryInterface = (__int64 (*)(void))a4->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  try
  {
    v6 = QueryInterface();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1067LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = v21;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v25,
      (__int64)"OnRemoved");
    v25[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
    ViewManagerInteropTraceLogging::OnRemoved::StartActivity((ViewManagerInteropTraceLogging::OnRemoved *)v25, v7);
    v8 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v21 + 152LL))(v21, &v24);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1072LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    ViewEventDispatcher::ViewDestroyed(this[8], v24);
    v23 = 0LL;
    v9 = v21;
    v10 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v21 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v11 = v10(v9, &v23);
    v12 = retaddr;
    v13 = this - 2;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 64LL))(
              v23,
              (unsigned __int64)(this + 1) & -(__int64)(this != (ViewEventDispatcher **)16));
      v12 = retaddr;
      v13 = this - 2;
      if ( v11 >= 0 )
        goto LABEL_11;
      v14 = 1079LL;
    }
    else
    {
      v14 = 1077LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v12,
      (void *)v14,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v11);
LABEL_11:
    v22 = 0LL;
    v15 = v21;
    v16 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v17 = v16(v15, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v22);
    v18 = retaddr;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 64LL))(
              v22,
              (unsigned __int64)(this - 1) & -(__int64)(v13 != 0LL));
      v18 = retaddr;
      if ( v17 >= 0 )
      {
LABEL_16:
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v25,
          0);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v25[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        return 0LL;
      }
      v19 = 1085LL;
    }
    else
    {
      v19 = 1083LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v19,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_16;
  }
  catch ( ... )
  {
  }
  return 0LL;
}
