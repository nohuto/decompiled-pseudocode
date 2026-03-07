__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        STRSAFE_PCNZWCH pszSrc,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int LastError; // ebx
  size_t v6; // rdx
  size_t v7; // r9
  size_t *v8; // r8
  HANDLE v9; // rax
  unsigned int v10; // r8d
  const char *v11; // r9
  int ValueFromSemaphore; // eax
  size_t v13; // rdx
  size_t v14; // r9
  int v15; // esi
  size_t *v16; // r8
  HANDLE v17; // rax
  unsigned int v18; // r8d
  const char *v19; // r9
  int v20; // eax
  int v21; // edi
  size_t v23; // [rsp+20h] [rbp-E0h]
  size_t v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  size_t v27; // [rsp+38h] [rbp-C8h] BYREF
  size_t pcchDestLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  LastError = 0;
  *a3 = 0LL;
  StringCopyWorkerW(pszDest, 0x104uLL, a3, pszSrc, v23);
  if ( StringValidateDestAndLengthW(pszDest, v6, pcchDestLength, v7) >= 0 )
    StringCopyWorkerW(&pszDest[pcchDestLength[0]], 260 - pcchDestLength[0], v8, L"_p0", v24);
  v9 = OpenSemaphoreW(0x1F0003u, 0, pszDest);
  pcchDestLength[0] = (size_t)v9;
  if ( !v9 )
  {
    if ( GetLastError() != 2 )
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, v10, v11);
    goto LABEL_14;
  }
  v26 = 0;
  v25 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v9, &v26);
  v15 = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v24);
    LastError = v15;
LABEL_14:
    __1__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(pcchDestLength);
    return LastError;
  }
  if ( StringValidateDestAndLengthW(pszDest, v13, &v27, v14) >= 0 )
    StringCopyWorkerW(&pszDest[v27], 260 - v27, v16, L"h", v24);
  v17 = OpenSemaphoreW(0x1F0003u, 0, pszDest);
  v27 = (size_t)v17;
  if ( !v17 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, v18, v19);
    __1__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(&v27);
    goto LABEL_14;
  }
  v20 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v17, &v25);
  v21 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (unsigned int)"wil", (const char *)(unsigned int)v20, v24);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v27);
    LastError = v21;
    goto LABEL_14;
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v27);
  *a3 = v26 | (unsigned __int64)((__int64)v25 << 31);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(pcchDestLength);
  return 0LL;
}
