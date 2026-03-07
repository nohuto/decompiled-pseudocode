__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v5; // rax
  __int64 v6; // r11
  __int64 v7; // r14
  __int64 v8; // r8
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r8
  WCHAR v13; // r9
  WCHAR *v14; // rax
  wil::details *v15; // rax
  wil::details *v16; // rdi
  int ValueFromSemaphore; // eax
  unsigned int LastError; // ebx
  __int64 v19; // rdx
  WCHAR *v20; // rax
  __int64 v21; // r8
  WCHAR *v22; // rdx
  __int64 v23; // rsi
  char *v24; // rcx
  WCHAR v25; // ax
  WCHAR *v26; // rax
  wil::details *v27; // rax
  const char *v28; // r9
  wil::details *v29; // rbx
  int v30; // eax
  void *v31; // rdx
  int v32; // esi
  void *v33; // rdx
  void *v35; // rdx
  const char *v36; // r9
  int v37; // [rsp+20h] [rbp-E0h] BYREF
  int v38; // [rsp+24h] [rbp-DCh] BYREF
  wil::details *v39; // [rsp+28h] [rbp-D8h] BYREF
  wil::details *v40; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v5 = Name;
  v6 = 260LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = 2147483646LL;
  v8 = (260 - v6) & -(__int64)(v6 != 0);
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v39 = v15;
  v16 = v15;
  if ( !v15 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v36);
    goto LABEL_38;
  }
  v38 = 0;
  v37 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, &v38);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v37);
LABEL_38:
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(&v39);
    return LastError;
  }
  v19 = 260LL;
  v20 = Name;
  do
  {
    if ( !*v20 )
      break;
    ++v20;
    --v19;
  }
  while ( v19 );
  v21 = (260 - v19) & -(__int64)(v19 != 0);
  if ( v19 )
  {
    v22 = &Name[v21];
    v23 = 260 - v21;
    if ( 260 != v21 )
    {
      v24 = (char *)((char *)L"h" - (char *)v22);
      do
      {
        if ( !v7 )
          break;
        v25 = *(WCHAR *)((char *)v22 + (_QWORD)v24);
        if ( !v25 )
          break;
        *v22 = v25;
        --v7;
        ++v22;
        --v23;
      }
      while ( v23 );
    }
    v26 = v22 - 1;
    if ( v23 )
      v26 = v22;
    *v26 = 0;
  }
  v27 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v40 = v27;
  v29 = v27;
  if ( !v27 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v28);
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(&v40);
    goto LABEL_38;
  }
  v30 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v27, &v37);
  v32 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (unsigned int)"wil", (const char *)(unsigned int)v30, v37);
    wil::details::CloseHandle(v29, v35);
    LastError = v32;
    goto LABEL_38;
  }
  wil::details::CloseHandle(v29, v31);
  *a3 = v38 | (unsigned __int64)((__int64)v37 << 31);
  if ( v16 )
    wil::details::CloseHandle(v16, v33);
  return 0LL;
}
