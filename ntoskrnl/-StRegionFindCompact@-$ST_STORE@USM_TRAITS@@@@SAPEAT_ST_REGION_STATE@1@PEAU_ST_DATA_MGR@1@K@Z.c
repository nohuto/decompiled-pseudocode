/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14045D640
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x1405C5A20 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1405BE93C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

unsigned __int16 *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned int v3; // edx
  __int64 v4; // r10
  unsigned int v5; // r14d
  __int64 v6; // r8
  __int64 v7; // r13
  unsigned __int16 *v8; // rbx
  unsigned __int16 *v9; // r12
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r15
  _DWORD *v13; // r11
  unsigned __int64 v14; // rsi
  int v15; // edx
  _DWORD *i; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned int v22; // ebp
  unsigned __int16 *v23; // r11
  int v24; // esi
  int IsRegionBusy; // eax
  int v26; // eax
  unsigned __int64 v27; // rbp
  unsigned int v28; // edi
  unsigned __int16 *v29; // r9
  int v30; // esi
  unsigned __int16 *v31; // rax
  unsigned int v32; // r11d
  int v33; // eax
  unsigned __int16 *result; // rax
  int v35; // ecx
  _DWORD v36[18]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6568LL) )
  {
    v6 = 0LL;
    v5 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 1092);
    v6 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v7 = *(unsigned int *)(a1 + 856);
  v8 = (unsigned __int16 *)v36;
  v9 = *(unsigned __int16 **)(a1 + 1032);
  LOWORD(v36[0]) = (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1) & 0x1FFF;
  if ( *(_DWORD *)(a1 + 1088) && (_DWORD)v6 )
  {
    v10 = *(_DWORD *)(a1 + 1072);
    LODWORD(v11) = 0;
LABEL_7:
    while ( v10 > (unsigned int)v11 )
    {
      v12 = *(_QWORD *)(v4 + 1080);
      v6 = 0LL;
      v13 = (_DWORD *)(v12 + 4 * ((unsigned __int64)(unsigned int)v11 >> 5));
      v14 = v12 + 4 * ((unsigned __int64)(v10 - 1) >> 5);
      v15 = ((1 << (v11 & 0x1F)) - 1) | *v13;
      for ( i = v13 + 1; ; ++i )
      {
        v17 = ~v15;
        if ( v17 )
          break;
        if ( (unsigned __int64)i > v14 )
          goto LABEL_13;
        v15 = *++v13;
      }
      _BitScanForward64((unsigned __int64 *)&v18, v17);
      v11 = (unsigned int)v18 + 32 * (unsigned int)(((__int64)v13 - v12) >> 2);
      if ( (unsigned int)v11 > v10 )
      {
LABEL_13:
        v11 = v10;
        goto LABEL_23;
      }
      v19 = ~(((1 << v18) - 1) | v17);
      while ( !v19 )
      {
        if ( (unsigned __int64)(v13 + 1) > v14 )
        {
          LODWORD(v20) = 32;
          goto LABEL_20;
        }
        v19 = v13[1];
        ++v13;
      }
      _BitScanForward64((unsigned __int64 *)&v20, v19);
LABEL_20:
      v21 = v20 + 32 * (((__int64)v13 - v12) >> 2);
      if ( v21 > v10 )
        v21 = v10;
      v6 = v21 - (unsigned int)v11;
LABEL_23:
      v2 = a2;
      v3 = 0;
      if ( !(_DWORD)v6 )
        break;
      v22 = v11 + v6;
      v23 = &v9[(unsigned int)v11];
      if ( (unsigned int)v11 < (int)v11 + (int)v6 )
      {
        v24 = *(_DWORD *)(v4 + 776);
        while ( 1 )
        {
          if ( (v24 & 0x40000) != 0
            && (IsRegionBusy = SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(
                                 *(_QWORD *)(v4 + 800),
                                 (unsigned int)v11,
                                 v6,
                                 v11,
                                 v36[0]),
                v3 = 0,
                IsRegionBusy) )
          {
            v2 = a2;
          }
          else
          {
            if ( (_BYTE)v24 )
              v26 = 0;
            else
              v26 = *v23 >> 13;
            v2 = a2;
            if ( v26 == a2 )
            {
              v8 = v23;
              goto LABEL_53;
            }
          }
          v11 = (unsigned int)(v11 + 1);
          ++v23;
          if ( (unsigned int)v11 >= v22 )
            goto LABEL_7;
        }
      }
    }
  }
  v27 = (unsigned __int64)&v9[v7];
  v28 = 0;
  v29 = &v9[v5];
  if ( !(_DWORD)v7 )
    return 0LL;
  v30 = *(_DWORD *)(v4 + 776);
  do
  {
    v31 = v29;
    if ( (unsigned __int64)v29 >= v27 )
      v29 = v9;
    v32 = (unsigned __int64)v31 < v27 ? v5 : 0;
    if ( (v30 & 0x40000) == 0
      || (v33 = SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(v4 + 800), v32, v6, v29, v36[0]), v3 = 0, !v33) )
    {
      if ( !(_BYTE)v30 )
        v3 = *v29 >> 13;
      v6 = *v29;
      if ( (unsigned __int16)(v6 & 0x1FFF) >= (unsigned __int16)(*v8 & 0x1FFF) )
        goto LABEL_50;
      LOWORD(v6) = v6 & 0x1FFF;
      if ( v3 != v2 )
      {
        if ( !(_WORD)v6 && v29 != &v9[*(unsigned int *)(v4 + 16 * (v3 + 78LL))] )
        {
          v8 = v29;
          goto LABEL_53;
        }
LABEL_50:
        v3 = 0;
        goto LABEL_51;
      }
      v3 = 0;
      v8 = v29;
      if ( !(_WORD)v6 )
        goto LABEL_53;
    }
LABEL_51:
    ++v29;
    v5 = v32 + 1;
    ++v28;
  }
  while ( v28 < (unsigned int)v7 );
  if ( v8 == (unsigned __int16 *)v36 )
    return 0LL;
LABEL_53:
  result = v8;
  v35 = v8 - v9 + 1;
  if ( v35 == (_DWORD)v7 )
    v35 = 0;
  *(_DWORD *)(v4 + 1092) = v35;
  return result;
}
