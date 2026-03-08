/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C00F5900 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C00F5884 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C00F5918 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C0235328 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C0235680 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0235884 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C02365FC (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0236AD8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C02376F4 (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C023783C (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0237B1C (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C0237D28 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0237E84 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0238700 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238A3C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0239C08 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C023A068 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C023A204 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C023A428 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C023A63C (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1C023A6B4 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C023ACE0 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::RunStateMachine(struct tagPOINT *this, struct PTPInput *a2)
{
  int v2; // r13d
  int v3; // esi
  int v4; // r15d
  int v5; // r12d
  int v6; // edi
  int v9; // eax
  LONG x; // eax
  unsigned int i; // edx
  LONG v12; // eax
  int y; // ecx
  struct tagPOINT v14; // rax
  unsigned __int64 v15; // rax
  LONG v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  char *v19; // r13
  int v20; // edx
  struct tagPOINT *v21; // rsi
  unsigned int v22; // ecx
  unsigned int v23; // r15d
  int v24; // r12d
  unsigned int v25; // eax
  char *v26; // r13
  unsigned int v27; // r10d
  char *v28; // r8
  __int64 v29; // rdx
  LONG v30; // r9d
  LONG v31; // ecx
  unsigned int *p_y; // r12
  LONG v33; // eax
  int v34; // r8d
  int v35; // eax
  int GestureAndMarkGesturingContactsAsNonResting; // r10d
  int v37; // r9d
  __int64 v38; // rax
  int v39; // eax
  LONG *v40; // r9
  __int64 v41; // r10
  int v42; // esi
  unsigned int v43; // r9d
  __int64 v44; // r15
  int v45; // ecx
  int v46; // r8d
  char v47; // cl
  CPTPEngine *j; // rax
  int v49; // edx
  unsigned int v50; // r15d
  int v51; // r8d
  unsigned int v52; // edx
  struct tagPOINT *v53; // rsi
  int v54; // eax
  unsigned int v55; // ecx
  struct CContactState *v56; // rdx
  __int64 v57; // r10
  LONG v58; // eax
  LONG v59; // r13d
  unsigned int v60; // r13d
  unsigned int v61; // esi
  unsigned int v62; // r11d
  struct tagPOINT *v63; // r9
  __int64 v64; // r12
  struct tagPOINT *v65; // r10
  __int64 v66; // r15
  LONG v67; // edx
  bool v68; // cl
  bool v69; // al
  unsigned __int64 v70; // r8
  LONG v71; // eax
  LONG v72; // eax
  __int64 v73; // r15
  LONG v74; // edx
  BOOL v75; // r12d
  int v76; // r13d
  BOOL v77; // esi
  LONG v78; // r8d
  LONG v79; // ecx
  int v80; // eax
  char v81; // r9
  char v82; // r15
  LONG v83; // ecx
  int v84; // edx
  int v85; // esi
  bool v86; // zf
  unsigned int v87; // r9d
  char *v88; // rcx
  __int64 v89; // r8
  unsigned int v90; // edx
  int v91; // ecx
  int v92; // edx
  unsigned int k; // edx
  __int64 v94; // rcx
  struct tagPOINT *v95; // rsi
  signed int v96; // r10d
  unsigned int v97; // [rsp+30h] [rbp-D0h]
  int v98; // [rsp+34h] [rbp-CCh]
  int v99; // [rsp+38h] [rbp-C8h]
  int v100; // [rsp+3Ch] [rbp-C4h]
  int v101; // [rsp+40h] [rbp-C0h]
  unsigned int v102; // [rsp+44h] [rbp-BCh]
  int v103; // [rsp+48h] [rbp-B8h]
  unsigned int v104; // [rsp+4Ch] [rbp-B4h]
  int v105; // [rsp+50h] [rbp-B0h]
  __int128 v106; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v107; // [rsp+70h] [rbp-90h]
  unsigned int v108; // [rsp+80h] [rbp-80h]
  int v109; // [rsp+84h] [rbp-7Ch] BYREF
  int v110; // [rsp+88h] [rbp-78h]
  int v111; // [rsp+8Ch] [rbp-74h] BYREF
  int v112; // [rsp+90h] [rbp-70h] BYREF
  int v113; // [rsp+94h] [rbp-6Ch] BYREF
  int v114; // [rsp+98h] [rbp-68h]
  int v115; // [rsp+9Ch] [rbp-64h] BYREF
  __int128 v116; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v117; // [rsp+B0h] [rbp-50h]
  int v118; // [rsp+C0h] [rbp-40h]
  int v119; // [rsp+C4h] [rbp-3Ch]
  int v120; // [rsp+C8h] [rbp-38h]
  unsigned int v121; // [rsp+D0h] [rbp-30h]
  struct CContactState *v122; // [rsp+D8h] [rbp-28h]
  __int64 v123; // [rsp+F0h] [rbp-10h]
  __int128 v124; // [rsp+100h] [rbp+0h] BYREF
  __int64 v125; // [rsp+110h] [rbp+10h]
  _OWORD v126[2]; // [rsp+120h] [rbp+20h]
  __int64 v127; // [rsp+148h] [rbp+48h]

  v2 = *((_DWORD *)a2 + 9);
  v122 = 0LL;
  v3 = 0;
  v114 = 0;
  v4 = 0;
  v97 = 0;
  v5 = 0;
  v6 = 1;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v109 = 0;
  v115 = 0;
  v101 = 0;
  v102 = 0;
  v100 = 0;
  v99 = 0;
  v103 = 0;
  v9 = *((_DWORD *)a2 + 17) & 0x70;
  v110 = v2;
  this[455].x = v9;
  CPTPEngine::HandleButtonSuppressionAndPendingUps((CPTPEngine *)this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v116 = 0LL;
    v107 = 0LL;
    v117 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, &v116);
  }
  x = this[492].x;
  if ( (x & 1) == 0 && (x & 2) == 0 && (x & 4) == 0 )
  {
    for ( i = 0; i < 6; ++i )
    {
      v12 = this[50 * i + 151].x;
      if ( (v12 & 1) != 0 && (v12 & 0x80u) == 0 )
        goto LABEL_23;
    }
    if ( *((_DWORD *)a2 + 12) != this[453].x + this[454].x )
    {
      CBasePTPEngine::SendInertiaOutput(this, 0LL);
      if ( *((_DWORD *)a2 + 10) )
        this[492].x &= 0xFEFFDFFF;
      if ( this[2].y )
        y = this[57].y;
      else
        y = 0;
      v14 = this[483];
      if ( *(_QWORD *)&v14 && *((_QWORD *)a2 + 1) > *(unsigned __int64 *)&v14 && y > 0 )
        CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 1);
      this[483] = *(struct tagPOINT *)a2;
      v15 = *((_QWORD *)a2 + 2);
      if ( v15 > *((_QWORD *)a2 + 1) )
      {
        v116 = v15;
        v117 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v116);
      }
    }
  }
LABEL_23:
  v16 = this[455].x;
  v119 = v16 & 0x10;
  v118 = v119 != 0;
  v105 = v16 & 0x40;
  v120 = v16 & 0x20;
  v17 = this[492].x & 0xFFFBFFFF;
  v121 = (this[492].x & 0x40000u) >> 18;
  v18 = this[455].y;
  v98 = v18;
  this[492].x = v17;
  if ( v2 )
    goto LABEL_197;
  this[454].x = 0;
  v19 = (char *)a2 + 56;
  v108 = 0;
  v20 = v18;
  if ( *((_DWORD *)a2 + 12) )
  {
    do
    {
      v104 = *((_DWORD *)v19 + 1) % this[2].x;
      v21 = &this[50 * v104 + 151];
      v22 = v21->x;
      if ( (v21->x & 1) != 0 && ((v22 & 0x20000000) == 0 || (*((_DWORD *)v19 + 3) & 0x60000) == 0) )
      {
        v127 = 0LL;
        v116 = 0LL;
        v117 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v116);
        v22 = v21->x & 0xDFFFFFFE;
        v21->x = v22;
      }
      if ( (v22 & 0x20000000) == 0 )
      {
        v103 = 1;
        v21->x = v22 | 0x20000000;
        v21[10] = *(struct tagPOINT *)(v19 + 80);
        v21[3] = *(struct tagPOINT *)(v19 + 40);
        v21[19].x = *((_DWORD *)v19 + 1);
      }
      v23 = 0;
      *(_OWORD *)&v21[38].x = *(_OWORD *)v19;
      *(_OWORD *)&v21[40].x = *((_OWORD *)v19 + 1);
      *(_OWORD *)&v21[42].x = *((_OWORD *)v19 + 2);
      *(_OWORD *)&v21[44].x = *((_OWORD *)v19 + 3);
      *(_OWORD *)&v21[46].x = *((_OWORD *)v19 + 4);
      *(_OWORD *)&v21[48].x = *((_OWORD *)v19 + 5);
      v24 = *((_DWORD *)v19 + 3);
      *((_DWORD *)v19 + 3) = v24 & 0xFFFFFF8F;
      if ( (v21->x & 1) == 0 )
      {
        v23 = ((v24 & 0xFFFFFF8F) >> 23) & 4;
        if ( !PtInRect(&this[6], *((_QWORD *)v19 + 5))
          && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0) )
        {
          v23 |= 2u;
        }
        if ( (this[33].y & 2) != 0
          && !PtInRect(&this[486], *((_QWORD *)v19 + 5))
          && (*(_QWORD *)a2 - *(_QWORD *)&v21[10] >= *(_QWORD *)&this[12]
                                                   * (unsigned __int64)(unsigned int)this[28].y
                                                   / 0x3E8
           || *((_DWORD *)a2 + 12) == 1
           || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(
                               (CPTPEngine *)this,
                               a2,
                               (struct CContactState *)v21)) )
        {
          v23 |= 1u;
        }
        if ( v23 || (v24 & 0x40000) != 0 )
          *((_DWORD *)v19 + 3) = 0;
      }
      v21[37].y = v23;
      if ( *((_DWORD *)v19 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          (CPTPEngine *)this,
          a2,
          (struct CContactState *)v21,
          (struct PTPEnginePointerNode *)v19,
          &v109);
        if ( (v21->x & 2) != 0 )
        {
          ++v101;
          *(_OWORD *)((char *)v126 + 8) = 0LL;
          v102 = v104;
          *(_QWORD *)&v126[0] = *(_QWORD *)a2;
          v99 = 1;
          v106 = v126[0];
          v107 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)((char *)v126 + 8), *(__m128d *)((char *)v126 + 8));
          CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v106);
        }
        else if ( this[455].y != 1 )
        {
          v21->y &= ~8u;
        }
        if ( (*((_DWORD *)v19 + 3) & 0x40000) == 0 )
          ++v97;
      }
      else if ( (v24 & 0x2000006) != 0 )
      {
        ++this[454].x;
      }
      else
      {
        v25 = v21->x;
        if ( (v21->x & 1) != 0 )
        {
          v123 = 0LL;
          v124 = 0LL;
          v125 = 0LL;
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v124);
          v25 = v21->x & 0xFFFFFFFE;
        }
        v21->x = v25 & 0xDFFFFFFF;
      }
      v19 += 96;
      ++v108;
    }
    while ( v108 < *((_DWORD *)a2 + 12) );
    v20 = this[455].y;
    v18 = v20;
    v3 = v109;
    v4 = v101;
    v5 = v99;
  }
  this[453].x = 0;
  v26 = (char *)a2 + 56;
  v27 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v28 = (char *)a2 + 68;
    do
    {
      v29 = 50LL * (unsigned int)(*((_DWORD *)v28 - 2) % this[2].x);
      v30 = this[v29 + 151].x;
      if ( (v30 & 1) != 0 )
      {
        v31 = this[v29 + 151].x;
        if ( (*(_DWORD *)v28 & 0x40000) == 0 && (v30 & 0x80u) != 0 )
        {
          ++this[453].x;
          v31 = this[v29 + 151].x;
        }
        if ( v5 )
        {
          this[v29 + 157] = *(struct tagPOINT *)(v28 + 28);
          this[v29 + 167] = *(struct tagPOINT *)a2;
          this[v29 + 168].x = *((_DWORD *)a2 + 6);
          this[v29 + 151].x = v31 & 0xFFF7FFFF;
        }
      }
      v28 += 96;
      ++v27;
    }
    while ( v27 < *((_DWORD *)a2 + 12) );
    v20 = this[455].y;
    v18 = v20;
  }
  p_y = (unsigned int *)&this[451].y;
  this[453].y = v97 - this[453].x;
  v33 = this[451].y;
  if ( !v33 || v18 == 1 )
  {
    v34 = 0;
    if ( !v33 )
      v18 = v20;
  }
  else
  {
    v34 = 1;
  }
  v35 = v18;
  if ( v97 < 2 || v18 == 3 || this[455].x || v34 )
  {
    v37 = v18;
    if ( v97 < 2 )
      goto LABEL_86;
    GestureAndMarkGesturingContactsAsNonResting = 0;
  }
  else
  {
    GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (CPTPEngine *)this,
                                                    a2);
    v100 = GestureAndMarkGesturingContactsAsNonResting;
    v35 = this[455].y;
    v37 = v35;
  }
  v18 = v35;
  if ( v35 == 2 )
  {
    v38 = (unsigned int)this[451].x;
    if ( (this[50 * v38 + 151].x & 0x4000000) != 0
      || *(_QWORD *)a2 - *(_QWORD *)&this[50 * v38 + 164] < *(_QWORD *)&this[12]
                                                          * (unsigned __int64)(unsigned int)this[49].y
                                                          / 0x3E8 )
    {
      v39 = v99;
      v18 = 2;
      if ( !v99 )
        goto LABEL_87;
      this[455].y = 1;
      CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
      v18 = this[455].y;
    }
    else
    {
      v18 = v37;
      v100 = GestureAndMarkGesturingContactsAsNonResting;
    }
  }
