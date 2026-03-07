NTSTATUS __fastcall RtlpFcCalculateRequiredSizeForNewFeatureTable(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONGLONG *a4)
{
  ULONGLONG v4; // r11
  ULONGLONG v5; // r15
  unsigned __int64 v6; // rbx
  __int128 *v10; // rsi
  ULONGLONG v11; // r12
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  char IsUpdateModifyingOrAddingFeature; // al
  ULONGLONG v16; // r9
  __int64 v17; // r11
  __int64 v18; // r9
  unsigned __int64 v19; // rbp
  char v20; // al
  __int64 v21; // r9
  ULONGLONG v22; // r11
  ULONGLONG v23; // rcx
  NTSTATUS result; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (unsigned int)*a1;
    v10 = (__int128 *)(a1 + 1);
    v11 = v4;
    if ( *a1 )
    {
      v12 = a2;
      do
      {
        if ( v6 >= a3 )
          goto LABEL_21;
        v13 = RtlpFcCompareFeatureToUpdate(v10, v12, a3, v4);
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            ++v5;
            ++v10;
            continue;
          }
          IsUpdateModifyingOrAddingFeature = RtlpFcIsUpdateModifyingOrAddingFeature(v12);
          v4 = v17 + 1;
          if ( !IsUpdateModifyingOrAddingFeature )
            v4 = v16;
        }
        else
        {
          if ( (*(_DWORD *)(v12 + 28) & 4) != 0
            || (v27 = *v10, RtlpFcUpdateFeature(&v27, v14), !(unsigned __int8)RtlpFcDoesFeatureHaveUniqueState(&v27)) )
          {
            --v4;
          }
          ++v5;
          ++v10;
        }
        ++v6;
        v12 += 32LL;
      }
      while ( v5 < v11 );
    }
  }
  if ( v6 < a3 )
  {
    v18 = a2 + 32 * v6;
    v19 = a3 - v6;
    do
    {
      v20 = RtlpFcIsUpdateModifyingOrAddingFeature(v18);
      v23 = v22 + 1;
      if ( !v20 )
        v23 = v22;
      v18 = v21 + 32;
      v4 = v23;
      --v19;
    }
    while ( v19 );
  }
LABEL_21:
  if ( v4 )
  {
    result = RtlULongLongMult(v4, 0x10uLL, a4);
    if ( result >= 0 )
    {
      v25 = -1LL;
      v26 = *a4 + 4;
      if ( v26 >= *a4 )
        v25 = *a4 + 4;
      result = v26 < *a4 ? 0xC0000095 : 0;
      *a4 = v25;
    }
  }
  else
  {
    *a4 = 0LL;
    return 0;
  }
  return result;
}
