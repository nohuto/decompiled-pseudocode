/*
 * XREFs of ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18023BD6C
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18023946C (--$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804E36D4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1804E45C4 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::RuntimeClassInitialize(
        CPeopleBarFlyoutExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v9; // rsi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HSTRING_HEADER v12; // [rsp+30h] [rbp-88h] BYREF
  HSTRING v13; // [rsp+48h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v15; // [rsp+68h] [rbp-50h]
  HSTRING_HEADER v16; // [rsp+70h] [rbp-48h] BYREF
  HSTRING v17; // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 41, (__int64)a2);
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
    0x39u,
    0x38u);
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v12,
    L"Windows.Internal.ShellExperience.PeopleBarFlyout",
    0x31u,
    0x30u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CPeopleBarFlyoutExperienceManager *)((char *)this + 112),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v15,
         v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v16,
      L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
      0x29u,
      0x28u);
    v6 = CSingleViewShellExperience::AddTestAumid((CPeopleBarFlyoutExperienceManager *)((char *)this + 112), v17);
    v5 = v6;
    if ( v6 >= 0 )
    {
      *((_DWORD *)this + 43) = 4;
      QueryService = a2->lpVtbl->QueryService;
      v9 = (_QWORD *)((char *)this + 88);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
      v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
             a2,
             &IID_IImmersiveWindowMessageService,
             &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
             (char *)this + 88);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v9 + 24LL))(
               *v9,
               1027LL,
               ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
               (char *)this + 84);
        v5 = v6;
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v9 + 24LL))(
                 *v9,
                 1025LL,
                 ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                 (char *)this + 76);
          v5 = v6;
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v9 + 24LL))(
                   *v9,
                   1026LL,
                   ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                   (char *)this + 80);
            v5 = v6;
            if ( v6 >= 0 )
            {
              v10 = a2->lpVtbl->QueryService;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
              v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
                     a2,
                     &IID_IImmersiveSessionIdleDetector,
                     &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                     (char *)this + 104);
              v5 = v6;
              if ( v6 >= 0 )
              {
                v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 13) + 32LL))(
                       *((_QWORD *)this + 13),
                       ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
                       (char *)this + 96);
                v5 = v6;
                if ( v6 >= 0 )
                  return 0;
                v7 = 98LL;
              }
              else
              {
                v7 = 97LL;
              }
            }
            else
            {
              v7 = 95LL;
            }
          }
          else
          {
            v7 = 94LL;
          }
        }
        else
        {
          v7 = 93LL;
        }
      }
      else
      {
        v7 = 92LL;
      }
    }
    else
    {
      v7 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