LABEL_86:
  v39 = v99;
LABEL_87:
  if ( (v103 || v39) && v18 == 1 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v40 = &this[151].y;
    v41 = 6LL;
    do
    {
      if ( (*(v40 - 1) & 1) != 0
        && *(_QWORD *)a2 - *(_QWORD *)(v40 + 17) >= *(_QWORD *)&this[12]
                                                  * (unsigned __int64)(unsigned int)this[28].x
                                                  / 0x3E8 )
      {
        *v40 &= ~1u;
      }
      v40 += 100;
      --v41;
    }
    while ( v41 );
    p_y = (unsigned int *)&this[451].y;
    v4 = v101;
  }
  if ( v3 && *((_DWORD *)a2 + 12) == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  v42 = 0;
  if ( !this[489].x || !v4 )
    goto LABEL_112;
  if ( v4 == 1 && this[489].y )
  {
    v43 = v102;
    v44 = v102;
    v45 = *(_QWORD *)&this[460] - *(_QWORD *)&this[50 * v102 + 153];
    v46 = HIDWORD(*(_QWORD *)&this[460]) - HIDWORD(*(_QWORD *)&this[50 * v102 + 153]);
    if ( v46 * v46 + v45 * v45 <= (unsigned __int64)(unsigned int)(this[30].x * this[30].x) )
    {
      v42 = 1;
      goto LABEL_107;
    }
  }
  else
  {
    v43 = v102;
  }
  v44 = v43;
LABEL_107:
  if ( this[490].x && !v42 )
    this[492].x &= ~8u;
  CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, v42 ^ 1);
  if ( v42 )
  {
    *p_y = this[490].x;
    this[490].x = 0;
    this[50 * v44 + 151].x |= 0x4000u;
  }
