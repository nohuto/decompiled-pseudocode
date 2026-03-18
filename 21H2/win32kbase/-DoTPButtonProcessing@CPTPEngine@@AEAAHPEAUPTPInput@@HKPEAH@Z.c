/*
 * XREFs of ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01FF558
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01FECF8 (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C0201120 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C02017C4 (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020269C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C020386C (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0203B20 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0203CB4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0203D58 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C0203E50 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203EE0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C0203F40 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C02040F4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0204350 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C02043C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPButtonProcessing(
        struct tagPOINT *this,
        struct PTPInput *a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  LONG x; // edi
  int v6; // esi
  int v8; // r13d
  int v9; // r12d
  unsigned int v11; // ecx
  struct tagPOINT v12; // r14
  BOOL v13; // edx
  unsigned int v14; // edi
  LONG y; // eax
  unsigned int v16; // eax
  LONG v17; // eax
  LONG v19; // r9d
  int v20; // r14d
  int v21; // edi
  unsigned int v22; // esi
  char *v23; // r11
  struct tagPOINT *v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int8 v26; // r10
  __int64 v27; // rcx
  LONG v28; // eax
  unsigned int v29; // r9d
  struct tagPOINT v30; // rdi
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // esi
  struct CContactState *v34; // rdx
  __int64 v35; // r10
  __int64 v36; // r11
  LONG v37; // eax
  unsigned int v38; // ecx
  bool v39; // zf
  unsigned int v40; // ecx
  BOOL v41; // eax
  int v42; // eax
  struct CContactState *v43; // rdi
  LONG v44; // eax
  LONG v45; // r9d
  unsigned int v46; // r9d
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // r9
  LONG v50; // eax
  struct tagPOINTER_INFO *v51; // r13
  signed int v52; // esi
  int v53; // edi
  struct CContactState *v54; // r14
  LONG v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // r12d
  __int64 v58; // r11
  char *v59; // r15
  int v60; // eax
  struct tagPOINT *v61; // r10
  LONG v62; // r8d
  signed int v63; // r9d
  struct PTPInput *v64; // r15
  LONG v65; // r9d
  LONG v66; // ecx
  LONG v67; // r8d
  int v68; // esi
  LONG v69; // eax
  LONG v70; // eax
  LONG v71; // ecx
  int v72; // r8d
  int v73; // esi
  int v74; // edi
  int *v75; // rax
  struct tagPOINT v76; // [rsp+38h] [rbp-71h]
  __int128 v77; // [rsp+48h] [rbp-61h] BYREF
  __int64 v78; // [rsp+58h] [rbp-51h]
  __int128 v79; // [rsp+68h] [rbp-41h] BYREF
  __int64 v80; // [rsp+78h] [rbp-31h]
  int v81; // [rsp+88h] [rbp-21h]
  struct tagPOINT *v82; // [rsp+90h] [rbp-19h] BYREF
  struct CContactState *v83[2]; // [rsp+98h] [rbp-11h]
  __int64 v84; // [rsp+A8h] [rbp-1h]
  char *v85; // [rsp+B0h] [rbp+7h]
  int v86; // [rsp+108h] [rbp+5Fh]
  int *v87; // [rsp+108h] [rbp+5Fh]
  struct tagPOINT v89; // [rsp+110h] [rbp+67h]
  int v90; // [rsp+118h] [rbp+6Fh]

  v90 = a3;
  x = this[455].x;
  v6 = 0;
  v86 = 0;
  v8 = 0;
  v9 = x & 0x10;
  v11 = this[492].x;
  v12 = *(struct tagPOINT *)a2;
  v13 = v9 != 0;
  v82 = 0LL;
  v14 = x & 0xFFFFFFEF;
  v81 = v9;
  v76 = v12;
  *a5 = 0;
  if ( (v11 & 1) != v13 )
  {
    y = this[455].y;
    if ( (y == 3 || y == 6) && v9 )
    {
      v16 = v11 | 0x200;
    }
    else
    {
      v16 = v11;
      if ( !v9 && (v11 & 0x200) != 0 )
      {
        v6 = 1;
        v16 = v11 & 0xFFFFFDFF;
      }
    }
    v8 = 1;
    this[492].x = v13 | v16 & 0xFFFFFFFE;
    if ( v9 )
    {
      CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 0);
      a3 = v90;
      this[468] = v12;
      this[467].x = *((_DWORD *)a2 + 6);
    }
    *a5 = 1;
  }
  v17 = this[455].y;
  if ( v17 == 3 || v17 == 6 || v6 )
    return 1LL;
  if ( a3 && v8 && v9 && !v14 )
  {
    this[492].x |= 0x10000u;
    return 1LL;
  }
  v19 = this[492].x;
  if ( (v19 & 0x10000) != 0 )
  {
    if ( v9 )
    {
      if ( a3 )
      {
        if ( !v14
          && *(_QWORD *)a2 - *(_QWORD *)&this[468] < *(_QWORD *)&this[12]
                                                   * (unsigned __int64)(unsigned int)this[23].y
                                                   / 0x3E8 )
        {
          return 1LL;
        }
        v86 = 1;
      }
      v19 &= ~0x10000u;
      v8 = 1;
      this[492].x = v19;
    }
    else
    {
      this[492].x = v19 & 0xFFFEFFFF;
      if ( !*((_DWORD *)a2 + 10) && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0) )
      {
        *(_OWORD *)v83 = 0LL;
        LODWORD(v83[0]) = 25;
        v84 = 0LL;
        v77 = *(_OWORD *)v83;
        v78 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v77);
        CPTPEngine::SendTimedMouseClick((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, this[56].x);
      }
      v19 = this[492].x;
    }
  }
  v20 = 0;
  v85 = (char *)a2 + 56;
  *(_OWORD *)v83 = 0LL;
  v21 = -__CFSHR__(v19, 15);
  v22 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v23 = (char *)a2 + 68;
    while ( 1 )
    {
      v24 = &this[50 * (unsigned int)(*((_DWORD *)v23 - 2) % this[2].x) + 151];
      if ( (v24->x & 1) != 0 && (*(_DWORD *)v23 & 0x40000) == 0 )
        break;
LABEL_50:
      ++v22;
      v23 += 96;
      if ( v22 >= *((_DWORD *)a2 + 12) )
      {
        v19 = this[492].x;
        v9 = v81;
        goto LABEL_52;
      }
    }
    v25 = (unsigned __int64)v24[9];
    v26 = 0;
    if ( v21 )
    {
      if ( v25 > *(_QWORD *)&this[468] )
      {
        this[492].x &= ~0x4000u;
        goto LABEL_46;
      }
      if ( (v24->y & 4) != 0 )
      {
        if ( (int)((HIDWORD(*(_QWORD *)&v24[2]) - HIDWORD(*(_QWORD *)(v23 + 28)))
                 * (HIDWORD(*(_QWORD *)&v24[2]) - HIDWORD(*(_QWORD *)(v23 + 28)))
                 + (*(_QWORD *)&v24[2] - *(_QWORD *)(v23 + 28)) * (*(_QWORD *)&v24[2] - *(_QWORD *)(v23 + 28))) > (unsigned __int64)(unsigned int)(this[24].x * this[24].x) )
        {
          this[492].x &= ~0x4000u;
          if ( this[454].y == 2 )
          {
            v8 = 1;
            v86 = 1;
          }
          goto LABEL_46;
        }
        goto LABEL_44;
      }
    }
    else
    {
      if ( *(_QWORD *)a2 - v25 < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[23].y / 0x3E8
        && *(_QWORD *)&v24[13] <= v25 )
      {
LABEL_44:
        v26 = 1;
        goto LABEL_46;
      }
      v26 = 0;
    }
LABEL_46:
    v24->y = v24->y & 0xFFFFFFFB | (4 * v26);
    if ( v26 )
    {
      ++v20;
      v27 = 2LL;
      if ( (unsigned __int64)v20 < 2 )
        v27 = v20;
      v83[v27 - 1] = (struct CContactState *)v24;
    }
    goto LABEL_50;
  }
LABEL_52:
  if ( (v19 & 0x4000) == 0 )
    goto LABEL_64;
  if ( !v9 )
  {
    v28 = this[454].y;
    v29 = v19 & 0xFFFFBFFF;
    this[492].x = v29;
    switch ( v28 )
    {
      case 2:
        v30 = v76;
        if ( (v29 & 0x8000) != 0 )
        {
          if ( (v29 & 0x10) != 0 )
          {
LABEL_65:
            v33 = v86;
            goto LABEL_66;
          }
          v31 = this[56].x;
          this[488] = v76;
          CPTPEngine::SendTimedMouseClick((CPTPEngine *)this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0, v31);
          v77 = 0LL;
          LODWORD(v77) = 17;
        }
        else
        {
          if ( (v29 & 8) != 0 )
            goto LABEL_65;
          v32 = this[56].x;
          this[488] = v76;
          CPTPEngine::SendTimedMouseClick((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, v32);
          v77 = 0LL;
          LODWORD(v77) = 20;
        }
        v78 = 0LL;
        v79 = v77;
        v80 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v79);
        goto LABEL_65;
      case 3:
        CBasePTPEngine::SendShellOutput(this, 0LL);
        v77 = 0LL;
        LODWORD(v77) = 23;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 1LL);
        v77 = 0LL;
        LODWORD(v77) = 24;
        break;
      default:
        goto LABEL_64;
    }
    v78 = 0LL;
    v79 = v77;
    v80 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v79);
LABEL_64:
    v30 = v76;
    goto LABEL_65;
  }
  if ( *(_QWORD *)a2 - *(_QWORD *)&this[468] < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[23].y / 0x3E8 )
    return 1LL;
  v30 = v76;
  v39 = this[454].y == 2;
  this[492].x = v19 & 0xFFFFBFFF;
  if ( !v39 )
    goto LABEL_65;
  v8 = 1;
  v33 = 1;
LABEL_66:
  if ( !v8 )
    goto LABEL_103;
  if ( !v33 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v34 = (struct CContactState *)&this[151];
    v35 = 6LL;
    v36 = 1LL;
    do
    {
      if ( ((unsigned __int8)*(_DWORD *)v34 & (unsigned __int8)v36) != 0 )
        CPTPEngine::SetContactRestingState((CPTPEngine *)this, v34, v36);
      v34 = (struct CContactState *)((char *)v34 + 400);
      v35 -= v36;
    }
    while ( v35 );
  }
  if ( !v9 )
  {
    v37 = this[492].x;
    if ( (v37 & 0x10) != 0 && (v37 & 0x100) != 0 && (v37 & 0x40) == 0 )
    {
      this[488] = v30;
      CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
      v38 = this[492].x & 0xFFFFFFEF;
    }
    else
    {
      v38 = this[492].x;
      if ( (v37 & 8) != 0 && (v37 & 0x80u) != 0 && (v37 & 0x20) == 0 )
      {
        this[488] = v30;
        CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
        v38 = this[492].x & 0xFFFFFFF7;
      }
    }
    v40 = v38 & 0xFFFFFE7F;
    this[492].x = v40;
    this[466].y = *((_DWORD *)a2 + 6);
    if ( (this[33].y & 8) != 0 )
      this[492].x = v40 | 0x4000000;
    if ( (unsigned int)(this[455].y - 4) <= 1 )
      this[455].y = 1;
    goto LABEL_103;
  }
  if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    CBasePTPEngine::SendInertiaOutput(this, 3LL);
  v41 = !a4 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0);
  if ( *((_DWORD *)a2 + 10) || v41 )
  {
    this[492].x |= 0x200u;
    goto LABEL_103;
  }
  v42 = v90;
  v43 = v83[0];
  if ( !v90 && v20 <= 1 )
  {
    if ( (unsigned int)CPTPEngine::IsRCZClick((CPTPEngine *)this, a2, v83[0], &v82) )
    {
      CPTPEngine::SendRightDownFromPhysical(this, a2, v82, v33 != 0 ? 22 : 16);
      goto LABEL_103;
    }
    v42 = 0;
  }
  if ( v20 >= 2 )
  {
    if ( !v33 )
    {
      v45 = this[492].x;
      this[454].y = v20;
      v46 = v45 & 0xFFFF3FFF | 0x4000;
      this[492].x = v46;
      if ( v20 == 2 )
      {
        v47 = *((_QWORD *)v43 + 2) - *((_QWORD *)v83[1] + 2);
        v48 = HIDWORD(*((_QWORD *)v43 + 2)) - HIDWORD(*((_QWORD *)v83[1] + 2));
        this[492].x = v46 | ((unsigned int)this[43].x >= (unsigned __int64)(v48 * v48 + v47 * v47) ? 0x8000 : 0);
      }
      goto LABEL_103;
    }
    if ( v20 > 2 )
      goto LABEL_103;
  }
  v49 = 18LL;
  if ( v42 )
  {
    v49 = 25LL;
  }
  else if ( v33 )
  {
    v49 = 19LL;
    if ( v20 == 2 )
      v49 = 21LL;
  }
  CPTPEngine::SendLeftDownFromPhysical(this, a2, v82, v49);
LABEL_103:
  if ( a4 <= 2 )
  {
    if ( !v9 )
      goto LABEL_108;
    v50 = this[492].x;
    if ( (v50 & 8) != 0 || (v50 & 0x10) != 0 )
      goto LABEL_108;
    return 0LL;
  }
  if ( v9 )
    return 0LL;
  v44 = this[492].x;
  if ( (v44 & 2) != 0 || (v44 & 4) != 0 || this[451].y )
    return 0LL;
LABEL_108:
  if ( v90 )
    return 1LL;
  if ( v8 && !v33 )
  {
    if ( this[455].y == 2 && !v9 )
      this[492].x |= 0x800000u;
    *a5 = 1;
    return 1LL;
  }
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  v54 = 0LL;
  a5 = 0LL;
  if ( !v9 )
  {
    v55 = this[492].x;
    if ( (v55 & 2) == 0 && (v55 & 4) == 0 && !this[451].y )
      return 1LL;
  }
  v56 = *((_DWORD *)a2 + 12);
  if ( !v56 )
    return 1LL;
  v57 = this[2].x;
  v58 = v56;
  v59 = v85;
  do
  {
    v60 = *((_DWORD *)v59 + 3);
    v61 = &this[50 * (*((_DWORD *)v59 + 1) % v57)];
    if ( (v60 & 0x40000) == 0 && v60 )
    {
      v62 = v61[151].x;
      if ( (v62 & 0x8000) != 0 )
        goto LABEL_145;
      if ( (v62 & 4) != 0 )
      {
        HIDWORD(v87) = HIDWORD(*((_QWORD *)v59 + 5)) - v61[155].y;
        LODWORD(v87) = *((_QWORD *)v59 + 5) - v61[155].x;
        v63 = abs32((int)v87) + abs32(SHIDWORD(v87));
        if ( v63 >= v52 )
        {
          v54 = (struct CContactState *)&v61[151];
          a5 = v87;
          v52 = v63;
          v51 = (struct tagPOINTER_INFO *)v59;
        }
        if ( (v62 & 0x4000) == 0 )
LABEL_145:
          v53 = 1;
      }
      else if ( (v62 & 0x2000) != 0 )
      {
        v53 = 1;
      }
    }
    v59 += 96;
    --v58;
  }
  while ( v58 );
  v64 = a2;
  if ( v54 )
  {
    v65 = this[451].y;
    if ( v65 )
    {
      if ( this[455].y == 1 )
      {
        v66 = this[492].x;
        if ( (v66 & 0x400000) == 0 && (v66 & 0x200000) != 0 )
        {
          this[478] = v76;
          this[492].x = v66 | 0x400000;
        }
      }
    }
    v67 = this[492].x;
    if ( (v67 & 0x200000) == 0
      || *(_QWORD *)&v76 - *(_QWORD *)&this[478] >= *(_QWORD *)&this[12]
                                                  * (unsigned __int64)(unsigned int)this[29].x
                                                  / 0x3E8 )
    {
      v68 = 0;
      if ( this[455].y != 5 && (a4 == 2 || (v67 & 2) != 0 || (v67 & 4) != 0) )
      {
        this[455].y = 5;
        if ( v65 && !v53 )
          *((_DWORD *)v54 + 36) = 0;
        v77 = 0LL;
        LODWORD(v77) = 8;
        v78 = 0LL;
        v68 = 1;
        v79 = v77;
        v80 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v79);
      }
      if ( this[455].y != 4 && a4 == 1 )
      {
        v69 = this[492].x;
        if ( (v69 & 2) == 0 && (v69 & 4) == 0 )
        {
          this[455].y = 4;
          *((_DWORD *)v54 + 36) = 0;
          v77 = 0LL;
          LODWORD(v77) = 7;
          v78 = 0LL;
          v79 = v77;
          v80 = 0LL;
          CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v79);
          goto LABEL_171;
        }
      }
      if ( v68 )
      {
LABEL_171:
        this[463].y = 0;
        this[463].x = 0;
        this[464].y = 0;
        this[464].x = 0;
        this[492].x &= ~0x20000000u;
      }
      if ( (this[492].y & 4) != 0 )
      {
        if ( a4 == 1 && (v70 = this[492].x, (v70 & 2) == 0) && (v70 & 4) == 0 || this[451].y && !v53 )
          this[492].x ^= (this[492].x ^ ((unsigned int)CPTPEngine::ApplyElasticDragModeDeltas(
                                                         (CPTPEngine *)this,
                                                         v54,
                                                         v51,
                                                         (struct tagPOINT *)&a5) << 18)) & 0x40000;
      }
      v71 = this[24].y;
      v72 = this[463].y + HIDWORD(a5);
      LODWORD(a5) = this[463].x + (_DWORD)a5;
      HIDWORD(a5) = v72;
      v89.x = 100 * (int)a5 / v71;
      v73 = v89.x - this[464].x;
      v89.y = 100 * v72 / v71;
      v74 = v89.y - this[464].y;
      v75 = a5;
      this[464] = v89;
      this[463] = (struct tagPOINT)v75;
      if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                            (CPTPEngine *)this,
                            v64,
                            (struct tagPOINT)__PAIR64__(v74, v73),
                            v54)
        && (v73 || v74) )
      {
        this[492].x |= 0x20000000u;
        CBasePTPEngine::SendMouseOutput(this, 0LL, __PAIR64__(v74, v73));
      }
    }
  }
  return 1LL;
}
