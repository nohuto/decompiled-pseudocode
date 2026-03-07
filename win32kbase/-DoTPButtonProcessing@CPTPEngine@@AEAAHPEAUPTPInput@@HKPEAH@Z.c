__int64 __fastcall CPTPEngine::DoTPButtonProcessing(
        struct tagPOINT *this,
        struct PTPInput *a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  LONG *p_y; // r13
  struct tagPOINT v6; // r14
  int v7; // esi
  int v8; // r9d
  LONG x; // edi
  int v10; // r10d
  int v11; // r12d
  BOOL v12; // r8d
  unsigned int v15; // edx
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  LONG v20; // r9d
  LONG v21; // edi
  int v22; // r14d
  int v23; // edi
  unsigned int v24; // esi
  char *v25; // r11
  struct tagPOINT *v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int8 v28; // r10
  __int64 v29; // rcx
  LONG v30; // r9d
  LONG y; // eax
  unsigned int v32; // r9d
  struct tagPOINT v33; // rdi
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // esi
  int v37; // eax
  __int64 v38; // r10
  struct CContactState *v39; // rdx
  __int64 v40; // r11
  LONG v41; // ecx
  unsigned int v42; // eax
  bool v43; // zf
  int v44; // edi
  BOOL v45; // eax
  int v46; // ecx
  struct CContactState *v47; // rdi
  LONG v48; // r9d
  unsigned int v49; // r9d
  int v50; // ecx
  int v51; // r8d
  LONG v52; // eax
  __int64 v53; // r9
  LONG v54; // eax
  struct tagPOINTER_INFO *v55; // r13
  signed int v56; // esi
  int v57; // edi
  struct CContactState *v58; // r14
  LONG v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // r12d
  __int64 v62; // r11
  char *v63; // r15
  int v64; // eax
  struct tagPOINT *v65; // r10
  LONG v66; // r8d
  signed int v67; // r9d
  struct PTPInput *v68; // r15
  LONG v69; // r9d
  LONG *v70; // r12
  LONG v71; // ecx
  LONG v72; // r8d
  unsigned int v73; // eax
  int v74; // esi
  LONG v75; // eax
  LONG v76; // eax
  LONG v77; // ecx
  int v78; // r8d
  int v79; // esi
  int v80; // edi
  int v81; // [rsp+38h] [rbp-81h]
  struct tagPOINT v82; // [rsp+40h] [rbp-79h]
  __int128 v83; // [rsp+48h] [rbp-71h] BYREF
  __int64 v84; // [rsp+58h] [rbp-61h]
  __int128 v85; // [rsp+68h] [rbp-51h] BYREF
  __int64 v86; // [rsp+78h] [rbp-41h]
  LONG *v87; // [rsp+88h] [rbp-31h]
  int v88; // [rsp+90h] [rbp-29h]
  struct tagPOINT *v89; // [rsp+98h] [rbp-21h] BYREF
  struct CContactState *v90[2]; // [rsp+A0h] [rbp-19h]
  __int64 v91; // [rsp+B0h] [rbp-9h]
  char *v92; // [rsp+B8h] [rbp-1h]
  int v93; // [rsp+118h] [rbp+5Fh]
  int *v94; // [rsp+118h] [rbp+5Fh]
  struct tagPOINT v96; // [rsp+120h] [rbp+67h]

  p_y = &this[455].y;
  v6 = *(struct tagPOINT *)a2;
  v7 = 0;
  v82 = *(struct tagPOINT *)a2;
  v8 = 0;
  v93 = 0;
  x = this[455].x;
  v10 = a3;
  v81 = 0;
  v11 = x & 0x10;
  v87 = &this[455].y;
  v88 = v11;
  v12 = v11 != 0;
  *a5 = 0;
  v15 = this[492].x;
  v16 = x & 0xFFFFFFEF;
  v89 = 0LL;
  if ( (v15 & 1) == v12 )
  {
    v87 = &this[455].y;
    goto LABEL_15;
  }
  if ( *p_y == 3 || *p_y == 6 )
  {
    if ( !v11 )
    {
LABEL_5:
      v17 = v15;
      if ( (v15 & 0x200) != 0 )
      {
        v7 = 1;
        v17 = v15 & 0xFFFFFDFF;
      }
      goto LABEL_7;
    }
    v17 = v15 | 0x200;
  }
  else
  {
    v17 = v15;
    if ( !v11 )
      goto LABEL_5;
  }
LABEL_7:
  v18 = v12 | v17 & 0xFFFFFFFE;
  v81 = 1;
  this[492].x = v18;
  v8 = 1;
  if ( v11 )
  {
    CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 0);
    v8 = 1;
    v10 = a3;
    this[468] = v6;
  }
  else
  {
    this[467] = *(struct tagPOINT *)a2;
    if ( (this[33].y & 8) != 0 )
      this[492].x = v18 | 0x4000000;
  }
  *a5 = 1;