LABEL_112:
  if ( this[455].y == 1 && *p_y && this[453].y > 1u )
    CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, p_y);
  if ( this[489].x )
  {
    v47 = 0;
    for ( j = (CPTPEngine *)&this[151]; j != (CPTPEngine *)&this[451]; j = (CPTPEngine *)((char *)j + 400) )
    {
      v49 = *(_DWORD *)j;
      if ( (*(_DWORD *)j & 1) != 0 && (v49 & 0x80u) != 0 && (v49 & 4) != 0 )
        v47 = 1;
    }
    if ( this[453].y || v47 )
      CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, 1);
  }
  if ( this[453].y > 2u )
    this[492].x |= 0x100000u;
  v50 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    while ( 1 )
    {
      v51 = *((_DWORD *)v26 + 3);
      v52 = *((_DWORD *)v26 + 1) % this[2].x;
      v53 = &this[50 * v52 + 151];
      if ( v51 )
        break;
LABEL_161:
      ++v50;
      v26 += 96;
      if ( v50 >= *((_DWORD *)a2 + 12) )
        goto LABEL_162;
    }
    if ( (v53->x & 0x80000) != 0 && (this[455].y != 2 || v52 != this[451].x) )
    {
      v114 = 1;
      v122 = (struct CContactState *)&this[50 * v52 + 151];
    }
    v54 = this[455].y;
    if ( v54 == 2 && v52 == this[451].x )
    {
      v55 = v97;
      if ( (v51 & 0x40000) == 0 )
        goto LABEL_145;
      this[492].x &= ~0x2000000u;
      v54 = 1;
      this[455].y = 1;
      if ( !v97 )
        goto LABEL_145;
      CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
      v56 = (struct CContactState *)&this[151];
      v57 = 6LL;
      do
      {
        if ( (*(_DWORD *)v56 & 1) != 0 )
        {
          CPTPEngine::SetContactRestingState((CPTPEngine *)this, v56, 1);
          *((_DWORD *)v56 + 1) &= ~1u;
        }
        v56 = (struct CContactState *)((char *)v56 + 400);
        --v57;
      }
      while ( v57 );
      v54 = this[455].y;
    }
    v55 = v97;
