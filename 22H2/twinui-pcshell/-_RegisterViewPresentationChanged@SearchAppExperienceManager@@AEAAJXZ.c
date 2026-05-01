/*
 * XREFs of ?_RegisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x180266A04
 * Callers:
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x180266474 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180015864 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManager@@AEAAJAEAV?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180264B60 (--$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppEx.c)
 *     ?_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x180266C7C (-_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_RegisterViewPresentationChanged(SearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdi
  _OWORD *v6; // rax
  _OWORD *v7; // rbx
  int v8; // eax
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v2 = SearchAppExperienceManager::_UnregisterViewPresentationChanged(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v13 = 0LL;
    v4 = SearchAppExperienceManager::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64)this,
           (__int64)&v13);
    v3 = v4;
    if ( v4 >= 0 )
    {
      LODWORD(v10) = 0;
      *(_QWORD *)&v11 = this;
      *((_QWORD *)&v11 + 1) = SearchAppExperienceManager::_OnClientWindowReadyForPresentationChangedHandler;
      v5 = 0LL;
      v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v6);
        v7[1] = v11;
        *((_QWORD *)v7 + 4) = v10;
        *(_QWORD *)v7 = off_1805158D0;
        v5 = (__int64)v7;
      }
      v14 = v5;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v13 + 80LL))(v13, v5, (char *)this + 448);
      v3 = v8;
      if ( v8 >= 0 )
        v3 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7E0,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7DE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  return v3;
}
