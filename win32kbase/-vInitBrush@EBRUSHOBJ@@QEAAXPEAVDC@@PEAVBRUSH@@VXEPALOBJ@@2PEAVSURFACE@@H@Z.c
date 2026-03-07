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
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  void *v18; // r12
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // eax
  int v23; // r12d
  __int64 v24; // rdi
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // r8d
  unsigned int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // r15d
  int v33; // edx
  _DWORD *v34; // r12
  __int64 result; // rax
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // eax
  int *v41; // r14
  volatile signed __int32 *v42; // rcx
  int v43; // edi
  bool v44; // zf
  volatile signed __int32 *v45; // rcx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // eax
  _DWORD *v49; // rcx
  int v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  int NearestIndexFromColorref; // eax
  int v55; // edi
  int v56; // eax
  __int64 v57; // r8
  unsigned int v58; // [rsp+20h] [rbp-48h]
  __int64 v59; // [rsp+28h] [rbp-40h]
  int v60; // [rsp+70h] [rbp+8h]
  unsigned int v62; // [rsp+78h] [rbp+10h]
  unsigned int v63; // [rsp+80h] [rbp+18h]

  v7 = a5;
  if ( !a5 || (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
  {
    v12 = 1;
  }
  else
  {
    v11 = *(_QWORD *)(a5 + 120);
    if ( v11 == a5 )
      v12 = *(_DWORD *)(a5 + 32);
    else
      v12 = *(_DWORD *)(v11 + 32);
  }
  v13 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  *((_QWORD *)a1 + 10) = a6;
  v14 = *(_QWORD *)(a2 + 976);
  v15 = *(_DWORD *)(a2 + 120);
  v59 = v13;
  v16 = *(_DWORD *)(v14 + 184);
  v17 = *(_DWORD *)(v14 + 176);
  v18 = *(void **)(v14 + 248);
  v58 = v16;
  v63 = v17;
  if ( *(_DWORD *)(a3 + 44) != a1[31]
    || (v36 = a1[30], (v36 & 1) != 0) && a1[12] != v16
    || (v36 & 2) != 0 && a1[13] != v17 )
  {
    v19 = a7;
    goto LABEL_7;
  }
  result = *(_QWORD *)(a4 + 120);
  if ( result == a4 )
    v37 = *(_DWORD *)(a4 + 32);
  else
    v37 = *(_DWORD *)(result + 32);
  v19 = a7;
  if ( v37 != a1[11]
    || v12 != a1[10]
    || a3 == *(_QWORD *)(v13 + 272)
    || a3 == *(_QWORD *)(v13 + 288)
    || a1[18] != v15
    || *((void **)a1 + 8) != v18
    || a7 != a1[32] )
  {
LABEL_7:
    v20 = *(_DWORD *)(a3 + 40);
    a1[30] = v20;
    *((_QWORD *)a1 + 14) = a3;
    a1[31] = *(_DWORD *)(a3 + 44);
    a1[12] = v16;
    a1[13] = v17;
    v21 = *(_QWORD *)(a4 + 120);
    if ( v21 == a4 )
      v22 = *(_DWORD *)(a4 + 32);
    else
      v22 = *(_DWORD *)(v21 + 32);
    v60 = 0;
    a1[4] = 0;
    a1[11] = v22;
    a1[10] = v12;
    a1[32] = v19;
    if ( (v15 & 7) == 0 )
      goto LABEL_10;
    v43 = 0;
    if ( (v20 & 0x20030) != 0 )
    {
      if ( (v15 & 1) == 0
        || (v20 & 0x20010) != 0 && ((v20 & 3) != 0 || a3 == *(_QWORD *)(v13 + 272) || a3 == *(_QWORD *)(v13 + 288)) )
      {
        goto LABEL_101;
      }
      if ( (*(_DWORD *)(a3 + 40) & 0x400) != 0 )
      {
        if ( v18 )
        {
          v44 = (*(_DWORD *)(*(_QWORD *)(a2 + 976) + 152LL) & 0x80000) == 0;
          goto LABEL_100;
        }
LABEL_101:
        v43 = 1;
LABEL_102:
        if ( v43 )
        {
          a1[18] = v15;
          *((_QWORD *)a1 + 8) = v18;
          if ( (v15 & 5) != 0 )
          {
            a1[4] |= 2u;
          }
          else if ( (v15 & 2) != 0 )
          {
            a1[4] |= 1u;
          }
          if ( (v15 & 1) != 0 && v18 && (v15 & 0x10000000) != 0 && (a1[30] & 0x10) != 0 )
          {
            a1[4] |= 4u;
            v23 = 1;
            v60 = 1;
          }
          else
          {
            v23 = 0;
            v60 = 0;
          }
LABEL_11:
          v24 = *(_QWORD *)(a6 + 48);
          if ( !v24 )
            v24 = *(_QWORD *)(a2 + 48);
          *((_QWORD *)a1 + 12) = a4;
          *((_QWORD *)a1 + 11) = v7;
          *((_QWORD *)a1 + 13) = *(_QWORD *)(v24 + 1776);
          v25 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
          a1[19] = *(_DWORD *)(v24 + 2076);
          if ( v25 )
          {
            if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v25, 1LL);
            *((_QWORD *)a1 + 4) = 0LL;
            v7 = a5;
          }
          v26 = *((_QWORD *)a1 + 1);
          if ( v26 )
          {
            v45 = (volatile signed __int32 *)(v26 - 16);
            if ( _InterlockedExchangeAdd(v45, 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v45, 0LL);
            *((_QWORD *)a1 + 1) = 0LL;
            v7 = a5;
          }
          v27 = a1[30];
          v28 = v27 & 0x10;
          if ( (v27 & 0x10) != 0 )
          {
            if ( (v27 & 1) != 0 )
            {
              a1[6] = a1[12];
              if ( (a1[18] & 1) == 0 )
                goto LABEL_21;
              v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 188LL);
            }
            else if ( (v27 & 2) != 0 )
            {
              a1[6] = a1[13];
              if ( (a1[18] & 1) == 0 )
                goto LABEL_21;
              v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 180LL);
            }
            else if ( a3 == *(_QWORD *)(v59 + 272) )
            {
              v38 = a1[18];
              a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 192LL);
              if ( (v38 & 1) == 0 )
                goto LABEL_21;
              v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 196LL);
            }
            else
            {
              if ( a3 != *(_QWORD *)(v59 + 288) )
                goto LABEL_20;
              v47 = a1[18];
              a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 200LL);
              if ( (v47 & 1) == 0 )
                goto LABEL_21;
              v46 = *(_DWORD *)(*(_QWORD *)(a2 + 976) + 204LL);
            }
            a1[33] = v46;
            goto LABEL_21;
          }
          if ( (v27 & 0x20) == 0 )
            goto LABEL_21;
LABEL_20:
          v29 = a1[18];
          v30 = *(_DWORD *)(a3 + 76);
          a1[6] = v30;
          if ( (v29 & 1) == 0 )
            goto LABEL_21;
          a1[33] = v30;
          v49 = *(_DWORD **)(a2 + 976);
          v50 = v49[38];
          if ( (*(_DWORD *)(a3 + 40) & 0x400) != 0 )
          {
            if ( (v50 & 0x80000) == 0 )
              goto LABEL_21;
            v48 = v49[65];
          }
          else
          {
            if ( (v50 & 0x40000) == 0 )
              goto LABEL_21;
            v48 = v49[64];
          }
          a1[6] = v48;
LABEL_21:
          v31 = *(_DWORD *)(a3 + 100);
          v32 = -1;
          if ( v31 != -1 )
          {
            v33 = *(_DWORD *)(a3 + 40);
            if ( ((v33 & 1) == 0 || v31 == v58)
              && ((v33 & 2) == 0 || *(_DWORD *)(a3 + 104) == v63)
              && *(_DWORD *)(a3 + 108) == a1[11]
              && *(_DWORD *)(a3 + 112) == a1[10]
              && *(_QWORD *)(a3 + 128) == v24
              && a3 != *(_QWORD *)(v59 + 272)
              && a3 != *(_QWORD *)(v59 + 288) )
            {
              if ( v33 < 0 )
              {
                v32 = *(_DWORD *)(a3 + 120);
              }
              else
              {
                v42 = *(volatile signed __int32 **)(a3 + 120);
                if ( (v33 & 0x40000000) != 0 )
                  *((_QWORD *)a1 + 4) = v42;
                else
                  *((_QWORD *)a1 + 1) = v42 + 4;
                _InterlockedAdd(v42, 1u);
              }
              *a1 = v32;
              v32 = *(_DWORD *)(a3 + 116);
              goto LABEL_68;
            }
          }
          if ( !v28 )
          {
            *a1 = -1;
LABEL_68:
            result = 28LL;
            v41 = a1 + 7;
LABEL_69:
            *v41 = v32;
            return result;
          }
          v44 = v23 == 0;
          v34 = (_DWORD *)(v24 + 1792);
          if ( v44 )
          {
            if ( (*v34 & 0x800000) != 0 )
            {
              v51 = a7;
              if ( a7 )
              {
                a1[7] = a1[6];
                *a1 = -1;
                goto LABEL_136;
              }
            }
            *a1 = ulGetMatchingIndexFromColorref(v7, a4, (unsigned int)a1[6], v59);
            v62 = a1[6];
            if ( (v62 & 0x1000000) != 0 )
            {
              v39 = *(_DWORD *)(*(_QWORD *)(a4 + 112)
                              + 4LL
                              * ((unsigned __int16)v62 & (unsigned int)-((unsigned int)(unsigned __int16)v62 < *(_DWORD *)(a4 + 28))));
              v62 = v39;
              if ( HIBYTE(v39) == 2 )
              {
                if ( v7 )
                {
                  v52 = *(_DWORD *)(v7 + 28);
                  if ( v52 )
                  {
                    v53 = (unsigned __int8)v39;
                    if ( (unsigned __int8)v39 >= v52 )
                      v53 = (unsigned __int8)v39 % v52;
                    v62 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 4LL * v53);
                  }
                }
              }
            }
            HIBYTE(v62) = 0;
            result = v62;
          }
          else
          {
            result = (unsigned int)a1[6];
            *a1 = result;
          }
          a1[7] = result;
          if ( *a1 != -1 || v60 )
          {
LABEL_33:
            if ( !*(_DWORD *)(a3 + 96) && !_InterlockedExchange((volatile __int32 *)(a3 + 96), 1) )
            {
              *(_DWORD *)(a3 + 104) = a1[13];
              *(_DWORD *)(a3 + 108) = a1[11];
              *(_DWORD *)(a3 + 112) = a1[10];
              *(_QWORD *)(a3 + 120) = (unsigned int)*a1;
              v40 = a1[7];
              *(_DWORD *)(a3 + 40) |= 0x80000000;
              *(_DWORD *)(a3 + 116) = v40;
              return (unsigned int)_InterlockedExchange((volatile __int32 *)(a3 + 100), a1[12]);
            }
            return result;
          }
          v51 = a7;
