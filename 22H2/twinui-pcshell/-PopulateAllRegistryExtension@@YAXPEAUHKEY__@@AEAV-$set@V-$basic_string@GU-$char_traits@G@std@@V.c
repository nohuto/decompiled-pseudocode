/*
 * XREFs of ?PopulateAllRegistryExtension@@YAXPEAUHKEY__@@AEAV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800A8254
 * Callers:
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2248 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$_Insert_nohint@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18009DE64 (--$_Insert_nohint@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18020605C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180264DD4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x18026784C (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PopulateAllRegistryExtension(HKEY hKey, __int64 *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  DWORD v6; // eax
  DWORD v7; // edi
  char v8; // bl
  WCHAR *v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int lpcSubKeys; // [rsp+20h] [rbp-59h]
  unsigned int lpcSubKeysa; // [rsp+20h] [rbp-59h]
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-19h] BYREF
  char v15; // [rsp+64h] [rbp-15h]
  DWORD cValues; // [rsp+68h] [rbp-11h] BYREF
  DWORD cchValueName; // [rsp+6Ch] [rbp-Dh] BYREF
  _BYTE v18[16]; // [rsp+70h] [rbp-9h] BYREF
  LPWSTR lpValueName[4]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  cValues = 0;
  cbMaxValueNameLen = 0;
  v4 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  v5 = v4;
  if ( v4 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x27D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)v4,
      lpcSubKeys);
  if ( cValues && !v5 )
  {
    v6 = ++cbMaxValueNameLen;
    v7 = 0;
    v8 = v15;
    while ( 1 )
    {
      cchValueName = v6;
      std::wstring::wstring(lpValueName, v6);
      v9 = (WCHAR *)lpValueName;
      if ( lpValueName[3] >= (LPWSTR)8 )
        v9 = lpValueName[0];
      v10 = RegEnumValueW(hKey, v7, v9, &cchValueName, 0LL, 0LL, 0LL, 0LL);
      if ( v10 )
      {
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x28A,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)v10,
          lpcSubKeysa);
      }
      else
      {
        std::wstring::resize(lpValueName, cchValueName);
        std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring const &,std::_Not_a_node_tag>(
          a2,
          (__int64)v18,
          v11,
          (__int64)lpValueName,
          v8);
      }
      std::wstring::_Tidy_deallocate(lpValueName);
      if ( ++v7 >= cValues )
        break;
      v6 = cbMaxValueNameLen;
    }
  }
}