LABEL_145:
    if ( *p_y )
    {
      if ( v54 == 5 && (*((_DWORD *)v26 + 3) & 0x40000) == 0 && v55 == 1 )
      {
        v58 = v53->x;
        if ( (v53->x & 0x80u) != 0
          && (v58 & 4) == 0
          && (v58 & 0x2000) == 0
          && (v58 & 0x4000) == 0
          && (v58 & 0x8000) == 0 )
        {
          this[455].y = 1;
          CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, p_y);
        }
      }
      if ( *p_y && (*((_DWORD *)v26 + 3) & 0x40000) != 0 && (v53->x & 0x8000) != 0 )
      {
        this[455].y = 1;
        CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, p_y);
      }
    }
    if ( this[455].y == 2 )
      this[492].x |= 0x2000000u;
    goto LABEL_161;
  }
LABEL_162:
  v59 = v97;
  if ( (unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts((CPTPEngine *)this, a2, v97) )
    goto LABEL_251;
  v60 = this[454].x + v97;
  if ( v60 > 1 && (this[492].x & 0x200000) == 0 && (v99 || v103) )
  {
    v61 = this[2].x;
    if ( v61 )
    {
      v62 = 1;
      v63 = this + 161;
      v64 = v61;
      do
      {
        if ( (v63[-10].x & 0x20000000) != 0 && (v63[27].y & 0xFFFFFFFB) == 0 && v62 < v61 )
        {
          v65 = &this[50 * v62 + 161];
          v66 = v61 - v62;
          do
          {
            v67 = v65[-10].x;
            if ( (v67 & 0x20000000) != 0 && (v65[27].y & 0xFFFFFFFB) == 0 )
            {
              v68 = (v63[-10].x & 2) != 0 || *v63 == *(_QWORD *)a2;
              v69 = (v67 & 2) != 0 || *v65 == *(_QWORD *)a2;
              if ( v68 || v69 )
              {
                v70 = *(_QWORD *)v65 - *(_QWORD *)v63;
                if ( *(_QWORD *)v65 <= *(_QWORD *)v63 )
                  v70 = *(_QWORD *)v63 - *(_QWORD *)v65;
                if ( v70 <= *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[28].y / 0x3E8 )
                  this[492].x |= 0x200000u;
              }
            }
            v65 += 50;
            --v66;
          }
          while ( v66 );
        }
        v63 += 50;
        ++v62;
        --v64;
      }
      while ( v64 );
    }
  }
  v71 = this[492].x;
  if ( (v71 & 0x200000) != 0 && v60 == 1 )
  {
    v71 &= 0xFF9FFFFF;
    this[492].x = v71;
  }
  if ( (v71 & 0x2000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)this, a2, v118) )
  {
LABEL_250:
    v59 = v97;
LABEL_251:
    v73 = 6LL;
    goto LABEL_252;
  }
  v2 = v110;