LABEL_136:
          if ( ((a1[30] & 4) != 0 || (*v34 & 0x800000) != 0) && v51 )
          {
            if ( (!v7 || v7 == *(_QWORD *)(v24 + 1776)) && (result = (unsigned int)*v34, (result & 0x20) != 0)
              || (result = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a5), (_DWORD)result) && (*v34 & 0x400) != 0 )
            {
              v32 = a1[6];
              v41 = a1 + 7;
              goto LABEL_69;
            }
          }
          if ( *(_DWORD *)(a6 + 96) == 1 )
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v7, a4, v63);
            *a1 = NearestIndexFromColorref;
            v55 = NearestIndexFromColorref;
            result = rgbFromColorref(v7, a4, v63);
            a1[7] = result;
            if ( v63 != a1[6] )
            {
              *a1 = 1 - v55;
              result = *(_QWORD *)(v7 + 112);
              a1[7] = *(_DWORD *)(result + 4LL * (unsigned int)(1 - v55));
            }
          }
          else
          {
            v56 = ulGetNearestIndexFromColorref(v7, a4, (unsigned int)a1[6]);
            v57 = (unsigned int)a1[6];
            *a1 = v56;
            result = rgbFromColorref(v7, a4, v57);
            a1[7] = result;
          }
          goto LABEL_33;
        }
LABEL_10:
        a1[18] = 0;
        *((_QWORD *)a1 + 8) = 0LL;
        v23 = 0;
        goto LABEL_11;
      }
      if ( !v18 )
        goto LABEL_101;
      v44 = (*(_DWORD *)(*(_QWORD *)(a2 + 976) + 152LL) & 0x40000) == 0;
    }
    else
    {
      if ( (v20 & 0x80u) == 0 )
        goto LABEL_102;
      if ( (v15 & 1) == 0 || !v18 )
        goto LABEL_101;
      v44 = BRUSH::hFindIcmDIB((BRUSH *)a3, v18) == 0LL;
    }
LABEL_100:
    if ( v44 )
      goto LABEL_102;
    goto LABEL_101;
  }
  return result;
}
