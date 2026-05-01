/*
 * XREFs of ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180246A40
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180248C80 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800876D0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18008AEA4 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802497F4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18024986C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180249AB0 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CJumpViewExperienceManager::EnsureActivationArgs(HSTRING *this)
{
  const wchar_t *v2; // rdx
  HRESULT v3; // eax
  int v4; // eax
  UINT32 length; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string; // [rsp+28h] [rbp-40h] BYREF
  wchar_t *Src[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v9[2]; // [rsp+40h] [rbp-28h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  WindowsGetStringRawBuffer(this[45], &length);
  *(_QWORD *)v9 = 0LL;
  v10 = 7LL;
  LOWORD(Src[0]) = 0;
  std::wstring::reserve(Src, length + 43);
  std::wstring::append(Src);
  std::wstring::append(Src, 1LL, 32LL);
  std::wstring::append(Src);
  string = 0LL;
  v2 = (const wchar_t *)Src;
  if ( v10 >= 8 )
    v2 = Src[0];
  v3 = Microsoft::WRL::Wrappers::HString::Set(&string, v2, v9[0]);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      893LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CSingleViewShellExperience::SetArgs(this + 19, string);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      894LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  WindowsDeleteString(string);
  string = 0LL;
  std::wstring::_Tidy_deallocate(Src);
  return 0LL;
}
