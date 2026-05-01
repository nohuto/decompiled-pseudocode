/*
 * XREFs of ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18025B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180077F9C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18020DAA8 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025CEDC (-_Close@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18025D1BC (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025D970 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18025DB94 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall RetailDemoExperienceManager::LaunchApplication(
        RetailDemoExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  RetailDemoExperienceManager *v7; // r14
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r8
  RetailDemoExperienceManager *v11; // r15
  WCHAR *v12; // rax
  _WORD *v13; // rbx
  PCWSTR v14; // rax
  _WORD *v15; // rdx
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  const WCHAR *v18; // rdx
  const unsigned __int16 *v19; // rcx
  int v20; // eax
  WCHAR *v21; // rsi
  const WCHAR *v22; // r8
  const WCHAR *v23; // rcx
  void *v24; // rbx
  DWORD v25; // eax
  PCWSTR v26; // rax
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  int v29; // eax
  const WCHAR *v30; // rax
  const WCHAR *v31; // rbx
  const WCHAR *v32; // rcx
  PCWSTR v33; // rax
  const unsigned __int16 *v34; // rcx
  int v35; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-A8h] BYREF
  LPCWCH lpString1[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+48h] [rbp-90h]
  _QWORD v40[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v41[4]; // [rsp+78h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v7 = this;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( StringRawBuffer[v10] );
  std::wstring::assign((char *)v7 + 184, StringRawBuffer, v10);
  v11 = (RetailDemoExperienceManager *)((char *)v7 - 128);
  RetailDemoExperienceManager::_ParseExperienceArguments((char *)v7 - 128, (char *)v7 + 184);
  v12 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((__int64)lpString1, v12);
  if ( !*((_QWORD *)v7 + 9) )
  {
    v13 = (_WORD *)((char *)v7 + 152);
    v14 = WindowsGetStringRawBuffer(a3, 0LL);
    do
      ++v9;
    while ( v14[v9] );
    std::wstring::assign((char *)v7 + 152, v14, v9);
    v15 = (_WORD *)((char *)v7 + 120);
    v16 = *(_OWORD *)((char *)v7 + 120);
    v17 = *(_OWORD *)((char *)v7 + 136);
    *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)lpString1;
    *(_OWORD *)((char *)v7 + 136) = v39;
    *(_OWORD *)lpString1 = v16;
    v39 = v17;
    if ( *((_QWORD *)v7 + 18) >= 8uLL )
      v15 = *(_WORD **)v15;
    std::wstring::wstring((__int64)v41, v15);
    if ( *((_QWORD *)v7 + 22) >= 8uLL )
      v13 = *(_WORD **)v13;
    std::wstring::wstring((__int64)v40, v13);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
      &lpCriticalSection,
      0LL);
    v18 = (const WCHAR *)v40;
    if ( v40[3] >= 8uLL )
      v18 = (const WCHAR *)v40[0];
    v19 = (const unsigned __int16 *)v41;
    if ( v41[3] >= 8uLL )
      v19 = (const unsigned __int16 *)v41[0];
    v20 = ActivateApplicationForExperienceWithPropertySet(
            v19,
            v18,
            (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
            0LL,
            1u,
            0LL);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        426LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
    std::wstring::_Tidy_deallocate(v40);
    std::wstring::_Tidy_deallocate(v41);
    goto LABEL_43;
  }
  if ( !*((_QWORD *)v7 + 17) )
    goto LABEL_31;
  v21 = (WCHAR *)((char *)v7 + 120);
  v22 = (const WCHAR *)((char *)v7 + 120);
  if ( *((_QWORD *)v7 + 18) >= 8uLL )
    v22 = *(const WCHAR **)v21;
  v23 = (const WCHAR *)lpString1;
  if ( *((_QWORD *)&v39 + 1) >= 8uLL )
    v23 = lpString1[0];
  if ( CompareStringOrdinal(v23, -1, v22, -1, 1) == 2 )
    goto LABEL_31;
  RetailDemoExperienceManager::_Close((RetailDemoExperienceManager *)((char *)v7 - 128));
  v24 = (void *)*((_QWORD *)v7 + 41);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &lpCriticalSection,
    0LL);
  v25 = WaitForSingleObject(v24, 0x1388u);
  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    442LL,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
    (const char *)0x8000FFFFLL,
    v25 == 258,
    (bool)"RDX Experience Manager timeout waiting for close",
    (const char *)lpCriticalSection);
  v7 = (RetailDemoExperienceManager *)((char *)v7 + 152);
  v26 = WindowsGetStringRawBuffer(a3, 0LL);
  do
    ++v9;
  while ( v26[v9] );
  std::wstring::assign((char *)v7, v26, v9);
  v27 = *(_OWORD *)v21;
  v28 = *((_OWORD *)v21 + 1);
  *(_OWORD *)v21 = *(_OWORD *)lpString1;
  *((_OWORD *)v21 + 1) = v39;
  *(_OWORD *)lpString1 = v27;
  v39 = v28;
  if ( *((_QWORD *)v7 + 3) >= 8uLL )
    v7 = *(RetailDemoExperienceManager **)v7;
  if ( *((_QWORD *)v21 + 3) >= 8uLL )
    v21 = *(WCHAR **)v21;
  v29 = ActivateApplicationForExperienceWithPropertySet(
          v21,
          (const WCHAR *)v7,
          (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
          0LL,
          1u,
          0LL);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      446LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
LABEL_31:
    v30 = WindowsGetStringRawBuffer(a3, 0LL);
    v31 = (const WCHAR *)((char *)v7 + 152);
    v32 = (const WCHAR *)((char *)v7 + 152);
    if ( *((_QWORD *)v7 + 22) >= 8uLL )
      v32 = *(const WCHAR **)v31;
    if ( CompareStringOrdinal(v32, v9, v30, v9, 1) != 2 )
    {
      v33 = WindowsGetStringRawBuffer(a3, 0LL);
      do
        ++v9;
      while ( v33[v9] );
      std::wstring::assign((char *)v7 + 152, v33, v9);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &lpCriticalSection,
        0LL);
      if ( *((_QWORD *)v7 + 22) >= 8uLL )
        v31 = *(const WCHAR **)v31;
      v34 = (const unsigned __int16 *)((char *)v7 + 120);
      if ( *((_QWORD *)v7 + 18) >= 8uLL )
        v34 = *(const unsigned __int16 **)v34;
      v35 = ActivateApplicationForExperienceWithPropertySet(
              v34,
              v31,
              (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
              0LL,
              1u,
              0LL);
      if ( v35 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          455LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v35);
    }
    RetailDemoExperienceManager::_Show(v11);
  }
LABEL_43:
  std::wstring::_Tidy_deallocate(lpString1);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
