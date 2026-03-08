/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140782330
 * Callers:
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x140388D7C (RtlQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407822BC (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     RtlFindLowerBoundInSortedArray @ 0x1407AF6D0 (RtlFindLowerBoundInSortedArray.c)
 *     RtlpFcLinearSearchInSortedArray @ 0x1409C0310 (RtlpFcLinearSearchInSortedArray.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBuffers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  int v8; // eax
  unsigned int *LowerBoundInSortedArray; // rsi
  int v10; // edx
  unsigned int *v11; // rbp
  unsigned int v12; // edx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // edx
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v4 = *(unsigned int **)(a2 + 8);
  v5 = 0;
  v8 = a1;
  LowerBoundInSortedArray = 0LL;
  if ( !v4 )
    goto LABEL_9;
  v10 = (_DWORD)v4 + 4;
  if ( *v4 )
  {
    LowerBoundInSortedArray = (unsigned int *)RtlFindLowerBoundInSortedArray(
                                                (unsigned int)&v17,
                                                v10,
                                                *v4,
                                                a4,
                                                (__int64)RtlFcpCompareFeatureIdToFeature);
    v8 = v17;
    if ( LowerBoundInSortedArray == &v4[4 * *v4 + 1] || *LowerBoundInSortedArray != v17 )
      LowerBoundInSortedArray = 0LL;
  }
  else
  {
    LowerBoundInSortedArray = (unsigned int *)RtlpFcLinearSearchInSortedArray(
                                                (unsigned int)&v17,
                                                v10,
                                                0,
                                                a4,
                                                (__int64)RtlFcpCompareFeatureIdToFeature);
    v8 = v17;
  }
  if ( LowerBoundInSortedArray )
  {
    *(_OWORD *)a4 = *(_OWORD *)LowerBoundInSortedArray;
  }
  else
  {
LABEL_9:
    *(_OWORD *)a4 = 0LL;
    *(_DWORD *)a4 = v8;
  }
  v11 = *(unsigned int **)(a3 + 8);
  if ( v11 )
  {
    v13 = (_DWORD)v11 + 4;
    if ( *v11 )
    {
      v14 = RtlFindLowerBoundInSortedArray((unsigned int)&v17, v13, *v11, a4, (__int64)RtlFcpCompareFeatureIdToFeature);
      if ( (unsigned int *)v14 == &v11[4 * *v11 + 1] || *(_DWORD *)v14 != v17 )
        v14 = 0LL;
    }
    else
    {
      v14 = RtlpFcLinearSearchInSortedArray((unsigned int)&v17, v13, 0, a4, (__int64)RtlFcpCompareFeatureIdToFeature);
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
  if ( !LowerBoundInSortedArray && (v12 & 0x40) == 0 )
    return (v12 & 0x80u) != 0 ? 279 : -1073741275;
  return v5;
}