LABEL_197:
  if ( !(unsigned int)CPTPEngine::DoTPButtonProcessing(this, a2, v2, v97, &v111)
    || !(unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing((CPTPEngine *)this, a2, &v112, &v113) )
  {
    goto LABEL_250;
  }
  if ( v2 )
  {
    v73 = 6LL;
    goto LABEL_287;
  }
  if ( v111 || v112 || v113 )
  {
    v72 = this[455].y;
    if ( v72 != 3 )
    {
      v73 = 6LL;
      if ( v72 != 6 )
        goto LABEL_242;
    }
  }
  v74 = this[455].y;
  v75 = this[451].y && v74 != 1;
  v76 = v119;
  v77 = !v119 && !v120 && !v105 && !v75 && v114;
  v78 = this[453].y;
  if ( v78 == 2 && (v79 = this[455].y, v74 = v79, v79 != 3) && (this[492].x & 0x2000000) == 0 && v77 && v100 )
  {
    v80 = 1;
  }
  else
  {
    v81 = 0;
    v80 = 0;
    v79 = v74;
    if ( v78 != 2 || !v77 && !*((_DWORD *)a2 + 10) )
      goto LABEL_226;
  }
  v81 = 1;
LABEL_226:
  v82 = 0;
  if ( v79 != 3 && (v80 || v81) )
  {
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, a2, v122);
    v78 = this[453].y;
    if ( v78 == 2 )
      v82 = 1;
  }
  v83 = this[455].y;
  if ( v83 == 3 || v82 )
  {
    this[492].x &= ~0x2000000u;
    v84 = 3;
  }
  else
  {
    v84 = 1;
  }
  if ( (unsigned int)(v78 - 3) <= 1 && v84 != 3 && v77 )
  {
    v73 = 6LL;
    goto LABEL_244;
  }
  v73 = 6LL;
  if ( v83 == 6 )
  {
LABEL_244:
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, a2, v122);
LABEL_245:
    CPTPEngine::DoGestureProcessing((CPTPEngine *)this, a2, &v115);
    goto LABEL_242;
  }
  if ( v84 != 1 )
    goto LABEL_245;
  if ( this[453].y >= 2u )
  {
    this[455].y = 1;
LABEL_242:
    v59 = v97;
LABEL_252:
    v85 = v98;
    goto LABEL_253;
  }
  v85 = v98;
  v86 = v76 == 0;
  v59 = v97;
  if ( v86 && !v75 )
    CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)a2, v97, v98);
