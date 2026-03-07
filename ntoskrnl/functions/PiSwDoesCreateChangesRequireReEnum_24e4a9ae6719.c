char __fastcall PiSwDoesCreateChangesRequireReEnum(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  char v5; // bl
  _QWORD *v6; // r8
  __int64 v7; // rcx
  const wchar_t *v8; // rcx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rdx
  unsigned int v12; // eax
  const WCHAR *v13; // rcx
  const WCHAR *v14; // rdx
  const WCHAR *v15; // rcx
  const WCHAR *v16; // rdx

  if ( *(_DWORD *)(a1 + 64) != *(_DWORD *)(a2 + 64) )
    return 1;
  v4 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  v6 = *(_QWORD **)(a2 + 56);
  if ( v4 != v6 )
  {
    if ( !v4 || !v6 )
      return 1;
    v7 = *v4 - *v6;
    if ( *v4 == *v6 )
      v7 = v4[1] - v6[1];
    if ( v7 )
      return 1;
  }
  if ( wcsicmp(*(const wchar_t **)(*(_QWORD *)(a1 + 112) + 8LL), *(const wchar_t **)(a2 + 8)) )
    return 1;
  v8 = *(const wchar_t **)(a1 + 48);
  v9 = *(const wchar_t **)(a2 + 72);
  if ( v8 != v9 && (!v8 || !v9 || wcsicmp(v8, v9)) )
    return 1;
  v10 = *(const wchar_t **)(a1 + 56);
  v11 = *(const wchar_t **)(a2 + 80);
  if ( v10 != v11 && (!v10 || !v11 || wcsicmp(v10, v11)) )
    return 1;
  v12 = *(_DWORD *)(a1 + 160);
  if ( v12 != *(_DWORD *)(a2 + 88) || v12 && memcmp(*(const void **)(a1 + 152), *(const void **)(a2 + 96), v12) )
    return 1;
  v13 = *(const WCHAR **)(a1 + 24);
  v14 = *(const WCHAR **)(a2 + 32);
  if ( v13 != v14 && (!v13 || !v14 || !(unsigned __int8)PnpCompareMultiSz(v13, v14, 1u)) )
    return 1;
  v15 = *(const WCHAR **)(a1 + 32);
  v16 = *(const WCHAR **)(a2 + 48);
  if ( v15 != v16 && (!v15 || !v16 || !(unsigned __int8)PnpCompareMultiSz(v15, v16, 1u)) )
    return 1;
  return v5;
}
