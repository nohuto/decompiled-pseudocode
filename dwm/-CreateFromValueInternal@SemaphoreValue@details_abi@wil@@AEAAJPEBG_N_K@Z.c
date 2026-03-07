__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        const unsigned __int16 *a2,
        size_t *a3,
        __int64 a4)
{
  size_t v5; // rdx
  size_t v6; // r9
  size_t *v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rsi
  LONG v10; // r11d
  LONG v11; // ebp
  LONG v12; // r8d
  wil::details *Semaphore; // rax
  wil::details *v14; // rcx
  size_t v15; // rdx
  size_t v16; // r9
  size_t *v17; // r8
  wil::details *v18; // rax
  wil::details *v19; // rcx
  int LastErrorFailHr; // eax
  unsigned int v22; // edi
  int v23; // eax
  unsigned int v24; // ebx
  size_t v25; // [rsp+20h] [rbp-258h]
  size_t v26; // [rsp+20h] [rbp-258h]
  size_t v27; // [rsp+20h] [rbp-258h]
  int v28; // [rsp+20h] [rbp-258h]
  size_t pcchDestLength[2]; // [rsp+30h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  StringCopyWorkerW(pszDest, 0x104uLL, a3, a2, v25);
  if ( StringValidateDestAndLengthW(pszDest, v5, pcchDestLength, v6) >= 0 )
    StringCopyWorkerW(&pszDest[pcchDestLength[0]], 260 - pcchDestLength[0], v7, L"_p0", v26);
  v9 = v8 >> 31;
  v10 = v8 & 0x7FFFFFFF;
  v11 = 1;
  v12 = 1;
  if ( v10 )
    v12 = v10;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v10, v12, pszDest, 0, 0x1F0003u);
  if ( Semaphore )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v14);
    v22 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (unsigned int)"wil",
        (const char *)(unsigned int)LastErrorFailHr,
        v27);
      return v22;
    }
  }
  if ( StringValidateDestAndLengthW(pszDest, v15, pcchDestLength, v16) >= 0 )
    StringCopyWorkerW(&pszDest[pcchDestLength[0]], 260 - pcchDestLength[0], v17, L"h", v27);
  if ( (_DWORD)v9 )
    v11 = v9;
  v18 = (wil::details *)CreateSemaphoreExW(0LL, v9, v11, pszDest, 0, 0x1F0003u);
  if ( v18 )
  {
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 1,
      v18);
    return 0LL;
  }
  v23 = wil::details::GetLastErrorFailHr(v19);
  v24 = v23;
  if ( v23 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x89, (unsigned int)"wil", (const char *)(unsigned int)v23, v28);
  return v24;
}
