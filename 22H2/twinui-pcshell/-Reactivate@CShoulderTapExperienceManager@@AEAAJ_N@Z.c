/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1802406B4
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18023FD00 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x180240DD0 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001503C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180052BA0 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180067D20 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180068834 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1800689F8 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18023FA50 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(CShoulderTapExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // rbx
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rbx
  HSTRING_HEADER *v25; // rax
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // r8d
  unsigned int v29; // ebx
  HSTRING_HEADER *v30; // rax
  __int64 v31; // r8
  int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // ebx
  HSTRING_HEADER *v35; // rax
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // r8d
  unsigned int v39; // ebx
  HSTRING_HEADER *v40; // rax
  __int64 v41; // r8
  int v42; // eax
  unsigned int v43; // r8d
  __int64 v44; // rbx
  HSTRING_HEADER *v45; // rax
  __int64 v46; // r8
  int v47; // eax
  unsigned int v48; // r8d
  __int64 v49; // rbx
  HSTRING_HEADER *v50; // rax
  __int64 v51; // r8
  int v52; // eax
  unsigned int v53; // r8d
  __int64 v54; // rbx
  HSTRING_HEADER *v55; // rax
  __int64 v56; // r8
  int v57; // eax
  unsigned int v58; // r8d
  HSTRING_HEADER *v59; // rax
  __int64 v60; // r8
  int v61; // eax
  int PeopleBarScreenEdge; // eax
  unsigned int v63; // r8d
  unsigned int v64; // ebx
  HSTRING_HEADER *v65; // rax
  __int64 v66; // r8
  int v67; // eax
  unsigned int v68; // r8d
  unsigned int v69; // ebx
  unsigned int v70; // esi
  HSTRING_HEADER *v71; // rax
  __int64 v72; // r8
  int v73; // eax
  unsigned int v74; // r8d
  HSTRING_HEADER *v75; // rax
  __int64 v76; // r8
  int v77; // eax
  int v78; // eax
  unsigned int v79; // r8d
  HSTRING v80; // rbx
  HSTRING_HEADER *v81; // rax
  int v82; // eax
  HSTRING v84; // [rsp+40h] [rbp-40h] BYREF
  int v85; // [rsp+48h] [rbp-38h] BYREF
  HSTRING v86; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v88; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v86 = 0LL;
  v88 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v88,
         &v86);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v84 = v86;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v84);
    v6 = *((_QWORD *)this + 33);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180540B70, v7);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v8[1].Reserved.Reserved1,
            v9,
            v6);
    v5 = v10;
    if ( v10 < 0 )
    {
      v12 = (unsigned int)v10;
      v13 = 107LL;
      goto LABEL_46;
    }
    v14 = *((_QWORD *)this + 34);
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B78,
            v11);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v15[1].Reserved.Reserved1,
            v16,
            v14);
    v5 = v17;
    if ( v17 < 0 )
    {
      v12 = (unsigned int)v17;
      v13 = 108LL;
      goto LABEL_46;
    }
    v19 = *((_QWORD *)this + 35);
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B48,
            v18);
    v22 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v20[1].Reserved.Reserved1,
            v21,
            v19);
    v5 = v22;
    if ( v22 < 0 )
    {
      v12 = (unsigned int)v22;
      v13 = 109LL;
      goto LABEL_46;
    }
    v24 = *((_QWORD *)this + 36);
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B50,
            v23);
    v27 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v25[1].Reserved.Reserved1,
            v26,
            v24);
    v5 = v27;
    if ( v27 < 0 )
    {
      v12 = (unsigned int)v27;
      v13 = 110LL;
      goto LABEL_46;
    }
    v29 = *((_DWORD *)this + 74);
    v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B58,
            v28);
    v32 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v30[1].Reserved.Reserved1,
            v31,
            v29);
    v5 = v32;
    if ( v32 < 0 )
    {
      v12 = (unsigned int)v32;
      v13 = 111LL;
      goto LABEL_46;
    }
    v34 = *((_DWORD *)this + 75);
    v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B20,
            v33);
    v37 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v35[1].Reserved.Reserved1,
            v36,
            v34);
    v5 = v37;
    if ( v37 < 0 )
    {
      v12 = (unsigned int)v37;
      v13 = 112LL;
      goto LABEL_46;
    }
    v39 = *((_DWORD *)this + 76);
    v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B28,
            v38);
    v42 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v40[1].Reserved.Reserved1,
            v41,
            v39);
    v5 = v42;
    if ( v42 < 0 )
    {
      v12 = (unsigned int)v42;
      v13 = 113LL;
      goto LABEL_46;
    }
    v44 = *((_QWORD *)this + 39);
    v45 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B30,
            v43);
    v47 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v45[1].Reserved.Reserved1,
            v46,
            v44);
    v5 = v47;
    if ( v47 < 0 )
    {
      v12 = (unsigned int)v47;
      v13 = 114LL;
      goto LABEL_46;
    }
    v49 = *((_QWORD *)this + 40);
    v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B38,
            v48);
    v52 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v50[1].Reserved.Reserved1,
            v51,
            v49);
    v5 = v52;
    if ( v52 < 0 )
    {
      v12 = (unsigned int)v52;
      v13 = 115LL;
      goto LABEL_46;
    }
    v54 = *((_QWORD *)this + 41);
    v55 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B08,
            v53);
    v57 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v55[1].Reserved.Reserved1,
            v56,
            v54);
    v5 = v57;
    if ( v57 < 0 )
    {
      v12 = (unsigned int)v57;
      v13 = 116LL;
      goto LABEL_46;
    }
    v59 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B00,
            v58);
    v61 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v59[1].Reserved.Reserved1,
            v60,
            a2);
    v5 = v61;
    if ( v61 < 0 )
    {
      v12 = (unsigned int)v61;
      v13 = 117LL;
      goto LABEL_46;
    }
    v85 = -1;
    PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
                            this,
                            (enum EDGEUI_TRAYSTUCKPLACE *)&v85);
    v5 = PeopleBarScreenEdge;
    if ( PeopleBarScreenEdge < 0 )
    {
      v12 = (unsigned int)PeopleBarScreenEdge;
      v13 = 121LL;
      goto LABEL_46;
    }
    v64 = v85;
    v65 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180540B40,
            v63);
    v67 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
            (HSTRING)v65[1].Reserved.Reserved1,
            v66,
            v64);
    v5 = v67;
    if ( v67 < 0 )
    {
      v12 = (unsigned int)v67;
      v13 = 122LL;
      goto LABEL_46;
    }
    v69 = 184;
    v70 = 184;
    if ( v85 != -1 )
    {
      switch ( v85 )
      {
        case 0:
          goto LABEL_35;
        case 1:
LABEL_34:
          v70 = 202;
          goto LABEL_36;
        case 2:
LABEL_35:
          v69 = 202;
LABEL_36:
          v71 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &hstringHeader,
                  (const WCHAR **)off_180540B10,
                  v68);
          v73 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
                  (HSTRING)v71[1].Reserved.Reserved1,
                  v72,
                  v69);
          v5 = v73;
          if ( v73 >= 0 )
          {
            v75 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)off_180540B18,
                    v74);
            v77 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v84,
                    (HSTRING)v75[1].Reserved.Reserved1,
                    v76,
                    v70);
            v5 = v77;
            if ( v77 >= 0 )
            {
              v78 = CSingleViewShellExperience::Show(
                      (__int64)this + 40,
                      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
              v5 = v78;
              if ( v78 >= 0 )
              {
                v80 = v86;
                v81 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &hstringHeader,
                        (const WCHAR **)off_180540B60,
                        v79);
                v82 = ExperienceManagerUtils::RaiseReactivatedEvent(
                        *((ExperienceManagerUtils **)this + 8),
                        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 42),
                        *((HSTRING *)this + 6),
                        *((HSTRING *)this + 7),
                        (HSTRING)v81[1].Reserved.Reserved1,
                        v80);
                v5 = v82;
                if ( v82 >= 0 )
                {
                  v5 = 0;
LABEL_47:
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v84);
                  goto LABEL_48;
                }
                v12 = (unsigned int)v82;
                v13 = 153LL;
              }
              else
              {
                v12 = (unsigned int)v78;
                v13 = 152LL;
              }
            }
            else
            {
              v12 = (unsigned int)v77;
              v13 = 149LL;
            }
          }
          else
          {
            v12 = (unsigned int)v73;
            v13 = 148LL;
          }
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)v12);
          goto LABEL_47;
        case 3:
          goto LABEL_34;
      }
    }
    v5 = -2147024809;
    v12 = 2147942487LL;
    v13 = 145LL;
    goto LABEL_46;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_48:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v86);
  return v5;
}
