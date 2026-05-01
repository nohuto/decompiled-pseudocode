/*
 * XREFs of ?CreateShellFeedsRegEncryptionFlag@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B2078
 * Callers:
 *     ?MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B5AB8 (-MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFAC4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1068 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802650DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::CreateShellFeedsRegEncryptionFlag(
        ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *this)
{
  unsigned int v1; // r12d
  unsigned int v2; // eax
  LSTATUS KeySecurity; // eax
  unsigned int v4; // ebx
  PSECURITY_DESCRIPTOR v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // eax
  const char *v8; // r9
  signed int LastError; // eax
  HLOCAL v10; // rsi
  struct _ACL *v11; // r14
  struct _ACL *v12; // r15
  HLOCAL v13; // rbx
  signed int v14; // eax
  unsigned int v15; // eax
  unsigned int dwOptions; // [rsp+28h] [rbp-E0h]
  unsigned int dwOptionsa; // [rsp+28h] [rbp-E0h]
  DWORD cbSecurityDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+6Ch] [rbp-9Ch] BYREF
  DWORD dwOwnerSize; // [rsp+70h] [rbp-98h] BYREF
  DWORD dwSaclSize; // [rsp+74h] [rbp-94h] BYREF
  DWORD dwDaclSize[2]; // [rsp+78h] [rbp-90h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-88h] BYREF
  DWORD dwDisposition; // [rsp+88h] [rbp-80h] BYREF
  PACL pDacl; // [rsp+90h] [rbp-78h] BYREF
  PACL NewAcl; // [rsp+98h] [rbp-70h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+A0h] [rbp-68h] BYREF
  WINBOOL bDaclPresent; // [rsp+A4h] [rbp-64h] BYREF
  PSID pPrimaryGroup; // [rsp+A8h] [rbp-60h] BYREF
  HLOCAL v31; // [rsp+B0h] [rbp-58h] BYREF
  HLOCAL v32; // [rsp+B8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR v33; // [rsp+C0h] [rbp-48h] BYREF
  struct _EXPLICIT_ACCESS_W pListOfExplicitEntries; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v35; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t v36; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v1 = 0;
  hKey = 0LL;
  dwDisposition = 0;
  dwDaclSize[1] = 0;
  dwPrimaryGroupSize = 0;
  dwOwnerSize = 0;
  dwSaclSize = 0;
  dwDaclSize[0] = 0;
  cbSecurityDescriptor = 0;
  pDacl = 0LL;
  NewAcl = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  v2 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\NandI",
         0,
         0LL,
         0,
         0x60000u,
         0LL,
         &hKey,
         &dwDisposition);
  if ( v2 )
  {
    KeySecurity = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0xC8,
                    (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
                    (const char *)v2,
                    dwOptions);
LABEL_7:
    v1 = KeySecurity;
    goto LABEL_9;
  }
  if ( dwDisposition != 2 )
  {
    KeySecurity = RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor);
    if ( KeySecurity && KeySecurity != 122 )
    {
      if ( KeySecurity > 0 )
      {
        v1 = (unsigned __int16)KeySecurity | 0x80070000;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
    v33 = LocalAlloc(0x40u, cbSecurityDescriptor);
    v5 = v33;
    v6 = RegGetKeySecurity(hKey, 4u, v33, &cbSecurityDescriptor);
    if ( v6 )
    {
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xD9,
             (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
             (const char *)v6,
             dwOptions);
    }
    else
    {
      v36 = aEveryone[8];
      *(_OWORD *)(&pListOfExplicitEntries.grfInheritance + 1) = 0LL;
      *(_QWORD *)&pListOfExplicitEntries.Trustee.TrusteeType = 0LL;
      pListOfExplicitEntries.grfAccessPermissions = 0x10000;
      *(_QWORD *)&pListOfExplicitEntries.grfAccessMode = 3LL;
      v35 = *(_OWORD *)L"Everyone";
      pListOfExplicitEntries.Trustee.TrusteeForm = TRUSTEE_IS_NAME;
      pListOfExplicitEntries.Trustee.ptstrName = (LPWCH)&v35;
      if ( GetSecurityDescriptorDacl(v5, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      {
        if ( pDacl )
        {
          if ( SetEntriesInAclW(1u, &pListOfExplicitEntries, pDacl, &NewAcl) )
          {
            LastError = GetLastError();
            v4 = LastError;
            if ( LastError > 0 )
              v4 = (unsigned __int16)LastError | 0x80070000;
          }
          else
          {
            MakeAbsoluteSD(
              v5,
              0LL,
              &dwDaclSize[1],
              0LL,
              dwDaclSize,
              0LL,
              &dwSaclSize,
              0LL,
              &dwOwnerSize,
              0LL,
              &dwPrimaryGroupSize);
            v10 = LocalAlloc(0x40u, dwDaclSize[1]);
            v32 = v10;
            v11 = (struct _ACL *)LocalAlloc(0x40u, dwDaclSize[0]);
            v12 = (struct _ACL *)LocalAlloc(0x40u, dwSaclSize);
            v13 = LocalAlloc(0x40u, dwOwnerSize);
            v31 = v13;
            pPrimaryGroup = LocalAlloc(0x40u, dwPrimaryGroupSize);
            if ( MakeAbsoluteSD(
                   v5,
                   v10,
                   &dwDaclSize[1],
                   v11,
                   dwDaclSize,
                   v12,
                   &dwSaclSize,
                   v13,
                   &dwOwnerSize,
                   pPrimaryGroup,
                   &dwPrimaryGroupSize)
              && SetSecurityDescriptorDacl(v10, 1, NewAcl, 0) )
            {
              v15 = RegSetKeySecurity(hKey, 4u, v10);
              if ( v15 )
                v4 = wil::details::in1diag3::Return_Win32(
                       retaddr,
                       (void *)0x106,
                       (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
                       (const char *)v15,
                       dwOptionsa);
              else
                v4 = 0;
            }
            else
            {
              v14 = GetLastError();
              v4 = v14;
              if ( v14 > 0 )
                v4 = (unsigned __int16)v14 | 0x80070000;
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pPrimaryGroup);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v31);
            if ( v12 )
              LocalFree(v12);
            if ( v11 )
              LocalFree(v11);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v32);
          }
        }
        else
        {
          v4 = -2147418113;
        }
        goto LABEL_32;
      }
      v7 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE6,
             (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
             v8);
    }
    v4 = v7;
LABEL_32:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v33);
    goto LABEL_33;
  }
LABEL_9:
  v4 = v1;
LABEL_33:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v4;
}