LABEL_15:
  if ( *p_y == 3 || *p_y == 6 || v7 )
    return 1LL;
  if ( v10 && v8 && v11 && !v16 )
  {
    this[492].x |= 0x10000u;
    return 1LL;
  }
  v20 = this[492].x;
  if ( (v20 & 0x10000) != 0 )
  {
    if ( v11 )
    {
      if ( v10 )
      {
        if ( !v16
          && *(_QWORD *)a2 - *(_QWORD *)&this[468] < *(_QWORD *)&this[12]
                                                   * (unsigned __int64)(unsigned int)this[23].y
                                                   / 0x3E8 )
        {
          return 1LL;
        }
        v93 = 1;
        v81 = 1;
      }
      else
      {
        v81 = 1;
      }
      this[492].x = v20 & 0xFFFEFFFF;
    }
    else
    {
      this[492].x = v20 & 0xFFFEFFFF;
      if ( !*((_DWORD *)a2 + 10) && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0) )
      {
        *(_OWORD *)v90 = 0LL;
        LODWORD(v90[0]) = 25;
        v91 = 0LL;
        v83 = *(_OWORD *)v90;
        v84 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v83);
        CPTPEngine::SendTimedMouseClick((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, this[56].x);
      }
    }
  }
  v21 = this[492].x;
  v22 = 0;
  v92 = (char *)a2 + 56;
  *(_OWORD *)v90 = 0LL;
  v23 = -__CFSHR__(v21, 15);
  v24 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v25 = (char *)a2 + 68;
    while ( 1 )
    {
      v26 = &this[50 * (unsigned int)(*((_DWORD *)v25 - 2) % this[2].x) + 151];
      if ( (v26->x & 1) != 0 && (*(_DWORD *)v25 & 0x40000) == 0 )
        break;
LABEL_53:
      ++v24;
      v25 += 96;
      if ( v24 >= *((_DWORD *)a2 + 12) )
      {
        v11 = v88;
        p_y = v87;
        goto LABEL_55;
      }
    }
    v27 = (unsigned __int64)v26[9];
    v28 = 0;
    if ( v23 )
    {
      if ( v27 > *(_QWORD *)&this[468] )
      {
        this[492].x &= ~0x4000u;
        goto LABEL_49;
      }
      if ( (v26->y & 4) != 0 )
      {
        if ( (int)((HIDWORD(*(_QWORD *)&v26[2]) - HIDWORD(*(_QWORD *)(v25 + 28)))
                 * (HIDWORD(*(_QWORD *)&v26[2]) - HIDWORD(*(_QWORD *)(v25 + 28)))
                 + (*(_QWORD *)&v26[2] - *(_QWORD *)(v25 + 28)) * (*(_QWORD *)&v26[2] - *(_QWORD *)(v25 + 28))) > (unsigned __int64)(unsigned int)(this[24].x * this[24].x) )
        {
          this[492].x &= ~0x4000u;
          if ( this[454].y == 2 )
          {
            v81 = 1;
            v93 = 1;
          }
          goto LABEL_49;
        }
        goto LABEL_47;
      }
    }
    else
    {
      if ( *(_QWORD *)a2 - v27 < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[23].y / 0x3E8
        && *(_QWORD *)&v26[13] <= v27 )
      {
LABEL_47:
        v28 = 1;
        goto LABEL_49;
      }
      v28 = 0;
    }
