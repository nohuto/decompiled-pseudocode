/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1802354A8
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18023007C (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18021EFDC (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z @ 0x18022171C (-TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x18023034C (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x1802313F0 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x180238D04 (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E39A8 (-AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E3A64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1804E4954 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1804E5EC8 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // r13
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // r12
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, char *); // rsi
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v25; // rsi
  HRESULT (__stdcall *v26)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int ready; // eax
  __int64 v28; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v29; // r8
  const unsigned __int16 *v30; // rcx
  __int64 v31; // r8
  int UndockedShellAppId; // eax
  unsigned int v33; // r8d
  HSTRING v34; // rbx
  __int64 v35; // rdx
  HSTRING_HEADER *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-39h] BYREF
  HSTRING string; // [rsp+38h] [rbp-31h] BYREF
  __int64 v40; // [rsp+40h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v42; // [rsp+60h] [rbp-9h]
  HSTRING_HEADER v43; // [rsp+68h] [rbp-1h] BYREF
  HSTRING v44; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = (CToastCenterExperienceManager *)((char *)this + 104);
  v42 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  v5 = v42;
  v44 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v43,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v44,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v9 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          (char *)this + 448);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 56) + 32LL))(
            *((_QWORD *)this + 56),
            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
            (char *)this + 456);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 295LL;
      goto LABEL_17;
    }
    v14 = a2->lpVtbl->QueryService;
    v15 = (__int64 *)((char *)this + 464);
    v16 = *((_QWORD *)this + 58);
    if ( v16 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v14)(
            a2,
            &SID_InputHostLayout,
            &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
            (char *)this + 464);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 297LL;
      goto LABEL_17;
    }
    v11 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CToastCenterExperienceManager *>(
            (__int64)this + 480,
            *v15,
            v17);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 299LL;
      goto LABEL_17;
    }
    v18 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 80);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v18)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            (char *)this + 640);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 301LL;
      goto LABEL_17;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 80) + 24LL))(
            *((_QWORD *)this + 80),
            ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
            (char *)this + 616);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 302LL;
      goto LABEL_17;
    }
    v38 = 0LL;
    v19 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v38);
    v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v19)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v38);
    v12 = v20;
    if ( v20 < 0 )
    {
      v21 = 307LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
LABEL_48:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v38);
      goto LABEL_49;
    }
    v22 = v38;
    v23 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v38 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 81);
    v20 = v23(v22, (char *)this + 648);
    v12 = v20;
    if ( v20 < 0 )
    {
      v21 = 308LL;
      goto LABEL_28;
    }
    v24 = a2->lpVtbl->QueryService;
    v25 = (_QWORD *)((char *)this + 632);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 79);
    v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v24)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            (char *)this + 632);
    v12 = v20;
    if ( v20 < 0 )
    {
      v21 = 312LL;
      goto LABEL_28;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v25 + 24LL))(
            *v25,
            0LL,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            (char *)this + 608);
    v12 = v20;
    if ( v20 < 0 )
    {
      v21 = 314LL;
      goto LABEL_28;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v25 + 24LL))(
            *v25,
            26LL,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            (char *)this + 612);
    v12 = v20;
    if ( v20 < 0 )
    {
      v21 = 315LL;
      goto LABEL_28;
    }
    v40 = 0LL;
    v26 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 83);
    ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v26)(
              a2,
              &IID_IRealmActivationHistory,
              &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
              (char *)this + 664);
    v12 = ready;
    if ( ready < 0 )
    {
      v28 = 318LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)ready);
LABEL_47:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
      goto LABEL_48;
    }
    ready = CToastCenterExperienceManager::SubscribeToShellReadyWnf(this);
    v12 = ready;
    if ( ready < 0 )
    {
      v28 = 320LL;
      goto LABEL_35;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
    ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
              (ExperienceManagerUtils *)a2,
              (struct IServiceProvider *)this + 12,
              v29);
    v12 = ready;
    if ( ready < 0 )
    {
      v28 = 322LL;
      goto LABEL_35;
    }
    string = 0LL;
    UndockedShellAppId = TryGetUndockedShellAppId(v30, &string, v31);
    v12 = UndockedShellAppId;
    v34 = string;
    if ( UndockedShellAppId >= 0 )
    {
      if ( string
        && (UndockedShellAppId = CSingleViewShellExperience::AddSideBySideAumid(v4, string),
            v12 = UndockedShellAppId,
            UndockedShellAppId < 0) )
      {
        v35 = 328LL;
      }
      else
      {
        v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)off_180540AE0, v33);
        UndockedShellAppId = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v36[1].Reserved.Reserved1);
        v12 = UndockedShellAppId;
        if ( UndockedShellAppId >= 0 )
        {
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 78, (__int64)a2);
          *((_BYTE *)this + 443) = IsShellLauncherEnabledForCurrentUser(v37);
          v9 = 0;
          hstringHeader.Reserved.Reserved2[8] = 0;
          v12 = 0;
LABEL_45:
          if ( v34 )
            WindowsDeleteString(v34);
          goto LABEL_47;
        }
        v35 = 331LL;
      }
    }
    else
    {
      v35 = 325LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)UndockedShellAppId);
    goto LABEL_45;
  }
  v13 = 294LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_49:
  if ( v9 )
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
  return v12;
}
