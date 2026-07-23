/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14091A420
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407790F4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140A395E8 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     RtlpFcLinearSearchInSortedArray @ 0x14091A2B4 (RtlpFcLinearSearchInSortedArray.c)
 *     RtlpFcLowerBounds @ 0x14091A32C (RtlpFcLowerBounds.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  _DWORD *v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rbp
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v4 = *(_DWORD **)(a2 + 8);
  v5 = 0;
  v8 = 0LL;
  if ( !v4 )
    goto LABEL_9;
  v9 = (unsigned __int64)(v4 + 1);
  if ( *v4 )
  {
    v8 = (_DWORD *)RtlpFcLowerBounds(
                     (__int64)&v17,
                     v9,
                     (unsigned int)*v4,
                     12LL,
                     (int (__fastcall *)(__int64, unsigned __int64))RtlFcpCompareFeatureIdToFeature);
    a1 = v17;
    if ( v8 == &v4[3 * *v4 + 1] || *v8 != v17 )
      v8 = 0LL;
  }
  else
  {
    v10 = RtlpFcLinearSearchInSortedArray(
            (__int64)&v17,
            v9,
            0LL,
            12LL,
            (__int64 (__fastcall *)(__int64, __int64))RtlFcpCompareFeatureIdToFeature);
    a1 = v17;
    v8 = (_DWORD *)v10;
  }
  if ( v8 )
  {
    *(_QWORD *)a4 = *(_QWORD *)v8;
    *(_DWORD *)(a4 + 8) = v8[2];
  }
  else
  {
LABEL_9:
    *(_QWORD *)(a4 + 4) = 0LL;
    *(_DWORD *)a4 = a1;
  }
  v11 = *(_DWORD **)(a3 + 8);
  if ( v11 )
  {
    v13 = (unsigned __int64)(v11 + 1);
    if ( *v11 )
    {
      v14 = RtlpFcLowerBounds(
              (__int64)&v17,
              v13,
              (unsigned int)*v11,
              16LL,
              (int (__fastcall *)(__int64, unsigned __int64))RtlFcpCompareFeatureIdToFeature);
      if ( (_DWORD *)v14 == &v11[4 * *v11 + 1] || *(_DWORD *)v14 != v17 )
        v14 = 0LL;
    }
    else
    {
      v14 = RtlpFcLinearSearchInSortedArray(
              (__int64)&v17,
              v13,
              0LL,
              16LL,
              (__int64 (__fastcall *)(__int64, __int64))RtlFcpCompareFeatureIdToFeature);
    }
    v15 = *(_DWORD *)(a4 + 4);
    if ( v14 )
    {
      v12 = v15 | 0x80;
      *(_DWORD *)(a4 + 4) = v12;
      if ( (v12 & 0x40) != 0 )
        goto LABEL_22;
      v12 = v12 & 0xFFFFFFBF | ((*(_WORD *)(v14 + 6) & 1) << 6);
    }
    else
    {
      v12 = v15 & 0xFFFFFF7F;
    }
    *(_DWORD *)(a4 + 4) = v12;
    goto LABEL_22;
  }
  *(_DWORD *)(a4 + 4) &= ~0x80u;
  v12 = *(_DWORD *)(a4 + 4);
LABEL_22:
  if ( !v8 && (v12 & 0x40) == 0 )
    return (v12 & 0x80u) != 0 ? 279 : -1073741275;
  return v5;
}
