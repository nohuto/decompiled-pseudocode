/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18024402C
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180242A70 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180241114 (--$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@-$ComPtr@VPrior.c)
 *     ??$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802411C4 (--$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@VPriorityBoostHelper@.c)
 *     ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x180241774 (--$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180243F90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClo_ea_180243F90.c)
 *     ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1802691C8 (-RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E36D4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1804E45C4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // r12
  HSTRING v5; // rbx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  int v8; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  HSTRING_HEADER *v12; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v14; // rdi
  PriorityBoostHelper **v15; // rax
  PriorityBoostHelper **v16; // rbx
  struct CSingleViewShellExperience *v17; // rdx
  PriorityBoostHelper *v18; // rcx
  PriorityBoostHelper *v19; // rcx
  int started; // edi
  __int64 v21; // rdx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  PriorityBoostHelper *v23; // [rsp+30h] [rbp-29h] BYREF
  struct CSingleViewShellExperience *v24; // [rsp+38h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-19h] BYREF
  HSTRING v26; // [rsp+58h] [rbp-1h]
  HSTRING_HEADER v27; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = (CStartExperienceManager *)((char *)this + 312);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.StartMenu",
    0x2Bu,
    0x2Au);
  v5 = v26;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)off_180540B80, v6);
  v8 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         (HSTRING)v7[1].Reserved.Reserved1,
         v5);
  if ( v8 < 0 )
  {
    v10 = 221LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)off_180540B88, v9);
  v8 = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v12[1].Reserved.Reserved1);
  if ( v8 < 0 )
  {
    v10 = 223LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 93) = 6;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 65, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  v14 = (_QWORD *)((char *)this + 544);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 68);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         (char *)this + 544);
  if ( v8 < 0 )
  {
    v10 = 229LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v14 + 24LL))(
         *v14,
         26LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 528);
  if ( v8 < 0 )
  {
    v10 = 230LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v14 + 24LL))(
         *v14,
         1025LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 532);
  if ( v8 < 0 )
  {
    v10 = 231LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v14 + 24LL))(
         *v14,
         798LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 536);
  if ( v8 < 0 )
  {
    v10 = 232LL;
    goto LABEL_3;
  }
  v24 = v4;
  v15 = Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(&v23, &v24);
  v16 = (PriorityBoostHelper **)((char *)this + 304);
  v17 = 0LL;
  if ( &v24 != v15 )
  {
    v17 = *v15;
    *v15 = 0LL;
  }
  v18 = *v16;
  *v16 = v17;
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release((__int64)v18);
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release((__int64)v19);
  }
  if ( !*v16 )
  {
    v8 = -2147024882;
    v10 = 235LL;
    goto LABEL_3;
  }
  started = PriorityBoostHelper::RegisterForStartReady(*v16, a2);
  if ( started < 0 )
  {
    v21 = 236LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IHostExperienceManager>(
              (__int64 *)this + 38,
              (__int64 *)this + 36);
  if ( started < 0 )
  {
    v21 = 237LL;
    goto LABEL_24;
  }
  v8 = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator>(
         (__int64 *)this + 38,
         (__int64 *)this + 37);
  if ( v8 < 0 )
  {
    v10 = 238LL;
    goto LABEL_3;
  }
  v22 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 69);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v22)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 552);
  if ( v8 < 0 )
  {
    v10 = 240LL;
    goto LABEL_3;
  }
  return 0LL;
}
