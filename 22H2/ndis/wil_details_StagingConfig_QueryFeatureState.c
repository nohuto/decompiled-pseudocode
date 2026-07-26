/*
 * XREFs of wil_details_StagingConfig_QueryFeatureState @ 0x1C003E768
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x1C00F9704 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     wil_details_StagingConfigFeature_HasUniqueState @ 0x1C003E430 (wil_details_StagingConfigFeature_HasUniqueState.c)
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r12
  int v5; // r10d
  __int64 v6; // r11
  int v7; // ebx
  int v8; // eax
  unsigned int v10; // r15d
  int v12; // r14d
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // xmm0_8
  unsigned int v16; // r8d
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // eax
  int v22; // edx
  unsigned int v23; // ecx
  _DWORD *v24; // rax
  __int64 result; // rax
  __int64 v26; // [rsp+20h] [rbp-10h] BYREF
  int v27; // [rsp+28h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v8 = a3;
  v26 = 0LL;
  v27 = 0;
  v10 = *(unsigned __int16 *)(v4 + 4);
  v12 = 0;
  v13 = 0;
  if ( !*(_WORD *)(v4 + 4) )
  {
LABEL_10:
    v16 = 0;
    if ( v12 )
      goto LABEL_11;
    goto LABEL_30;
  }
  while ( *(_DWORD *)(v6 + 12LL * v13) != v8 )
  {
LABEL_9:
    if ( ++v13 >= v10 )
      goto LABEL_10;
  }
  if ( !a4 || !*(_DWORD *)(a1 + 48) )
  {
    v14 = *(_DWORD *)(v6 + 12LL * v13 + 4);
    v12 = 1;
    v15 = *(_QWORD *)(v6 + 12LL * v13);
    v7 = *(_DWORD *)(v6 + 12LL * v13 + 8);
    v27 = v7;
    v26 = v15;
    if ( (v14 & 1) != 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(v6 + 12LL * v13 + 4) & 1) != 0 )
  {
LABEL_8:
    v8 = a3;
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(v6 + 12LL * v13 + 8);
  v26 = *(_QWORD *)(v6 + 12LL * v13);
  v27 = v7;
LABEL_11:
  if ( !a4 || (v17 = 12LL, !*(_DWORD *)(a1 + 48)) )
    v17 = 8LL;
  v18 = *(_DWORD *)(v17 + v4);
  if ( (v18 & 4) != 0 )
  {
    v19 = HIDWORD(v26) & 0xFFFFCFFF;
    HIDWORD(v26) &= 0xFFFFCFFF;
  }
  else
  {
    v19 = HIDWORD(v26);
  }
  if ( (v18 & 2) != 0 )
  {
    v19 &= 0xFFFFF3FF;
    HIDWORD(v26) = v19;
  }
  if ( (v18 & 1) != 0 )
  {
    v19 &= 0xFFFFFCFF;
    HIDWORD(v26) = v19;
  }
  if ( (v18 & 8) != 0 )
  {
    v7 = 0;
    HIDWORD(v26) = v19 & 0xC0FFFFFF;
    v27 = 0;
  }
  if ( wil_details_StagingConfigFeature_HasUniqueState(&v26) )
  {
    *(_DWORD *)(a2 + 12) = v7;
    *(_DWORD *)(a2 + 8) = v20 >> 30;
    *(_BYTE *)(a2 + 4) = HIBYTE(v20) & 0x3F;
    *(_DWORD *)(a2 + 20) = (v20 >> 1) & 1;
    v21 = (v20 >> 12) & 3;
    if ( v21 || (v21 = (v20 >> 10) & 3) != 0 )
    {
      *(_DWORD *)a2 = v21;
    }
    else
    {
      v22 = (v20 >> 8) & 3;
      if ( v22 )
        *(_DWORD *)a2 = v22;
    }
    v16 = 1;
  }
LABEL_30:
  v23 = v5;
  v24 = *(_DWORD **)(a1 + 40);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v24 != a3 )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_35;
    }
    v5 = 1;
  }
LABEL_35:
  result = v16;
  *(_DWORD *)(a2 + 16) = v5;
  return result;
}
