/*
 * XREFs of wil_details_StagingConfig_QueryFeatureState @ 0x180055B74
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x180055070 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     wil_details_StagingConfigFeature_HasUniqueState @ 0x1800555A4 (wil_details_StagingConfigFeature_HasUniqueState.c)
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r15
  int v5; // r10d
  __int64 v6; // r11
  int v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // r14d
  int v13; // eax
  bool v14; // zf
  int v15; // eax
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
  v10 = 0;
  v11 = 0;
  v12 = *(unsigned __int16 *)(v4 + 4);
  if ( !*(_WORD *)(v4 + 4) )
  {
LABEL_9:
    v16 = 0;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_29;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v6 + 12LL * v11) == a3 )
    {
      if ( !a4 || !*(_DWORD *)(a1 + 48) )
      {
        v10 = 1;
        v14 = (*(_BYTE *)(v6 + 12LL * v11 + 4) & 1) == 0;
        v15 = *(_DWORD *)(v6 + 12LL * v11 + 8);
        v26 = *(_QWORD *)(v6 + 12LL * v11);
        v27 = v15;
        if ( !v14 )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( (*(_BYTE *)(v6 + 12LL * v11 + 4) & 1) == 0 )
        break;
    }
LABEL_8:
    if ( ++v11 >= v12 )
      goto LABEL_9;
  }
  v13 = *(_DWORD *)(v6 + 12LL * v11 + 8);
  v26 = *(_QWORD *)(v6 + 12LL * v11);
  v27 = v13;
LABEL_10:
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
    v27 = 0;
    HIDWORD(v26) = v19 & 0xC0FFFFFF;
  }
  if ( wil_details_StagingConfigFeature_HasUniqueState(&v26) )
  {
    *(_DWORD *)(a2 + 12) = v27;
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
LABEL_29:
  v23 = v5;
  v24 = *(_DWORD **)(a1 + 40);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v24 != a3 )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_34;
    }
    v5 = 1;
  }
LABEL_34:
  result = v16;
  *(_DWORD *)(a2 + 16) = v5;
  return result;
}
