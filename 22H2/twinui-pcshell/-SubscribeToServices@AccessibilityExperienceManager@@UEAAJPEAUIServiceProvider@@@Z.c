/*
 * XREFs of ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803E05F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B5C1C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18020AF84 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x1803DFCAC (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::SubscribeToServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rdi
  char *v9; // rax
  unsigned int v10; // r8d
  char *v11; // rbx
  __int64 v12; // rbx
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  _QWORD *v19; // rdi
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v23; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = (__int64 *)((char *)this + 224);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 28, (__int64)a2);
  v5 = *v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v5 + 24LL))(
         v5,
         &SID_ViewEventDispatcher,
         &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
         (char *)this + 216);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)&v22 = AccessibilityExperienceManager::_OnViewEvent;
    DWORD2(v22) = 0;
    v23.Reserved.Reserved1 = (char *)this - 48;
    *(_OWORD *)&v23.Reserved.Reserved2[8] = v22;
    v8 = 0LL;
    v9 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v9);
      *(HSTRING_HEADER *)(v11 + 16) = v23;
      *(_QWORD *)v11 = off_1805150C8;
      v8 = v11;
    }
    *(_QWORD *)&v22 = v8;
    v12 = *((_QWORD *)this + 27);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&qword_180652F78, v10);
    v14 = (*(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD, char *))(*(_QWORD *)v12 + 48LL))(
            v12,
            v8,
            v13[1].Reserved.Reserved1,
            0LL,
            (char *)this + 200);
    v7 = v14;
    if ( v14 < 0 )
    {
      v15 = 157LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      return v7;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 360);
    v7 = v14;
    if ( v14 < 0 )
    {
      v15 = 159LL;
      goto LABEL_9;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
    v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v21);
    v7 = v16;
    if ( v16 >= 0 )
    {
      v18 = v21;
      v19 = (_QWORD *)((char *)this + 240);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v18 + 72LL))(
              v18,
              0LL,
              &SID_ImmersiveLayout,
              &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
              (char *)this + 240);
      v7 = v16;
      if ( v16 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 45) + 40LL))(
                *((_QWORD *)this + 45),
                ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64),
                (char *)this + 208);
        v7 = v16;
        if ( v16 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v19 + 40LL))(
                  *v19,
                  10LL,
                  ((unsigned __int64)this + 80) & -(__int64)(this != (AccessibilityExperienceManager *)48),
                  (char *)this + 212);
          v7 = v16;
          if ( v16 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v19 + 72LL))(*v19, (char *)this + 408);
            *((_DWORD *)this + 98) = 0;
            *((_DWORD *)this + 99) = 0;
            *((_DWORD *)this + 100) = 0;
            *((_DWORD *)this + 101) = 0;
            AccessibilityExperienceManager::RelaunchWithDelay((AccessibilityExperienceManager *)((char *)this - 48));
            v7 = 0;
            goto LABEL_20;
          }
          v17 = 171LL;
        }
        else
        {
          v17 = 168LL;
        }
      }
      else
      {
        v17 = 166LL;
      }
    }
    else
    {
      v17 = 165LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