LABEL_49:
    v26->y = v26->y & 0xFFFFFFFB | (4 * v28);
    if ( v28 )
    {
      ++v22;
      v29 = 2LL;
      if ( (unsigned __int64)v22 < 2 )
        v29 = v22;
      v90[v29 - 1] = (struct CContactState *)v26;
    }
    goto LABEL_53;
  }
LABEL_55:
  v30 = this[492].x;
  if ( (v30 & 0x4000) == 0 )
    goto LABEL_67;
  if ( !v11 )
  {
    y = this[454].y;
    v32 = v30 & 0xFFFFBFFF;
    this[492].x = v32;
    switch ( y )
    {
      case 2:
        v33 = v82;
        if ( (v32 & 0x8000) != 0 )
        {
          if ( (v32 & 0x10) != 0 )
          {
LABEL_68:
            v36 = v81;
            v37 = v93;
            goto LABEL_69;
          }
          v34 = this[56].x;
          this[488] = v82;
          CPTPEngine::SendTimedMouseClick((CPTPEngine *)this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0, v34);
          v83 = 0LL;
          LODWORD(v83) = 17;
        }
        else
        {
          if ( (v32 & 8) != 0 )
            goto LABEL_68;
          v35 = this[56].x;
          this[488] = v82;
          CPTPEngine::SendTimedMouseClick((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, v35);
          v83 = 0LL;
          LODWORD(v83) = 20;
        }
        v84 = 0LL;
        v85 = v83;
        v86 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v85);
        goto LABEL_68;
      case 3:
        CBasePTPEngine::SendShellOutput(this, 0LL);
        v83 = 0LL;
        LODWORD(v83) = 23;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 1LL);
        v83 = 0LL;
        LODWORD(v83) = 24;
        break;
      default:
        goto LABEL_67;
    }
    v84 = 0LL;
    v85 = v83;
    v86 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v85);
LABEL_67:
    v33 = v82;
    goto LABEL_68;
  }
  if ( *(_QWORD *)a2 - *(_QWORD *)&this[468] < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[23].y / 0x3E8 )
    return 1LL;
  v33 = v82;
  v43 = this[454].y == 2;
  this[492].x = v30 & 0xFFFFBFFF;
  if ( !v43 )
    goto LABEL_68;
  v37 = 1;
  v36 = 1;
  v93 = 1;
