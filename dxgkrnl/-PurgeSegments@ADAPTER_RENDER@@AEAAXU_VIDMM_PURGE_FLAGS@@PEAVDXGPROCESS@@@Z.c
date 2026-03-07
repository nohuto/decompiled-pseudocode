char __fastcall ADAPTER_RENDER::PurgeSegments(struct _EX_RUNDOWN_REF *a1, unsigned int a2, __int64 a3)
{
  DXGADAPTER *Count; // rcx
  int v7; // edi
  char result; // al
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  __int64 v11; // r15
  const wchar_t *v12; // r9
  __int64 v13; // rcx

  Count = (DXGADAPTER *)a1[2].Count;
  v7 = a2 & 8;
  if ( (a2 & 8) != 0 )
  {
    result = DXGADAPTER::IsCoreResourceSharedOwner(Count);
    v9 = 0LL;
    if ( result )
      goto LABEL_3;
    v11 = 3077LL;
    WdLogSingleEntry1(1LL, 3077LL);
    v12 = L"IsCoreResourceSharedOwner()";
  }
  else
  {
    result = DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)Count);
    v9 = 0LL;
    if ( result )
      goto LABEL_3;
    v11 = 3081LL;
    WdLogSingleEntry1(1LL, 3081LL);
    v12 = L"IsCoreResourceExclusiveOwner()";
  }
  result = DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
  if ( a1[96].Count )
  {
    if ( !v7 )
    {
      ExWaitForRundownProtectionRelease(a1 + 173);
      ExReInitializeRundownProtection(a1 + 173);
    }
    v10 = a1[95].Count;
    if ( a3 )
    {
      v13 = *(_QWORD *)(a3 + 64);
      if ( v13 )
        v9 = *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1));
    }
    return (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(v10 + 8) + 72LL))(a1[96].Count, a2, v9);
  }
  return result;
}