LABEL_253:
  v87 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v88 = (char *)a2 + 68;
    do
    {
      v89 = 50LL * (unsigned int)(*((_DWORD *)v88 - 2) % this[2].x);
      if ( (this[v89 + 151].x & 1) != 0 && *(_DWORD *)v88 )
      {
        if ( (*(_DWORD *)v88 & 0x40000) != 0 )
        {
          if ( this[455].y == 2 && *((_DWORD *)v88 - 2) % this[2].x == this[451].x )
            this[492].x &= ~0x2000000u;
          v90 = this[v89 + 151].x & 0xFFFFFFFE;
          this[v89 + 151].x = v90;
          if ( (*(_DWORD *)v88 & 0x2000000) != 0 )
            ++this[454].x;
          else
            this[v89 + 151].x = v90 & 0xDFFFFFFF;
        }
        else
        {
          this[v89 + 162] = *(struct tagPOINT *)(v88 + 68);
          this[v89 + 155] = *(struct tagPOINT *)(v88 + 28);
        }
      }
      v88 += 96;
      ++v87;
    }
    while ( v87 < *((_DWORD *)a2 + 12) );
  }
  v91 = -__CFSHR__(this[492].x, 19);
  if ( __CFSHR__(this[492].x, 19) != v121 )
  {
    LODWORD(v117) = 0;
    v116 = 0LL;
    v92 = 2;
    if ( !v91 )
      v92 = 3;
    CBasePTPEngine::SendEtwOutput((__int64)this, v92, (__int64)&v116);
  }
  if ( this[455].y != 2 )
    this[492].x &= ~0x800000u;
  for ( k = 0; k < 6; ++k )
  {
    if ( (this[50 * k + 151].x & 1) != 0 )
      goto LABEL_283;
  }
  this[492].x &= 0xE78FFFFF;
  v86 = this[451].y == 0;
  this[455].y = 1;
  if ( !v86 )
    CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[451].y);
  if ( v85 == 2 )
  {
    v94 = 50LL * (unsigned int)this[451].x;
    if ( (this[v94 + 151].x & 0x800) != 0
      && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)&this[v94 + 162] - *(_QWORD *)&this[v94 + 164]))
                 / *(_QWORD *)&this[12]) >= (unsigned int)this[68].x )
    {
      this[488] = this[v94 + 162];
    }
  }
  v106 = *(unsigned __int64 *)a2;
  v107 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v106);
LABEL_283:
  if ( v115 )
  {
    this[492].x &= 0xFF9FFFFF;
    this[455].y = 1;
    this[482] = *(struct tagPOINT *)a2;
  }
  this[452].x = v59;
LABEL_287:
  v95 = this + 151;
  do
  {
    if ( (v95->x & 0x20000000) != 0 && *(_QWORD *)&v95[48] != *(_QWORD *)a2 )
    {
      v123 = 0LL;
      v106 = 0LL;
      v107 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v106);
      v95->x &= 0xDFFFFFFE;
    }
    v95 += 50;
    --v73;
  }
  while ( v73 );
  if ( (unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    if ( (v96 & 1) != 0 || (v96 & 2) != 0 || (v96 & 4) != 0 || this[489].x || this[455].y != 1 )
    {
      v6 = 0;
    }
    else if ( v96 >= 0 )
    {
      v123 = 0LL;
      v106 = 0LL;
      v107 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v106);
      v96 = this[492].x & 0xA78FFFFF | 0x40000000;
    }
    this[492].x = (v6 << 31) | v96 & 0x7FFFFFFF;
  }
  else
  {
    v123 = 0LL;
    v106 = 0LL;
    this[492].x = v96 | 0x80000000;
    v107 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v106);
  }
}