LABEL_69:
  if ( !v36 )
    goto LABEL_109;
  if ( !v37 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v38 = 6LL;
    v39 = (struct CContactState *)&this[151];
    v40 = 1LL;
    do
    {
      if ( ((unsigned __int8)*(_DWORD *)v39 & (unsigned __int8)v40) != 0 )
        CPTPEngine::SetContactRestingState((CPTPEngine *)this, v39, v40);
      v39 = (struct CContactState *)((char *)v39 + 400);
      v38 -= v40;
    }
    while ( v38 );
  }
  if ( v11 )
  {
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
    v45 = !a4 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0);
    if ( *((_DWORD *)a2 + 10) || v45 )
    {
      this[492].x |= 0x200u;
      v44 = v93;
      goto LABEL_110;
    }
    v46 = a3;
    v47 = v90[0];
    if ( !a3 && v22 <= 1 )
    {
      if ( (unsigned int)CPTPEngine::IsRCZClick((CPTPEngine *)this, a2, v90[0], &v89) )
      {
        v44 = v93;
        CPTPEngine::SendRightDownFromPhysical(this, a2, v89, v93 != 0 ? 22 : 16);
        goto LABEL_110;
      }
      v46 = 0;
    }
    if ( v22 >= 2 )
    {
      if ( !v93 )
      {
        v48 = this[492].x;
        this[454].y = v22;
        v49 = v48 & 0xFFFF3FFF | 0x4000;
        this[492].x = v49;
        if ( v22 != 2 )
        {
          v44 = 0;
          goto LABEL_110;
        }
        v50 = *((_QWORD *)v47 + 2) - *((_QWORD *)v90[1] + 2);
        v51 = HIDWORD(*((_QWORD *)v47 + 2)) - HIDWORD(*((_QWORD *)v90[1] + 2));
        this[492].x = v49 | ((unsigned int)this[43].x >= (unsigned __int64)(v51 * v51 + v50 * v50) ? 0x8000 : 0);
LABEL_109:
        v44 = v93;
        goto LABEL_110;
      }
      if ( v22 > 2 )
        goto LABEL_109;
    }
    v53 = 18LL;
    if ( v46 )
    {
      v53 = 25LL;
    }
    else if ( v93 )
    {
      v53 = 19LL;
      if ( v22 == 2 )
        v53 = 21LL;
    }
    CPTPEngine::SendLeftDownFromPhysical(this, a2, v89, v53);
    goto LABEL_109;
  }
  v41 = this[492].x;
  if ( (v41 & 0x10) != 0 && (v41 & 0x100) != 0 && (v41 & 0x40) == 0 )
  {
    this[488] = v33;
    CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
    v42 = this[492].x & 0xFFFFFFEF;
  }
  else
  {
    v42 = this[492].x;
    if ( (v41 & 8) != 0 && (v41 & 0x80u) != 0 && (v41 & 0x20) == 0 )
    {
      this[488] = v33;
      CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
      v42 = this[492].x & 0xFFFFFFF7;
    }
  }
  v44 = v93;
  this[492].x = v42 & 0xFFFFFE7F;
  if ( (unsigned int)(*p_y - 4) <= 1 )
    *p_y = 1;
LABEL_110:
  if ( a4 <= 2 )
  {
    if ( !v11 )
      goto LABEL_115;
    v54 = this[492].x;
    if ( (v54 & 8) != 0 || (v54 & 0x10) != 0 )
      goto LABEL_115;
    return 0LL;
  }
  if ( v11 )
    return 0LL;
  v52 = this[492].x;
  if ( (v52 & 2) != 0 || (v52 & 4) != 0 || this[451].y )
    return 0LL;
