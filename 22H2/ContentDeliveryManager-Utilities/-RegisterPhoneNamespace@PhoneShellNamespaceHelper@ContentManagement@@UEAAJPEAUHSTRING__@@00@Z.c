/*
 * XREFs of ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180012760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18000D5DC (-SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18000D7B8 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18000D844 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18000D910 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x180013320 (-EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x180013394 (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18001342C (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180016558 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::RegisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  ContentManagement::PhoneShellNamespaceHelper *v4; // r15
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v7; // rax
  ContentManagement::PhoneShellNamespaceHelper *v8; // rcx
  int PhoneLink; // eax
  int v10; // ebx
  char v11; // r14
  PCWSTR v12; // rax
  int v13; // eax
  bool *v14; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v15; // r13
  __int64 v16; // rdx
  int DoesKeyExist; // eax
  const unsigned __int16 *v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  PCWSTR v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r9
  int v24; // eax
  bool *v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  const unsigned __int16 *v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // r9
  int v31; // eax
  bool *v32; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v33; // r14
  __int64 v34; // rdx
  int v35; // eax
  const unsigned __int16 *v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // r9
  int v39; // eax
  bool *v40; // r8
  void *v41; // r12
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // eax
  const unsigned __int16 *v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  bool *v48; // r8
  void *v49; // r15
  __int64 v50; // rdx
  const unsigned __int16 *v51; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // r9
  int v54; // eax
  bool *v55; // r8
  void *v56; // r14
  __int64 v57; // rdx
  int Key; // eax
  const unsigned __int16 *v59; // rdx
  __int64 v60; // rdx
  unsigned __int64 v61; // r9
  PCWSTR v62; // rax
  int v63; // eax
  ContentManagement::PhoneShellNamespaceHelper *v64; // rcx
  WCHAR *v65; // rsi
  __int64 v66; // rdx
  ContentManagement::PhoneShellNamespaceHelper *v67; // rcx
  const WCHAR *v68; // rax
  int v69; // r8d
  const unsigned __int16 *v70; // rax
  ContentManagement::PhoneShellNamespaceHelper *v71; // rcx
  unsigned __int16 v73[2]; // [rsp+20h] [rbp-60h] BYREF
  int v74; // [rsp+24h] [rbp-5Ch]
  LPVOID pv; // [rsp+28h] [rbp-58h] BYREF
  __int64 v76; // [rsp+30h] [rbp-50h]
  __int64 v77; // [rsp+38h] [rbp-48h]
  LPCWSTR lpPathName; // [rsp+40h] [rbp-40h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v79; // [rsp+48h] [rbp-38h] BYREF
  __int64 v80; // [rsp+50h] [rbp-30h]
  __int64 v81; // [rsp+58h] [rbp-28h]
  CreativeFramework::ContentDeliveryManagerSettings *v82[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v4 = this;
  lpPathName = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v7 = WindowsGetStringRawBuffer(a3, 0LL);
  PhoneLink = ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(
                v8,
                v7,
                StringRawBuffer,
                (unsigned __int16 **)&lpPathName);
  v10 = PhoneLink;
  if ( PhoneLink < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)PhoneLink);
    goto LABEL_143;
  }
  v11 = 1;
  v74 = 1;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v12 = WindowsGetStringRawBuffer(a2, 0LL);
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          &v79,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v12);
  v15 = v79;
  v10 = v13;
  if ( v13 < 0 )
  {
    v16 = 840LL;
LABEL_26:
    v20 = (unsigned int)v13;
    goto LABEL_27;
  }
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)v79, v73, v14);
  v10 = DoesKeyExist;
  if ( DoesKeyExist < 0 )
  {
    v19 = 942LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)DoesKeyExist);
    goto LABEL_12;
  }
  if ( !LOBYTE(v73[0]) )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v15, v18);
    v10 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v19 = 945LL;
      goto LABEL_7;
    }
  }
  v10 = 0;
LABEL_12:
  if ( v10 >= 0 )
  {
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
            (const WCHAR *)v15,
            &Src,
            L"Your Phone",
            (const unsigned __int16 *)0xA);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 849LL;
      goto LABEL_26;
    }
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
            (const WCHAR *)v15,
            L"System.IsPinnedToNameSpaceTree",
            (const unsigned __int16 *)1);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 850LL;
      goto LABEL_26;
    }
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
            (const WCHAR *)v15,
            L"DescriptionID",
            (const unsigned __int16 *)3);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 851LL;
      goto LABEL_26;
    }
    v21 = WindowsGetStringRawBuffer(a3, 0LL);
    v22 = -1LL;
    v23 = -1LL;
    do
      ++v23;
    while ( v21[v23] );
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
            (const WCHAR *)v15,
            L"LocalizedString",
            v21,
            (const unsigned __int16 *)v23);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 852LL;
      goto LABEL_26;
    }
    v13 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
            (const WCHAR *)v15,
            L"SortOrderIndex",
            (const unsigned __int16 *)0x40);
    v10 = v13;
    if ( v13 < 0 )
    {
      v16 = 853LL;
      goto LABEL_26;
    }
    memset(v82, 0, 24);
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            v82,
            L"%ws\\%ws",
            v15,
            L"DefaultIcon");
    v10 = v24;
    if ( v24 < 0 )
    {
      v26 = 858LL;
LABEL_41:
      v30 = (unsigned int)v24;
      goto LABEL_42;
    }
    v27 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)v82[0], v73, v25);
    v10 = v27;
    if ( v27 >= 0 )
    {
      if ( LOBYTE(v73[0])
        || (v27 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v82[0], v28),
            v10 = v27,
            v27 >= 0) )
      {
        v10 = 0;
LABEL_37:
        if ( v10 < 0 )
        {
          v30 = (unsigned int)v10;
          v26 = 859LL;
LABEL_42:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v30);
LABEL_137:
          if ( v82[0] )
            CoTaskMemFree(v82[0]);
          goto LABEL_139;
        }
        v24 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                (const WCHAR *)v82[0],
                &Src,
                L"%SystemRoot%\\system32\\ContentDeliveryManager.Utilities.dll,-10",
                (const unsigned __int16 *)0x3E);
        v10 = v24;
        if ( v24 < 0 )
        {
          v26 = 860LL;
          goto LABEL_41;
        }
        v79 = 0LL;
        v80 = 0LL;
        v81 = 0LL;
        v31 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                &v79,
                L"%ws\\%ws",
                v15,
                L"InProcServer32");
        v33 = v79;
        v10 = v31;
        if ( v31 < 0 )
        {
          v34 = 866LL;
LABEL_58:
          v38 = (unsigned int)v31;
          goto LABEL_59;
        }
        v35 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)v79, v73, v32);
        v10 = v35;
        if ( v35 >= 0 )
        {
          if ( LOBYTE(v73[0])
            || (v35 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v33, v36),
                v10 = v35,
                v35 >= 0) )
          {
            v10 = 0;
LABEL_52:
            if ( v10 < 0 )
            {
              v38 = (unsigned int)v10;
              v34 = 867LL;
LABEL_59:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v34,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)v38);
LABEL_134:
              if ( v33 )
                CoTaskMemFree(v33);
              v11 = v74;
              goto LABEL_137;
            }
            v31 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                    (const WCHAR *)v33,
                    &Src,
                    L"%SystemRoot%\\system32\\shell32.dll",
                    (const unsigned __int16 *)0x21);
            v10 = v31;
            if ( v31 < 0 )
            {
              v34 = 868LL;
              goto LABEL_58;
            }
            v31 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                    (const WCHAR *)v33,
                    L"ThreadingModel",
                    L"Both",
                    (const unsigned __int16 *)4);
            v10 = v31;
            if ( v31 < 0 )
            {
              v34 = 869LL;
              goto LABEL_58;
            }
            pv = 0LL;
            v76 = 0LL;
            v77 = 0LL;
            v39 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                    &pv,
                    L"%ws\\%ws",
                    v15,
                    L"Instance");
            v41 = pv;
            v10 = v39;
            if ( v39 < 0 )
            {
              v42 = (unsigned int)v39;
              v43 = 874LL;
LABEL_74:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v43,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)v42);
LABEL_132:
              if ( v41 )
                CoTaskMemFree(v41);
              goto LABEL_134;
            }
            v44 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, v73, v40);
            v10 = v44;
            if ( v44 >= 0 )
            {
              if ( LOBYTE(v73[0])
                || (v44 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v41, v45),
                    v10 = v44,
                    v44 >= 0) )
              {
                v10 = 0;
LABEL_69:
                if ( v10 < 0 )
                {
                  v43 = 875LL;
LABEL_73:
                  v42 = (unsigned int)v10;
                  goto LABEL_74;
                }
                v10 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                        (const WCHAR *)v41,
                        L"CLSID",
                        L"{0E5AAE11-A475-4c5b-AB00-C66DE400274E}",
                        (const unsigned __int16 *)0x26);
                if ( v10 < 0 )
                {
                  v43 = 876LL;
                  goto LABEL_73;
                }
                pv = 0LL;
                v76 = 0LL;
                v77 = 0LL;
                v47 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                        &pv,
                        L"%ws\\%ws",
                        v41,
                        L"InitPropertyBag");
                v49 = pv;
                v10 = v47;
                if ( v47 < 0 )
                {
                  v50 = 882LL;
LABEL_91:
                  v53 = (unsigned int)v47;
                  goto LABEL_92;
                }
                v10 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, v73, v48);
                if ( v10 >= 0 )
                {
                  if ( LOBYTE(v73[0])
                    || (v10 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v49, v51),
                        v10 >= 0) )
                  {
                    v10 = 0;
LABEL_84:
                    if ( v10 < 0 )
                    {
                      v53 = (unsigned int)v10;
                      v50 = 883LL;
LABEL_92:
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v50,
                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                        (const char *)v53);
LABEL_129:
                      if ( v49 )
                        CoTaskMemFree(v49);
                      v4 = this;
                      goto LABEL_132;
                    }
                    do
                      ++v22;
                    while ( lpPathName[v22] );
                    v47 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                            (const WCHAR *)v49,
                            L"TargetFolderPath",
                            lpPathName,
                            (const unsigned __int16 *)v22);
                    v10 = v47;
                    if ( v47 < 0 )
                    {
                      v50 = 884LL;
                      goto LABEL_91;
                    }
                    v47 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                            (const WCHAR *)v49,
                            L"Attributes",
                            (const unsigned __int16 *)0x11);
                    v10 = v47;
                    if ( v47 < 0 )
                    {
                      v50 = 885LL;
                      goto LABEL_91;
                    }
                    pv = 0LL;
                    v76 = 0LL;
                    v77 = 0LL;
                    v54 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                            &pv,
                            L"%ws\\%ws",
                            v15,
                            L"ShellFolder");
                    v56 = pv;
                    v10 = v54;
                    if ( v54 < 0 )
                    {
                      v57 = 891LL;
LABEL_108:
                      v61 = (unsigned int)v54;
                      goto LABEL_109;
                    }
                    Key = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist((const WCHAR *)pv, v73, v55);
                    v10 = Key;
                    if ( Key >= 0 )
                    {
                      if ( LOBYTE(v73[0])
                        || (Key = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v56, v59),
                            v10 = Key,
                            Key >= 0) )
                      {
                        v10 = 0;
LABEL_102:
                        if ( v10 < 0 )
                        {
                          v61 = (unsigned int)v10;
                          v57 = 892LL;
LABEL_109:
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)v57,
                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                            (const char *)v61);
LABEL_126:
                          if ( v56 )
                            CoTaskMemFree(v56);
                          v33 = v79;
                          goto LABEL_129;
                        }
                        v54 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                                (const WCHAR *)v56,
                                L"Attributes",
                                (const unsigned __int16 *)0x30040005);
                        v10 = v54;
                        if ( v54 < 0 )
                        {
                          v57 = 893LL;
                          goto LABEL_108;
                        }
                        v54 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                                (const WCHAR *)v56,
                                L"FolderValueFlags",
                                (const unsigned __int16 *)0x428);
                        v10 = v54;
                        if ( v54 < 0 )
                        {
                          v57 = 894LL;
                          goto LABEL_108;
                        }
                        pv = 0LL;
                        v76 = 0LL;
                        v77 = 0LL;
                        v62 = WindowsGetStringRawBuffer(a2, 0LL);
                        v63 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                                &pv,
                                L"%ws\\%ws",
                                L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
                                v62);
                        v65 = (WCHAR *)pv;
                        v10 = v63;
                        if ( v63 >= 0 )
                        {
                          v10 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
                                  v64,
                                  (const unsigned __int16 *)pv);
                          if ( v10 >= 0 )
                          {
                            v10 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                                    v65,
                                    &Src,
                                    L"Your Phone",
                                    (const unsigned __int16 *)0xA);
                            if ( v10 >= 0 )
                            {
                              v10 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
                                      v67,
                                      L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel");
                              if ( v10 >= 0 )
                              {
                                v68 = WindowsGetStringRawBuffer(a2, 0LL);
                                v10 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
                                        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                                        v68,
                                        (const unsigned __int16 *)1);
                                if ( v10 >= 0 )
                                {
                                  LOBYTE(v69) = 0;
                                  v74 = v69;
                                  v70 = WindowsGetStringRawBuffer(a2, 0LL);
                                  v10 = ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v71, 8, v70);
                                  if ( v10 >= 0 )
                                  {
                                    v10 = 0;
LABEL_124:
                                    if ( v65 )
                                      CoTaskMemFree(v65);
                                    goto LABEL_126;
                                  }
                                  v66 = 910LL;
                                }
                                else
                                {
                                  v66 = 904LL;
                                }
                              }
                              else
                              {
                                v66 = 903LL;
                              }
                            }
                            else
                            {
                              v66 = 900LL;
                            }
                          }
                          else
                          {
                            v66 = 899LL;
                          }
                        }
                        else
                        {
                          v66 = 898LL;
                        }
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v66,
                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                          (const char *)(unsigned int)v10);
                        goto LABEL_124;
                      }
                      v60 = 945LL;
                    }
                    else
                    {
                      v60 = 942LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v60,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                      (const char *)(unsigned int)Key);
                    goto LABEL_102;
                  }
                  v52 = 945LL;
                }
                else
                {
                  v52 = 942LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v52,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  (const char *)(unsigned int)v10);
                goto LABEL_84;
              }
              v46 = 945LL;
            }
            else
            {
              v46 = 942LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v46,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v44);
            goto LABEL_69;
          }
          v37 = 945LL;
        }
        else
        {
          v37 = 942LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v37,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v35);
        goto LABEL_52;
      }
      v29 = 945LL;
    }
    else
    {
      v29 = 942LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_37;
  }
  v20 = (unsigned int)v10;
  v16 = 841LL;
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v20);
LABEL_139:
  if ( v15 )
    CoTaskMemFree(v15);
  if ( v11 )
  {
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)v4 + 56LL))(v4, a2);
  }
LABEL_143:
  if ( lpPathName )
    CoTaskMemFree((LPVOID)lpPathName);
  return (unsigned int)v10;
}
