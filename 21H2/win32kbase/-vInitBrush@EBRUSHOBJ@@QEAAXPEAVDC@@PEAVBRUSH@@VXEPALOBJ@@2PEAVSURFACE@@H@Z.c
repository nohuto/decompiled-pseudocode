/*
 * XREFs of ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C007FCA0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C0063A6C (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     rgbFromColorref @ 0x1C00800B0 (rgbFromColorref.c)
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C00800F4 (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00802E0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0098430 (ulGetNearestIndexFromColorref.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C0168EE0 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall EBRUSHOBJ::vInitBrush(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 v10; // r9
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // r11d
  __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  unsigned int v18; // r10d
  void *v19; // r13
  unsigned int v20; // eax
  __int64 result; // rax
  int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // r8d
  int v26; // r13d
  __int64 v27; // rdi
  volatile signed __int32 *v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // eax
  int v31; // r8d
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // r15d
  int v35; // edx
  volatile signed __int32 *v36; // rcx
  int MatchingIndexFromColorref; // eax
  unsigned int v38; // r13d
  int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // edi
  bool v44; // zf
  volatile signed __int32 *v45; // rcx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  _DWORD *v48; // rcx
  int v49; // edx
  unsigned int v50; // eax
  int NearestIndexFromColorref; // eax
  int v52; // edi
  int v53; // eax
  __int64 v54; // r8
  unsigned int v55; // [rsp+20h] [rbp-48h]
  int v56; // [rsp+70h] [rbp+8h]
  unsigned int v58; // [rsp+80h] [rbp+18h]

  v7 = a5;
  v10 = a2;
  if ( !a5 || (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v12 = *(_QWORD *)(a5 + 120);
    if ( v12 == a5 )
      v13 = *(_DWORD *)(a5 + 32);
    else
      v13 = *(_DWORD *)(v12 + 32);
  }
  v14 = a7;
  *((_QWORD *)a1 + 10) = a6;
  v15 = *(_QWORD *)(a2 + 976);
  v16 = *(_DWORD *)(a2 + 120);
  v17 = *(_DWORD *)(v15 + 184);
  v18 = *(_DWORD *)(v15 + 176);
  v19 = *(void **)(v15 + 248);
  v55 = v17;
  v58 = v18;
  if ( *(_DWORD *)(a3 + 44) == a1[31] )
  {
    v20 = a1[30];
    if ( ((v20 & 1) == 0 || a1[12] == v17) && ((v20 & 2) == 0 || a1[13] == v18) )
    {
      result = *(_QWORD *)(a4 + 120);
      v22 = result == a4 ? *(_DWORD *)(a4 + 32) : *(_DWORD *)(result + 32);
      if ( a3 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && v22 == a1[11]
        && v13 == a1[10]
        && (struct _LIST_ENTRY *)a3 != WPP_MAIN_CB.Queue.ListEntry.Blink
        && a1[18] == v16
        && *((void **)a1 + 8) == v19
        && v14 == a1[32] )
      {
        return result;
      }
    }
  }
  v23 = *(_DWORD *)(a3 + 40);
  a1[30] = v23;
  *((_QWORD *)a1 + 14) = a3;
  a1[31] = *(_DWORD *)(a3 + 44);
  a1[12] = v17;
  a1[13] = v18;
  v24 = *(_QWORD *)(a4 + 120);
  if ( v24 == a4 )
    v25 = *(_DWORD *)(a4 + 32);
  else
    v25 = *(_DWORD *)(v24 + 32);
  v56 = 0;
  a1[4] = 0;
  a1[11] = v25;
  a1[10] = v13;
  a1[32] = v14;
  if ( (v16 & 7) == 0 )
    goto LABEL_20;
  v43 = 0;
  if ( (v23 & 0x20030) == 0 )
  {
    if ( (v23 & 0x80u) == 0 )
      goto LABEL_96;
    if ( (v16 & 1) == 0 || !v19 )
      goto LABEL_95;
    v44 = BRUSH::hFindIcmDIB((BRUSH *)a3, v19) == 0LL;
    goto LABEL_94;
  }
  if ( (v16 & 1) == 0
    || (v23 & 0x20010) != 0
    && ((v23 & 3) != 0
     || a3 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
     || (struct _LIST_ENTRY *)a3 == WPP_MAIN_CB.Queue.ListEntry.Blink) )
  {
    goto LABEL_95;
  }
  if ( (*(_DWORD *)(a3 + 40) & 0x400) == 0 )
  {
    if ( !v19 )
      goto LABEL_95;
    v44 = (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 152LL) & 0x40000) == 0;
LABEL_94:
    if ( v44 )
      goto LABEL_96;
    goto LABEL_95;
  }
  if ( v19 )
  {
    v44 = (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 152LL) & 0x80000) == 0;
    goto LABEL_94;
  }
LABEL_95:
  v43 = 1;
LABEL_96:
  if ( !v43 )
  {
LABEL_20:
    a1[18] = 0;
    *((_QWORD *)a1 + 8) = 0LL;
    v26 = 0;
    goto LABEL_21;
  }
  a1[18] = v16;
  *((_QWORD *)a1 + 8) = v19;
  if ( (v16 & 5) != 0 )
  {
    a1[4] |= 2u;
  }
  else if ( (v16 & 2) != 0 )
  {
    a1[4] |= 1u;
  }
  if ( (v16 & 1) != 0 && v19 && (v16 & 0x10000000) != 0 && (a1[30] & 0x10) != 0 )
  {
    a1[4] |= 4u;
    v26 = 1;
    v56 = 1;
  }
  else
  {
    v26 = 0;
    v56 = 0;
  }
LABEL_21:
  v27 = *(_QWORD *)(a6 + 48);
  if ( !v27 )
    v27 = *(_QWORD *)(a2 + 48);
  *((_QWORD *)a1 + 12) = a4;
  *((_QWORD *)a1 + 11) = v7;
  *((_QWORD *)a1 + 13) = *(_QWORD *)(v27 + 1776);
  v28 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
  a1[19] = *(_DWORD *)(v27 + 2076);
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v28, 1LL);
    *((_QWORD *)a1 + 4) = 0LL;
    v7 = a5;
  }
  v29 = *((_QWORD *)a1 + 1);
  if ( v29 )
  {
    v45 = (volatile signed __int32 *)(v29 - 16);
    if ( _InterlockedExchangeAdd(v45, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v45, 0LL);
    *((_QWORD *)a1 + 1) = 0LL;
    v7 = a5;
  }
  v30 = a1[30];
  v31 = v30 & 0x10;
  if ( (v30 & 0x10) != 0 )
  {
    if ( (v30 & 1) != 0 )
    {
      a1[6] = a1[12];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_31;
      v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 188LL);
    }
    else if ( (v30 & 2) != 0 )
    {
      a1[6] = a1[13];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_31;
      v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 180LL);
    }
    else if ( a3 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v42 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 192LL);
      if ( (v42 & 1) == 0 )
        goto LABEL_31;
      v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 196LL);
    }
    else
    {
      if ( (struct _LIST_ENTRY *)a3 != WPP_MAIN_CB.Queue.ListEntry.Blink )
        goto LABEL_30;
      v47 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 200LL);
      if ( (v47 & 1) == 0 )
        goto LABEL_31;
      v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 204LL);
    }
    a1[33] = v46;
    goto LABEL_31;
  }
  if ( (v30 & 0x20) == 0 )
    goto LABEL_31;
LABEL_30:
  v32 = a1[18];
  v33 = *(_DWORD *)(a3 + 76);
  a1[6] = v33;
  if ( (v32 & 1) == 0 )
    goto LABEL_31;
  a1[33] = v33;
  v48 = *(_DWORD **)(a2 + 976);
  v49 = v48[38];
  if ( (*(_DWORD *)(a3 + 40) & 0x400) != 0 )
  {
    if ( (v49 & 0x80000) == 0 )
      goto LABEL_31;
    v50 = v48[65];
  }
  else
  {
    if ( (v49 & 0x40000) == 0 )
      goto LABEL_31;
    v50 = v48[64];
  }
  a1[6] = v50;
LABEL_31:
  result = *(unsigned int *)(a3 + 100);
  v34 = -1;
  if ( (_DWORD)result != -1 )
  {
    v35 = *(_DWORD *)(a3 + 40);
    if ( (v35 & 1) == 0 || (_DWORD)result == v55 )
    {
      if ( (v35 & 2) == 0 || (result = v58, *(_DWORD *)(a3 + 104) == v58) )
      {
        result = (unsigned int)a1[11];
        if ( *(_DWORD *)(a3 + 108) == (_DWORD)result )
        {
          result = (unsigned int)a1[10];
          if ( *(_DWORD *)(a3 + 112) == (_DWORD)result
            && *(_QWORD *)(a3 + 128) == v27
            && a3 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
            && (struct _LIST_ENTRY *)a3 != WPP_MAIN_CB.Queue.ListEntry.Blink )
          {
            if ( v35 < 0 )
            {
              v34 = *(_DWORD *)(a3 + 120);
            }
            else
            {
              v36 = *(volatile signed __int32 **)(a3 + 120);
              if ( (v35 & 0x40000000) != 0 )
              {
                *((_QWORD *)a1 + 4) = v36;
              }
              else
              {
                result = (__int64)(v36 + 4);
                *((_QWORD *)a1 + 1) = v36 + 4;
              }
              _InterlockedAdd(v36, 1u);
            }
            *a1 = v34;
            v34 = *(_DWORD *)(a3 + 116);
            goto LABEL_73;
          }
        }
      }
    }
  }
  if ( !v31 )
  {
    *a1 = -1;
LABEL_73:
    a1[7] = v34;
    return result;
  }
  if ( v26 )
  {
    result = (unsigned int)a1[6];
    v39 = result;
    *a1 = result;
    v38 = result;
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(v27 + 1792) & 0x800000) == 0 || (v40 = a7) == 0 )
  {
    MatchingIndexFromColorref = ulGetMatchingIndexFromColorref(v7, a4, (unsigned int)a1[6], v10);
    v38 = a1[6];
    *a1 = MatchingIndexFromColorref;
    result = rgbFromColorref(v7, a4, v38);
    v39 = *a1;
LABEL_49:
    v40 = a7;
    goto LABEL_50;
  }
  result = (unsigned int)a1[6];
  v39 = -1;
  v38 = a1[6];
  *a1 = -1;
LABEL_50:
  a1[7] = result;
  if ( v39 == -1 && !v56 )
  {
    if ( ((a1[30] & 4) != 0 || (*(_DWORD *)(v27 + 1792) & 0x800000) != 0) && v40 )
    {
      if ( (!v7 || v7 == *(_QWORD *)(v27 + 1776)) && (result = *(unsigned int *)(v27 + 1792), (result & 0x20) != 0)
        || (result = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a5), (_DWORD)result) && (*(_DWORD *)(v27 + 1792) & 0x400) != 0 )
      {
        a1[7] = v38;
        return result;
      }
    }
    if ( *(_DWORD *)(a6 + 96) == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v7, a4, v58);
      *a1 = NearestIndexFromColorref;
      v52 = NearestIndexFromColorref;
      result = rgbFromColorref(v7, a4, v58);
      a1[7] = result;
      if ( v58 != a1[6] )
      {
        *a1 = 1 - v52;
        result = *(_QWORD *)(v7 + 112);
        a1[7] = *(_DWORD *)(result + 4LL * (unsigned int)(1 - v52));
      }
    }
    else
    {
      v53 = ulGetNearestIndexFromColorref(v7, a4, v38);
      v54 = (unsigned int)a1[6];
      *a1 = v53;
      result = rgbFromColorref(v7, a4, v54);
      a1[7] = result;
    }
  }
  if ( !*(_DWORD *)(a3 + 96) && !_InterlockedExchange((volatile __int32 *)(a3 + 96), 1) )
  {
    *(_DWORD *)(a3 + 104) = a1[13];
    *(_DWORD *)(a3 + 108) = a1[11];
    *(_DWORD *)(a3 + 112) = a1[10];
    *(_QWORD *)(a3 + 120) = (unsigned int)*a1;
    v41 = a1[7];
    *(_DWORD *)(a3 + 40) |= 0x80000000;
    *(_DWORD *)(a3 + 116) = v41;
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a3 + 100), a1[12]);
  }
  return result;
}