LABEL_115:
  if ( a3 )
    return 1LL;
  if ( v36 && !v44 )
  {
    if ( *p_y == 2 && !v11 )
      this[492].x |= 0x800000u;
    *a5 = 1;
    return 1LL;
  }
  v55 = 0LL;
  v56 = 0;
  v57 = 0;
  v58 = 0LL;
  a5 = 0LL;
  if ( !v11 )
  {
    v59 = this[492].x;
    if ( (v59 & 2) == 0 && (v59 & 4) == 0 && !this[451].y )
      return 1LL;
  }
  v60 = *((_DWORD *)a2 + 12);
  if ( !v60 )
    return 1LL;
  v61 = this[2].x;
  v62 = v60;
  v63 = v92;
  do
  {
    v64 = *((_DWORD *)v63 + 3);
    v65 = &this[50 * (*((_DWORD *)v63 + 1) % v61)];
    if ( (v64 & 0x40000) == 0 && v64 )
    {
      v66 = v65[151].x;
      if ( (v66 & 0x8000) != 0 )
        goto LABEL_148;
      if ( (v66 & 4) != 0 )
      {
        HIDWORD(v94) = HIDWORD(*((_QWORD *)v63 + 5)) - v65[155].y;
        LODWORD(v94) = *((_QWORD *)v63 + 5) - v65[155].x;
        v67 = abs32((int)v94) + abs32(SHIDWORD(v94));
        if ( v67 >= v56 )
        {
          v58 = (struct CContactState *)&v65[151];
          a5 = v94;
          v56 = v67;
          v55 = (struct tagPOINTER_INFO *)v63;
        }
        if ( (v66 & 0x4000) == 0 )
LABEL_148:
          v57 = 1;
      }
      else if ( (v66 & 0x2000) != 0 )
      {
        v57 = 1;
      }
    }
    v63 += 96;
    --v62;
  }
  while ( v62 );
  v68 = a2;
  if ( v58 )
  {
    v69 = this[451].y;
    v70 = v87;
    if ( v69 )
    {
      if ( *v87 == 1 )
      {
        v71 = this[492].x;
        if ( (v71 & 0x400000) == 0 && (v71 & 0x200000) != 0 )
        {
          this[478] = v82;
          this[492].x = v71 | 0x400000;
        }
      }
    }
    v72 = this[492].x;
    if ( (v72 & 0x200000) == 0
      || *(_QWORD *)&v82 - *(_QWORD *)&this[478] >= *(_QWORD *)&this[12]
                                                  * (unsigned __int64)(unsigned int)this[29].x
                                                  / 0x3E8 )
    {
      v73 = a4;
      v74 = 0;
      if ( *v70 != 5 && (a4 == 2 || (v72 & 2) != 0 || (v72 & 4) != 0) )
      {
        *v70 = 5;
        if ( v69 && !v57 )
          *((_DWORD *)v58 + 36) = 0;
        v83 = 0LL;
        LODWORD(v83) = 8;
        v84 = 0LL;
        v74 = 1;
        v85 = v83;
        v86 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v85);
        v73 = a4;
      }
      if ( *v70 != 4 && v73 == 1 )
      {
        v75 = this[492].x;
        if ( (v75 & 2) == 0 && (v75 & 4) == 0 )
        {
          *v70 = 4;
          *((_DWORD *)v58 + 36) = 0;
          v83 = 0LL;
          LODWORD(v83) = 7;
          v84 = 0LL;
          v85 = v83;
          v86 = 0LL;
          CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v85);
          goto LABEL_174;
        }
      }
      if ( v74 )
      {
LABEL_174:
        this[463].y = 0;
        this[463].x = 0;
        this[464].y = 0;
        this[464].x = 0;
        this[492].x &= ~0x20000000u;
      }
      if ( (this[492].y & 4) != 0 )
      {
        if ( a4 == 1 && (v76 = this[492].x, (v76 & 2) == 0) && (v76 & 4) == 0 || this[451].y && !v57 )
          this[492].x ^= (this[492].x ^ ((unsigned int)CPTPEngine::ApplyElasticDragModeDeltas(
                                                         (CPTPEngine *)this,
                                                         v58,
                                                         v55,
                                                         (struct tagPOINT *)&a5) << 18)) & 0x40000;
      }
      v77 = this[24].y;
      v78 = this[463].y + HIDWORD(a5);
      LODWORD(a5) = this[463].x + (_DWORD)a5;
      HIDWORD(a5) = v78;
      v96.x = 100 * (int)a5 / v77;
      v79 = v96.x - this[464].x;
      v96.y = 100 * v78 / v77;
      v80 = v96.y - this[464].y;
      this[464] = v96;
      this[463] = (struct tagPOINT)a5;
      if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                            (CPTPEngine *)this,
                            v68,
                            (struct tagPOINT)__PAIR64__(v80, v79),
                            v58)
        && (v79 || v80) )
      {
        this[492].x |= 0x20000000u;
        CBasePTPEngine::SendMouseOutput(this, 0LL, __PAIR64__(v80, v79));
      }
    }
  }
  return 1LL;
}
