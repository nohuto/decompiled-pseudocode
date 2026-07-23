/*
 * XREFs of RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140919E88
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x14091A644 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpFcCompareFeatureToUpdate @ 0x14091A11C (RtlpFcCompareFeatureToUpdate.c)
 *     RtlpFcDoesFeatureHaveUniqueState @ 0x14091A228 (RtlpFcDoesFeatureHaveUniqueState.c)
 *     RtlpFcIsUpdateModifyingOrAddingFeature @ 0x14091A280 (RtlpFcIsUpdateModifyingOrAddingFeature.c)
 *     RtlpFcUpdateFeature @ 0x14091A5D0 (RtlpFcUpdateFeature.c)
 */

NTSTATUS __fastcall RtlpFcCalculateRequiredSizeForNewFeatureTable(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONGLONG *a4)
{
  ULONGLONG v4; // r10
  ULONGLONG v5; // rbp
  unsigned __int64 v6; // r11
  _DWORD *v10; // rdi
  ULONGLONG v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  char IsUpdateModifyingOrAddingFeature; // al
  ULONGLONG v17; // r10
  ULONGLONG v18; // rcx
  __int64 v19; // r9
  unsigned __int64 v20; // rsi
  char v21; // al
  __int64 v22; // r9
  ULONGLONG v23; // r10
  ULONGLONG v24; // rcx
  NTSTATUS result; // eax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  int v29; // [rsp+28h] [rbp-50h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (unsigned int)*a1;
    v10 = a1 + 1;
    v11 = v4;
    if ( *a1 )
    {
      v12 = a2;
      do
      {
        if ( v6 >= a3 )
          goto LABEL_22;
        v13 = RtlpFcCompareFeatureToUpdate(v10, v12);
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            ++v5;
            v10 += 3;
            continue;
          }
          IsUpdateModifyingOrAddingFeature = RtlpFcIsUpdateModifyingOrAddingFeature(v12);
          v18 = v17 + 1;
          if ( !IsUpdateModifyingOrAddingFeature )
            v18 = v17;
          v4 = v18;
        }
        else
        {
          if ( (*(_DWORD *)(v12 + 28) & 4) != 0
            || (v15 = v10[2],
                v28 = *(_QWORD *)v10,
                v29 = v15,
                RtlpFcUpdateFeature(&v28, v14),
                !(unsigned __int8)RtlpFcDoesFeatureHaveUniqueState(&v28)) )
          {
            --v4;
          }
          ++v5;
          v10 += 3;
        }
        ++v6;
        v12 += 32LL;
      }
      while ( v5 < v11 );
    }
  }
  if ( v6 < a3 )
  {
    v19 = a2 + 32 * v6;
    v20 = a3 - v6;
    do
    {
      v21 = RtlpFcIsUpdateModifyingOrAddingFeature(v19);
      v24 = v23 + 1;
      if ( !v21 )
        v24 = v23;
      v19 = v22 + 32;
      v4 = v24;
      --v20;
    }
    while ( v20 );
  }
LABEL_22:
  if ( v4 )
  {
    result = RtlULongLongMult(v4, 0xCuLL, a4);
    if ( result >= 0 )
    {
      v26 = -1LL;
      v27 = *a4 + 4;
      if ( v27 >= *a4 )
        v26 = *a4 + 4;
      result = v27 < *a4 ? 0xC0000095 : 0;
      *a4 = v26;
    }
  }
  else
  {
    *a4 = 0LL;
    return 0;
  }
  return result;
}
