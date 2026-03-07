void __fastcall CPTPEngine::DoTPMouseProcessing(__int64 a1, __int64 *a2, int a3, int a4)
{
  int v6; // r11d
  __int64 v7; // r14
  unsigned int v8; // r12d
  __int64 *v9; // r10
  int v10; // r9d
  int v11; // ebx
  unsigned int v12; // edx
  _DWORD *v13; // rax
  __int64 v14; // r13
  bool v15; // r8
  bool v16; // r15
  int v17; // eax
  int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // rcx
  char v21; // r11
  int v22; // eax
  char v23; // r8
  int v24; // ecx
  _DWORD *v25; // rdx
  __int64 *v26; // r8
  int v27; // eax
  __int64 *v28; // r15
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // edx
  int v38; // eax
  __int64 v39; // r13
  int v40; // r9d
  __int64 v41; // rax
  int v42; // ebx
  int v43; // r9d
  unsigned int v44; // r15d
  _DWORD *v45; // r10
  __int64 *v46; // r14
  unsigned int v47; // r11d
  unsigned int v48; // r12d
  __int64 *v49; // rax
  _DWORD *v50; // r10
  bool v51; // zf
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  LONG x; // r14d
  int y; // r15d
  struct tagPOINT v57; // rbx
  int v58; // [rsp+38h] [rbp-59h]
  int v59; // [rsp+3Ch] [rbp-55h]
  __int64 *v60; // [rsp+40h] [rbp-51h]
  __int64 *v61; // [rsp+48h] [rbp-49h]
  _DWORD *v62; // [rsp+50h] [rbp-41h]
  __int64 *v63; // [rsp+58h] [rbp-39h]
  __int64 v64; // [rsp+60h] [rbp-31h]
  __int128 v65; // [rsp+68h] [rbp-29h]
  __int128 v66; // [rsp+68h] [rbp-29h]
  __int128 v67; // [rsp+68h] [rbp-29h]
  int v68; // [rsp+80h] [rbp-11h] BYREF
  unsigned int v69; // [rsp+84h] [rbp-Dh]
  int v70; // [rsp+88h] [rbp-9h]
  int v71; // [rsp+8Ch] [rbp-5h]
  __int64 *v72; // [rsp+90h] [rbp-1h]
  __int128 v73; // [rsp+98h] [rbp+7h] BYREF
  __int64 v74; // [rsp+A8h] [rbp+17h]
  int v75; // [rsp+100h] [rbp+6Fh]
  struct tagPOINT v76; // [rsp+100h] [rbp+6Fh]
  int v77; // [rsp+104h] [rbp+73h]

  v61 = 0LL;
  v59 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 0;
  v6 = a4;
  v7 = *a2;
  v75 = 0;
  v64 = *a2;
  v72 = a2 + 7;
  v63 = a2 + 7;
  v60 = 0LL;
  v62 = 0LL;
  v58 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  v8 = 2;
  v9 = a2 + 7;
  do
  {
    v10 = *((_DWORD *)v9 + 3);
    if ( !v10 )
      goto LABEL_48;
    v11 = *(_DWORD *)(a1 + 3644);
    v12 = *((_DWORD *)v9 + 1) % *(_DWORD *)(a1 + 16);
    v13 = (_DWORD *)(a1 + 3608);
    v14 = 400LL * v12 + a1 + 1208;
    v15 = v11 == 2 && *v13 == v12;
    v16 = v6 == 2 && *v13 == v12;
    if ( (v10 & 0x40000) == 0
      && (*(_DWORD *)v14 & 4) != 0
      && (*(_DWORD *)(v14 + 4) & 2) != 0
      && (v15 || v11 != 2)
      && ((*(_DWORD *)v14 & 0x80u) == 0 || a3 == 1 || v15) )
    {
      v17 = *(_DWORD *)(a1 + 3936);
      if ( (v17 & 2) == 0 && (v17 & 4) == 0 )
      {
        v18 = *(_DWORD *)(a1 + 3936);
        if ( v11 != 2 && (v17 & 0x400000) == 0 && (v17 & 0x200000) != 0 )
        {
          v18 = v17 | 0x400000;
          *(_QWORD *)(a1 + 3824) = v7;
          *(_DWORD *)(a1 + 3936) = v17 | 0x400000;
        }
        v19 = *(_QWORD *)(a1 + 96);
        if ( (v18 & 0x200000) != 0 )
        {
          v20 = *(_QWORD *)(a1 + 96);
          if ( v7 - *(_QWORD *)(a1 + 3824) < v19 * (unsigned __int64)*(unsigned int *)(a1 + 232) / 0x3E8 )
          {
            v21 = 0;
LABEL_31:
            v22 = v18;
            if ( v11 != 2 && (v18 & 0x8000000) == 0 && (v18 & 0x4000000) != 0 )
            {
              v22 = v18 | 0x8000000;
              *(_QWORD *)(a1 + 3840) = v7;
              *(_DWORD *)(a1 + 3936) = v18 | 0x8000000;
            }
            if ( (v22 & 0x4000000) != 0 )
            {
              if ( v7 - *(_QWORD *)(a1 + 3840) < v19 * (unsigned __int64)*(unsigned int *)(a1 + 412) / 0x3E8 )
              {
                v23 = 0;
                goto LABEL_39;
              }
              v20 = v19;
            }
            v23 = 1;
            v19 = v20;
LABEL_39:
            if ( v21 && v23 && v7 - *(_QWORD *)(v14 + 80) >= v19 * (unsigned __int64)*(unsigned int *)(a1 + 548) / 0x3E8 )
            {
              v68 = 0;
              if ( (unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(
                                   (CPTPEngine *)a1,
                                   (struct PTPInput *)a2,
                                   (struct CContactState *)v14,
                                   &v68) )
              {
                v9 = v63;
                v24 = 1;
                v6 = a4;
                v25 = (_DWORD *)v14;
                v58 = 1;
                v26 = v63;
                v61 = v63;
                v62 = (_DWORD *)v14;
LABEL_49:
                v27 = v75;
                v28 = v60;
                goto LABEL_50;
              }
              if ( v68 )
              {
                CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
                *(_DWORD *)(a1 + 3644) = 1;
              }
            }
            goto LABEL_47;
          }
        }
        else
        {
          v20 = *(_QWORD *)(a1 + 96);
        }
        v21 = 1;
        goto LABEL_31;
      }
    }
    v29 = *(_DWORD *)(a1 + 3936);
    if ( (v29 & 0x100000) != 0
      || v11 == 2
      || (v10 & 0x48000) != 0x40000
      || (v30 = *(_DWORD *)v14, (*(_DWORD *)v14 & 0x20) == 0)
      || (v30 & 0x10) != 0
      || (v30 & 0x1000000) != 0 && (v30 & 4) != 0 && (!v16 || (v29 & 0x20000000) != 0)
      || (v30 & 0x40000000) == 0
      || (v30 & 8) != 0 && (!v16 || (v29 & 0x20000000) != 0) )
    {
      if ( (v10 & 0x48000) != 0x40000 || (*(_DWORD *)(a1 + 268) & 0x100) == 0 )
        goto LABEL_48;
      v31 = *(_QWORD *)(v14 + 112);
      if ( v31 == *(_QWORD *)(v14 + 72) )
        goto LABEL_48;
      v32 = *(_QWORD *)(a1 + 96);
      v33 = v64 - v31;
      if ( v64 - v31 >= v32 * *(unsigned int *)(a1 + 316) / 0x3E8 )
      {
        v7 = v64;
        goto LABEL_48;
      }
      if ( !CPTPEngine::CrossedTPMoveFilteringThreshold(
              (CPTPEngine *)a1,
              (struct CContactState *)v14,
              *(struct tagPOINT *)(v14 + 8))
        && v16
        && (*((_DWORD *)a2 + 7) != *(_DWORD *)(v14 + 64) || *((_DWORD *)a2 + 8) != *(_DWORD *)(v14 + 68)) )
      {
        CBasePTPEngine::SendWarpbackTelemetry(
          a1,
          14LL,
          *(__int64 *)((char *)a2 + 28),
          *(_QWORD *)(v14 + 64),
          1000 * v33 / v32);
        CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v14 + 64));
      }
      v7 = v64;
LABEL_47:
      v6 = a4;
      v9 = v63;
LABEL_48:
      v24 = v58;
      v26 = v61;
      v25 = v62;
      goto LABEL_49;
    }
    v24 = v58;
    v27 = 1;
    v26 = v61;
    v28 = v9;
    v25 = v62;
    v75 = 1;
    v60 = v9;
LABEL_50:
    v9 += 12;
    v63 = v9;
    ++v69;
  }
  while ( v69 < *((_DWORD *)a2 + 12) );
  if ( v24 )
  {
    if ( v27 && ((*v25 & 0x80u) != 0 || (*v25 & 0x10) == 0) )
      goto LABEL_81;
    v35 = *((_DWORD *)v26 + 1);
    v36 = v26[5];
    v37 = v35 % *(_DWORD *)(a1 + 16);
    v77 = HIDWORD(v36);
    v38 = *(_DWORD *)(a1 + 3936);
    v39 = 400LL * v37 + a1 + 1208;
    if ( (v38 & 0x8000000) != 0 )
    {
      v38 &= 0xF3FFFFFF;
      *(_DWORD *)(a1 + 3936) = v38;
    }
    if ( *(_DWORD *)(a1 + 3644) != 2 )
    {
      *(_DWORD *)(a1 + 3644) = 2;
      v40 = 1;
      *(_DWORD *)(a1 + 3936) = v38 & 0xFF9FFFFF;
      v41 = a1 + 1208;
      *(_DWORD *)(a1 + 3608) = v37;
      v59 = 1;
      while ( v41 != a1 + 3608 )
      {
        *(_QWORD *)(v41 + 104) = 0LL;
        *(_DWORD *)v41 &= ~0x10000u;
        v41 += 400LL;
      }
      *(_DWORD *)v39 |= 0x10000u;
      *(_QWORD *)(v39 + 104) = v7;
      if ( a3 != 2 )
      {
LABEL_131:
        v52 = *(_DWORD *)(a1 + 3936);
        if ( (v52 & 0x800000) != 0 )
        {
          v40 = 1;
          *(_DWORD *)(a1 + 3936) = v52 & 0xFF7FFFFF;
        }
        else
        {
          if ( !v40 )
          {
            v53 = v36 - *(_DWORD *)(a1 + 3688);
            v70 = v77 - *(_DWORD *)(a1 + 3692);
            goto LABEL_137;
          }
          HIDWORD(v66) = 0;
          *(_DWORD *)(a1 + 3936) = v52 & 0xDFFFFFFF;
          *(_QWORD *)((char *)&v66 + 4) = v64 - *(_QWORD *)(v39 + 72);
          LODWORD(v66) = 1;
          v74 = 0LL;
          v73 = v66;
          CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v73);
          v40 = v59;
        }
        *(_QWORD *)(a1 + 3688) = *(_QWORD *)(v39 + 8);
        *(_DWORD *)v39 &= ~0x4000000u;
        v53 = v71;
LABEL_137:
        v54 = *(_DWORD *)(a1 + 196);
        v76.x = 100 * v53 / v54;
        x = v76.x;
        v76.y = 100 * v70 / v54;
        y = v76.y;
        v57 = v76;
        if ( !v40 )
        {
          x = v76.x - *(_DWORD *)(a1 + 3696);
          y = v76.y - *(_DWORD *)(a1 + 3700);
          v57 = (struct tagPOINT)__PAIR64__(y, x);
        }
        *(struct tagPOINT *)(a1 + 3696) = v76;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                              (CPTPEngine *)a1,
                              (struct PTPInput *)a2,
                              v57,
                              (struct CContactState *)v39)
          && (x || y) )
        {
          if ( (*(_DWORD *)(a1 + 3936) & 0x20000000) == 0 )
          {
            v67 = 0LL;
            LODWORD(v67) = 10;
            v73 = v67;
            v74 = 0LL;
            CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v73);
          }
          *(_DWORD *)(a1 + 3936) |= 0x20000000u;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(a1, 0LL, v57);
        }
        return;
      }
      v42 = -(*(_DWORD *)(a1 + 3940) & 1);
      v43 = (int)(*(_DWORD *)(a1 + 3940) << 30) >> 31;
      if ( (*(_DWORD *)(a1 + 3940) & 1) != 0 || (*(_DWORD *)(a1 + 3940) & 2) != 0 )
      {
        v44 = *((_DWORD *)a2 + 12);
        v45 = 0LL;
        v46 = 0LL;
        v47 = 0;
        if ( v44 )
        {
          v48 = *(_DWORD *)(a1 + 16);
          v49 = a2 + 7;
          while ( 1 )
          {
            v45 = (_DWORD *)(400LL * (*((_DWORD *)v49 + 1) % v48) + a1 + 1208);
            if ( (*v45 & 1) != 0 && v45 != (_DWORD *)v39 )
              break;
            ++v47;
            v49 = v72 + 12;
            v72 += 12;
            if ( v47 >= v44 )
              goto LABEL_120;
          }
          v46 = v72;
LABEL_120:
          v8 = 2;
        }
        if ( (v45[1] & 8) != 0 )
        {
          if ( v43 && PtInRect((_DWORD *)(a1 + 124), v46[5]) )
          {
            v8 = 8;
            v51 = (*(_DWORD *)(a1 + 3936) & 0x10) == 0;
            goto LABEL_128;
          }
          if ( v42 && PtInRect((_DWORD *)(a1 + 108), v46[5]) )
          {
            v51 = (*(_DWORD *)(a1 + 3936) & 8) == 0;
LABEL_128:
            if ( v51 )
            {
              *v50 |= 0x8000u;
              CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)a1, v8, *(struct tagPOINT *)((char *)a2 + 28));
              return;
            }
          }
        }
      }
    }
    v40 = v59;
    goto LABEL_131;
  }
  if ( !v27 )
    return;
