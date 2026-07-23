/*
 * XREFs of wil_details_StagingConfig_QueryFeatureState @ 0x14038D470
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x140621ED0 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     wil_details_StagingConfigFeature_HasUniqueState @ 0x14050890C (wil_details_StagingConfigFeature_HasUniqueState.c)
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r12
  int v5; // r10d
  __int64 v6; // r11
  int v7; // ebx
  __int64 v9; // rdi
  unsigned int v10; // r9d
  int v12; // r14d
  unsigned int i; // esi
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // xmm0_8
  unsigned int v23; // r8d
  int v24; // eax
  int v25; // r8d
  __int64 v26; // [rsp+20h] [rbp-10h] BYREF
  int v27; // [rsp+28h] [rbp-8h]
  int v28; // [rsp+70h] [rbp+40h]

  v28 = a3;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v26 = 0LL;
  v9 = a2;
  v27 = 0;
  v10 = *(unsigned __int16 *)(v4 + 4);
  v12 = 0;
  for ( i = 0; i < v10; ++i )
  {
    a2 = i;
    if ( *(_DWORD *)(v6 + 12LL * i) == a3 )
    {
      if ( a4 && *(_DWORD *)(a1 + 48) )
      {
        if ( (*(_DWORD *)(v6 + 12LL * i + 4) & 1) == 0 )
        {
          v7 = *(_DWORD *)(v6 + 12LL * i + 8);
          v26 = *(_QWORD *)(v6 + 12LL * i);
          v27 = v7;
          goto LABEL_10;
        }
      }
      else
      {
        v21 = *(_DWORD *)(v6 + 12LL * i + 4);
        v12 = 1;
        v22 = *(_QWORD *)(v6 + 12LL * i);
        v7 = *(_DWORD *)(v6 + 12LL * i + 8);
        v27 = v7;
        v26 = v22;
        if ( (v21 & 1) != 0 )
          break;
      }
    }
  }
  v14 = 0;
  if ( v12 )
  {
LABEL_10:
    if ( !a4 || (v18 = 12LL, !*(_DWORD *)(a1 + 48)) )
      v18 = 8LL;
    v19 = *(_DWORD *)(v18 + v4);
    if ( (v19 & 4) != 0 )
    {
      v20 = HIDWORD(v26) & 0xFFFFCFFF;
      HIDWORD(v26) &= 0xFFFFCFFF;
    }
    else
    {
      v20 = HIDWORD(v26);
    }
    if ( (v19 & 2) != 0 )
    {
      v20 = (unsigned int)v20 & 0xFFFFF3FF;
      HIDWORD(v26) = v20;
    }
    if ( (v19 & 1) != 0 )
    {
      v20 = (unsigned int)v20 & 0xFFFFFCFF;
      HIDWORD(v26) = v20;
    }
    if ( (v19 & 8) != 0 )
    {
      v20 = (unsigned int)v20 & 0xC0FFFFFF;
      v7 = 0;
      HIDWORD(v26) = v20;
      v27 = 0;
    }
    if ( (unsigned int)((__int64 (__fastcall *)(__int64 *, __int64, __int64, _QWORD))wil_details_StagingConfigFeature_HasUniqueState)(
                         &v26,
                         a2,
                         v20,
                         0LL) )
    {
      *(_DWORD *)(v9 + 12) = v7;
      *(_DWORD *)(v9 + 8) = v23 >> 30;
      *(_BYTE *)(v9 + 4) = HIBYTE(v23) & 0x3F;
      *(_DWORD *)(v9 + 20) = (v23 >> 1) & 1;
      v24 = (v23 >> 12) & 3;
      if ( v24 || (v24 = (v23 >> 10) & 3) != 0 )
      {
        *(_DWORD *)v9 = v24;
      }
      else
      {
        v25 = (v23 >> 8) & 3;
        if ( v25 )
          *(_DWORD *)v9 = v25;
      }
      v14 = 1;
    }
    a3 = v28;
  }
  v15 = v5;
  v16 = *(_DWORD **)(a1 + 40);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v16 != a3 )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_4;
    }
    v5 = 1;
  }
LABEL_4:
  result = v14;
  *(_DWORD *)(v9 + 16) = v5;
  return result;
}
