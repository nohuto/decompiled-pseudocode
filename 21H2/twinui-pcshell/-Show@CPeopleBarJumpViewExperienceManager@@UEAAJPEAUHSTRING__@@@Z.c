/*
 * XREFs of ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18023EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001503C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180039990 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B380 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180053148 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18008AEA4 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x18023D728 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x18023DBE0 (-Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarJumpViewExperienceManager::Show(HSTRING *this, HSTRING a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  PCWSTR StringRawBuffer; // rax
  int v7; // eax
  __int64 v8; // rdx
  HSTRING_HEADER *v9; // rax
  PCWSTR sourceString; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v12[2]; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  HSTRING v14; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v14 = a2;
  v4 = CPeopleBarJumpViewExperienceManager::Dismiss((CPeopleBarJumpViewExperienceManager *)this);
  if ( v4 >= 0 )
  {
    v4 = Microsoft::WRL::Wrappers::HString::Set(this + 39, &v14);
    if ( v4 < 0 )
    {
      v5 = 123LL;
      goto LABEL_3;
    }
    sourceString = 0LL;
    *(_QWORD *)v12 = 0LL;
    v13 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           (__int64)&sourceString,
           L"%s %s",
           L"Windows.Internal.ShellExperience.PeopleBarJumpView",
           StringRawBuffer);
    v4 = v7;
    if ( v7 >= 0 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString, v12[0]);
      v7 = CSingleViewShellExperience::SetArgs(this + 7, (HSTRING)v9[1].Reserved.Reserved1);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v7 = CSingleViewShellExperience::Show(
               (__int64)(this + 7),
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
        v4 = v7;
        if ( v7 >= 0 )
        {
          v4 = 0;
          goto LABEL_14;
        }
        v8 = 130LL;
      }
      else
      {
        v8 = 128LL;
      }
    }
    else
    {
      v8 = 127LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_14:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    return (unsigned int)v4;
  }
  v5 = 121LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