LABEL_81:
  v34 = 400LL * (unsigned int)(*((_DWORD *)v28 + 1) % *(_DWORD *)(a1 + 16)) + a1 + 1208;
  if ( *(_QWORD *)(a1 + 3736) <= *(_QWORD *)(v34 + 72)
    && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)a1, (struct PTPInput *)a2, 0xAu, 1)
    && !(unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)a1, (struct PTPInput *)a2, 0)
    && !CPTPEngine::FindNearbyContact(
          (CPTPEngine *)a1,
          (struct PTPInput *)a2,
          (struct CContactState *)v34,
          (struct tagPOINT)v28[5],
          *(_DWORD *)(a1 + 444))
    && (*(_DWORD *)(a1 + 464) & 0x200) != 0 )
  {
    *(_QWORD *)(a1 + 3672) = *(__int64 *)((char *)a2 + 28);
    *(_QWORD *)(a1 + 3680) = *(_QWORD *)(v34 + 16);
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
      CBasePTPEngine::SendInertiaOutput(a1, 3LL);
    if ( !*((_DWORD *)a2 + 10) )
    {
      v65 = 0LL;
      LODWORD(v65) = 1;
      v73 = v65;
      v74 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v73);
      HIDWORD(v65) = 0;
      LODWORD(v65) = 0;
      *(_QWORD *)((char *)&v65 + 4) = v7 - *(_QWORD *)(v34 + 80);
      v74 = 0LL;
      v73 = v65;
      CBasePTPEngine::SendTelemetryOutput(a1, 5LL, &v73);
      *(_QWORD *)(a1 + 3904) = v7;
      CPTPEngine::SendMouseUpIfPending((CPTPEngine *)a1, (unsigned int *)(a1 + 3612));
      if ( (*(_DWORD *)(a1 + 3940) & 2) != 0 && PtInRect((_DWORD *)(a1 + 124), v28[5]) )
      {
        v8 = 8;
        if ( (*(_DWORD *)(a1 + 3936) & 0x10) != 0 )
          return;
      }
      else if ( (*(_DWORD *)(a1 + 3936) & 8) != 0 )
      {
        return;
      }
      if ( (*(_DWORD *)v34 & 4) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 268) & 0x400) != 0
          && !*(_DWORD *)(a1 + 3628)
          && (*(_DWORD *)(v34 + 64) != *((_DWORD *)a2 + 7) || *(_DWORD *)(v34 + 68) != *((_DWORD *)a2 + 8)) )
        {
          CBasePTPEngine::SendWarpbackTelemetry(
            a1,
            15LL,
            *(__int64 *)((char *)a2 + 28),
            *(_QWORD *)(v34 + 64),
            (unsigned __int64)(1000 * (v7 - *(_QWORD *)(v34 + 80))) / *(_QWORD *)(a1 + 96));
          CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v34 + 64));
        }
        CPTPEngine::SendTimedMouseClick(
          (CPTPEngine *)a1,
          v8,
          *(struct tagPOINT *)(v34 + 64),
          -__CFSHR__(*(_DWORD *)(a1 + 472), 3),
          *(_DWORD *)(a1 + 236));
        *(_DWORD *)v34 &= ~4u;
      }
      else
      {
        CPTPEngine::SendTimedMouseClick(
          (CPTPEngine *)a1,
          v8,
          *(struct tagPOINT *)((char *)a2 + 28),
          -__CFSHR__(*(_DWORD *)(a1 + 472), 3),
          *(_DWORD *)(a1 + 236));
      }
      CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
    }
  }
}
