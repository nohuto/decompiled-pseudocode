/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180194D28
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180195968 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180195A98 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AABC8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CB324 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18019559C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18019761C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        size_t *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  WCHAR *v6; // rax
  __int64 v7; // r11
  LONG v8; // edi
  __int64 v9; // rbp
  __int64 v10; // r8
  WCHAR *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // r8
  WCHAR v15; // r9
  WCHAR *v16; // rax
  LONG v17; // r8d
  unsigned __int64 v18; // r14
  LONG v19; // esi
  wil::details *Semaphore; // rax
  wil::details *v21; // rcx
  int LastErrorFailHr; // eax
  unsigned int v23; // esi
  __int64 v25; // rdx
  WCHAR *v26; // rax
  __int64 v27; // r8
  WCHAR *v28; // rcx
  __int64 v29; // rbx
  char *v30; // rax
  WCHAR v31; // dx
  WCHAR *v32; // rax
  wil::details *v33; // rax
  wil::details *v34; // rcx
  int v35; // eax
  unsigned int v36; // ebx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  StringCchCopyW(Name, 0x104uLL, a2);
  v6 = Name;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = 2147483646LL;
  v10 = (260 - v7) & -(__int64)(v7 != 0);
  if ( v7 )
  {
    v11 = &Name[v10];
    v12 = 260 - v10;
    if ( v10 != 260 )
    {
      v13 = 2147483646LL;
      v14 = (char *)((char *)L"_p0" - (char *)v11);
      do
      {
        if ( !v13 )
          break;
        v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v11 = v15;
        --v13;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    v16 = v11 - 1;
    if ( v12 )
      v16 = v11;
    *v16 = 0;
  }
  v17 = 1;
  v18 = a4 >> 31;
  v19 = a4 & 0x7FFFFFFF;
  if ( v19 )
    v17 = v19;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v19, v17, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v21);
    v23 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x85, (int)"wil", (const char *)(unsigned int)LastErrorFailHr);
      return v23;
    }
  }
  v25 = 260LL;
  v26 = Name;
  do
  {
    if ( !*v26 )
      break;
    ++v26;
    --v25;
  }
  while ( v25 );
  v27 = (260 - v25) & -(__int64)(v25 != 0);
  if ( v25 )
  {
    v28 = &Name[v27];
    v29 = 260 - v27;
    if ( 260 != v27 )
    {
      v30 = (char *)((char *)L"h" - (char *)v28);
      do
      {
        if ( !v9 )
          break;
        v31 = *(WCHAR *)((char *)v28 + (_QWORD)v30);
        if ( !v31 )
          break;
        *v28 = v31;
        --v9;
        ++v28;
        --v29;
      }
      while ( v29 );
    }
    v32 = v28 - 1;
    if ( v29 )
      v32 = v28;
    *v32 = 0;
  }
  if ( (_DWORD)v18 )
    v8 = v18;
  v33 = (wil::details *)CreateSemaphoreExW(0LL, v18, v8, Name, 0, 0x1F0003u);
  if ( v33 )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 1,
      v33);
  }
  else
  {
    v35 = wil::details::GetLastErrorFailHr(v34);
    v36 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x89, (int)"wil", (const char *)(unsigned int)v35);
      return v36;
    }
  }
  return 0LL;
}
