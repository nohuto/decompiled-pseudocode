/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C0202340 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01FEFC8 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C01FF354 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01FF558 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C02002A0 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C02007A8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C02012AC (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C02013F4 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C02016CC (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C02018EC (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C0201940 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0201AC8 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0202358 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020269C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203810 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C020386C (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C0203D04 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203EE0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C02040F4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPGetLevel@CPTPEngine@@AEAA?AW4tagTOUCH_PAD_AAP_LEVEL@@XZ @ 0x1C0204338 (-TPAAPGetLevel@CPTPEngine@@AEAA-AW4tagTOUCH_PAD_AAP_LEVEL@@XZ.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0204350 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C02043C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0204A20 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::RunStateMachine(struct tagPOINT *this, struct PTPInput *a2)
{
  int v2; // r15d
  int v3; // esi
  int v4; // r14d
  unsigned int v5; // r13d
  int v6; // edi
  int v9; // eax
  LONG x; // eax
  unsigned int i; // edx
  LONG v12; // eax
  struct tagPOINT v13; // rax
  CPTPEngine *v14; // rcx
  unsigned __int64 v15; // rax
  LONG v16; // ecx
  unsigned int v17; // eax
  LONG y; // ecx
  char *v19; // rax
  char *v20; // r15
  LONG v21; // edx
  struct tagPOINT *v22; // rsi
  unsigned int v23; // ecx
  unsigned int v24; // r14d
  int v25; // r13d
  unsigned int v26; // eax
  unsigned int v27; // r9d
  LONG v28; // r8d
  char *v29; // r8
  __int64 v30; // rdx
  LONG v31; // ecx
  LONG v32; // eax
  LONG *p_y; // r15
  LONG v34; // eax
  int v35; // r8d
  LONG v36; // r9d
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  int v38; // eax
  __int64 v39; // rax
  int v40; // ecx
  int v41; // ecx
  int v42; // r8d
  BOOL v43; // esi
  LONG v44; // eax
  char v45; // dl
  CPTPEngine *j; // rax
  int v47; // ecx
  unsigned int v48; // r14d
  char *v49; // r13
  int v50; // r8d
  unsigned int v51; // edx
  struct tagPOINT *v52; // rsi
  int v53; // eax
  unsigned int v54; // edx
  struct CContactState *v55; // rdx
  __int64 v56; // r10
  LONG v57; // eax
  LONG v58; // r13d
  unsigned int v59; // r13d
  LONG v60; // esi
  unsigned int v61; // edx
  unsigned int v62; // r10d
  unsigned int v63; // r15d
  __int64 v64; // r11
  unsigned int v65; // ecx
  struct tagPOINT *v66; // r9
  __int64 v67; // r14
  LONG v68; // edx
  bool v69; // cl
  bool v70; // al
  struct tagPOINT v71; // rcx
  unsigned __int64 v72; // r8
  LONG v73; // eax
  LONG v74; // eax
  __int64 v75; // r14
  LONG v76; // edx
  BOOL v77; // r15d
  int v78; // r9d
  BOOL v79; // esi
  LONG v80; // ecx
  int v81; // eax
  char v82; // dl
  char v83; // r14
  LONG v84; // edx
  int v85; // r8d
  int v86; // esi
  unsigned int v87; // r10d
  char *v88; // r8
  __int64 v89; // r9
  LONG v90; // ecx
  unsigned int v91; // ecx
  int v92; // ecx
  __int64 v93; // rdx
  unsigned int k; // edx
  bool v95; // zf
  __int64 v96; // rcx
  struct tagPOINT *v97; // rsi
  signed int v98; // r10d
  unsigned int v99; // [rsp+38h] [rbp-D0h]
  int v100; // [rsp+3Ch] [rbp-CCh]
  int v101; // [rsp+40h] [rbp-C8h]
  int v102; // [rsp+44h] [rbp-C4h]
  unsigned int v103; // [rsp+44h] [rbp-C4h]
  int v104; // [rsp+48h] [rbp-C0h]
  int v105; // [rsp+4Ch] [rbp-BCh]
  int v106; // [rsp+50h] [rbp-B8h]
  unsigned int v107; // [rsp+54h] [rbp-B4h]
  __int128 v108; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v109; // [rsp+68h] [rbp-A0h]
  int v110; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v111; // [rsp+7Ch] [rbp-8Ch]
  int v112; // [rsp+80h] [rbp-88h]
  int v113; // [rsp+84h] [rbp-84h] BYREF
  int v114; // [rsp+88h] [rbp-80h] BYREF
  int v115; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v116; // [rsp+90h] [rbp-78h]
  int v117; // [rsp+94h] [rbp-74h] BYREF
  __int128 v118; // [rsp+98h] [rbp-70h] BYREF
  __int64 v119; // [rsp+A8h] [rbp-60h]
  int v120; // [rsp+B8h] [rbp-50h]
  int v121; // [rsp+BCh] [rbp-4Ch]
  int v122; // [rsp+C0h] [rbp-48h]
  unsigned int v123; // [rsp+C8h] [rbp-40h]
  struct CContactState *v124; // [rsp+D0h] [rbp-38h]
  __int64 v125; // [rsp+E8h] [rbp-20h]
  __int128 v126; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v127; // [rsp+108h] [rbp+0h]
  _OWORD v128[2]; // [rsp+118h] [rbp+10h]
  __int64 v129; // [rsp+140h] [rbp+38h]

  v2 = *((_DWORD *)a2 + 9);
  v124 = 0LL;
  v3 = 0;
  v116 = 0;
  v4 = 0;
  v99 = 0;
  v5 = 0;
  v6 = 1;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v110 = 0;
  v117 = 0;
  v104 = 0;
  v111 = 0;
  v102 = 0;
  v101 = 0;
  v105 = 0;
  v9 = *((_DWORD *)a2 + 17) & 0x70;
  v112 = v2;
  this[455].x = v9;
  CPTPEngine::HandleButtonSuppressionAndPendingUps((CPTPEngine *)this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v118 = 0LL;
    v109 = 0LL;
    v119 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, &v118);
  }
  x = this[492].x;
  if ( (x & 1) == 0 && (x & 2) == 0 && (x & 4) == 0 )
  {
    for ( i = 0; i < 6; ++i )
    {
      v12 = this[50 * i + 151].x;
      if ( (v12 & 1) != 0 && (v12 & 0x80u) == 0 )
        goto LABEL_20;
    }
    if ( *((_DWORD *)a2 + 12) != this[453].x + this[454].x )
    {
      CBasePTPEngine::SendInertiaOutput(this, 0LL);
      if ( *((_DWORD *)a2 + 10) )
        this[492].x &= 0xFEFFDFFF;
      v13 = this[483];
      if ( *(_QWORD *)&v13
        && *((_QWORD *)a2 + 1) > *(unsigned __int64 *)&v13
        && (int)CPTPEngine::TPAAPGetLevel(this) > 0 )
      {
        CPTPEngine::TPAAPSetCurtainState(v14, 1);
      }
      this[483] = *(struct tagPOINT *)a2;
      v15 = *((_QWORD *)a2 + 2);
      if ( v15 > *((_QWORD *)a2 + 1) )
      {
        v118 = v15;
        v119 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v118);
      }
    }
  }
LABEL_20:
  v16 = this[455].x;
  v106 = v16 & 0x10;
  v120 = v106 != 0;
  v122 = v16 & 0x40;
  v121 = v16 & 0x20;
  v17 = this[492].x & 0xFFFBFFFF;
  v123 = (this[492].x & 0x40000u) >> 18;
  y = this[455].y;
  v100 = y;
  this[492].x = v17;
  if ( v2 )
    goto LABEL_188;
  this[454].x = 0;
  v19 = (char *)a2 + 56;
  v103 = 0;
  v20 = (char *)a2 + 56;
  v21 = y;
  if ( *((_DWORD *)a2 + 12) )
  {
    do
    {
      v107 = *((_DWORD *)v20 + 1) % this[2].x;
      v22 = &this[50 * v107 + 151];
      v23 = v22->x;
      if ( (v22->x & 1) != 0 && ((v23 & 0x20000000) == 0 || (*((_DWORD *)v20 + 3) & 0x60000) == 0) )
      {
        v129 = 0LL;
        v118 = 0LL;
        v119 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v118);
        v23 = v22->x & 0xDFFFFFFE;
        v22->x = v23;
      }
      if ( (v23 & 0x20000000) == 0 )
      {
        v105 = 1;
        v22->x = v23 | 0x20000000;
        v22[10] = *(struct tagPOINT *)(v20 + 80);
        v22[3] = *(struct tagPOINT *)(v20 + 40);
        v22[19].x = *((_DWORD *)v20 + 1);
      }
      v24 = 0;
      *(_OWORD *)&v22[38].x = *(_OWORD *)v20;
      *(_OWORD *)&v22[40].x = *((_OWORD *)v20 + 1);
      *(_OWORD *)&v22[42].x = *((_OWORD *)v20 + 2);
      *(_OWORD *)&v22[44].x = *((_OWORD *)v20 + 3);
      *(_OWORD *)&v22[46].x = *((_OWORD *)v20 + 4);
      *(_OWORD *)&v22[48].x = *((_OWORD *)v20 + 5);
      v25 = *((_DWORD *)v20 + 3);
      *((_DWORD *)v20 + 3) = v25 & 0xFFFFFF8F;
      if ( (v22->x & 1) == 0 )
      {
        v24 = ((v25 & 0xFFFFFF8F) >> 23) & 4;
        if ( !PtInRect(&this[6], *((_QWORD *)v20 + 5))
          && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0) )
        {
          v24 |= 2u;
        }
        if ( (this[33].y & 2) != 0
          && !PtInRect(&this[486], *((_QWORD *)v20 + 5))
          && (*(_QWORD *)a2 - *(_QWORD *)&v22[10] >= *(_QWORD *)&this[12]
                                                   * (unsigned __int64)(unsigned int)this[28].y
                                                   / 0x3E8
           || *((_DWORD *)a2 + 12) == 1
           || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(
                               (CPTPEngine *)this,
                               a2,
                               (struct CContactState *)v22)) )
        {
          v24 |= 1u;
        }
        if ( v24 || (v25 & 0x40000) != 0 )
          *((_DWORD *)v20 + 3) = 0;
      }
      v22[37].y = v24;
      if ( *((_DWORD *)v20 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          (CPTPEngine *)this,
          a2,
          (struct CContactState *)v22,
          (struct PTPEnginePointerNode *)v20,
          &v110);
        if ( (v22->x & 2) != 0 )
        {
          ++v104;
          *(_OWORD *)((char *)v128 + 8) = 0LL;
          v111 = v107;
          *(_QWORD *)&v128[0] = *(_QWORD *)a2;
          v101 = 1;
          v108 = v128[0];
          v109 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)((char *)v128 + 8), *(__m128d *)((char *)v128 + 8));
          CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v108);
        }
        else if ( this[455].y != 1 )
        {
          v22->y &= ~8u;
        }
        if ( (*((_DWORD *)v20 + 3) & 0x40000) == 0 )
          ++v99;
      }
      else if ( (v25 & 0x2000006) != 0 )
      {
        ++this[454].x;
      }
      else
      {
        v26 = v22->x;
        if ( (v22->x & 1) != 0 )
        {
          v125 = 0LL;
          v126 = 0LL;
          v127 = 0LL;
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v126);
          v26 = v22->x & 0xFFFFFFFE;
        }
        v22->x = v26 & 0xDFFFFFFF;
      }
      v20 += 96;
      ++v103;
    }
    while ( v103 < *((_DWORD *)a2 + 12) );
    y = this[455].y;
    v19 = (char *)a2 + 56;
    v3 = v110;
    v21 = y;
    v4 = v104;
    v5 = v111;
  }
  this[453].x = 0;
  v27 = 0;
  v28 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v29 = v19 + 12;
    do
    {
      v30 = 50LL * (unsigned int)(*((_DWORD *)v29 - 2) % this[2].x);
      v31 = this[v30 + 151].x;
      if ( (v31 & 1) != 0 )
      {
        if ( (*(_DWORD *)v29 & 0x40000) == 0 && (v31 & 0x80u) != 0 )
          ++this[453].x;
        if ( v101 )
        {
          this[v30 + 157] = *(struct tagPOINT *)(v29 + 28);
          this[v30 + 167] = *(struct tagPOINT *)a2;
          v32 = *((_DWORD *)a2 + 6);
          this[v30 + 151].x &= ~0x80000u;
          this[v30 + 168].x = v32;
        }
      }
      v29 += 96;
      ++v27;
    }
    while ( v27 < *((_DWORD *)a2 + 12) );
    y = this[455].y;
    v21 = y;
    v28 = this[453].x;
  }
  p_y = &this[451].y;
  this[453].y = v99 - v28;
  v34 = this[451].y;
  if ( !v34 || y == 1 )
  {
    v35 = 0;
    if ( !v34 )
      y = v21;
  }
  else
  {
    v35 = 1;
  }
  v36 = y;
  if ( v99 < 2 || y == 3 || this[455].x || v35 )
  {
    v102 = 0;
    v38 = y;
    if ( v99 < 2 )
    {
LABEL_82:
      v40 = v101;
      goto LABEL_83;
    }
  }
  else
  {
    GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (CPTPEngine *)this,
                                                    a2);
    v36 = this[455].y;
    v102 = GestureAndMarkGesturingContactsAsNonResting;
  }
  v38 = v36;
  if ( v36 != 2 )
    goto LABEL_82;
  v39 = (unsigned int)this[451].x;
  if ( (this[50 * v39 + 151].x & 0x4000000) == 0
    && *(_QWORD *)a2 - *(_QWORD *)&this[50 * v39 + 164] >= *(_QWORD *)&this[12]
                                                         * (unsigned __int64)(unsigned int)this[49].y
                                                         / 0x3E8 )
  {
    v38 = 2;
    goto LABEL_82;
  }
  v40 = v101;
  v38 = 2;
  if ( v101 )
  {
    this[455].y = 1;
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v38 = this[455].y;
    goto LABEL_82;
  }
LABEL_83:
  if ( (v105 || v40) && v38 == 1 )
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
  if ( v3 && *((_DWORD *)a2 + 12) == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  if ( this[489].x && v4 )
  {
    v43 = 0;
    if ( v4 == 1 )
    {
      if ( this[489].y )
      {
        v41 = *(_QWORD *)&this[460] - *(_QWORD *)&this[50 * v5 + 153];
        v42 = HIDWORD(*(_QWORD *)&this[460]) - HIDWORD(*(_QWORD *)&this[50 * v5 + 153]);
        if ( v42 * v42 + v41 * v41 <= (unsigned __int64)(unsigned int)(this[30].x * this[30].x) )
          v43 = 1;
      }
    }
    if ( this[490].x && !v43 )
      this[492].x &= ~8u;
    CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, !v43);
    if ( v43 )
    {
      v44 = this[490].x;
      this[490].x = 0;
      *p_y = v44;
      this[50 * v5 + 151].x |= 0x4000u;
    }
  }
  if ( this[455].y == 1 && *p_y && this[453].y > 1u )
    CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[451].y);
  if ( this[489].x )
  {
    v45 = 0;
    for ( j = (CPTPEngine *)&this[151]; j != (CPTPEngine *)&this[451]; j = (CPTPEngine *)((char *)j + 400) )
    {
      v47 = *(_DWORD *)j;
      if ( (*(_DWORD *)j & 1) != 0 && (v47 & 0x80u) != 0 && (v47 & 4) != 0 )
        v45 = 1;
    }
    if ( this[453].y || v45 )
      CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, 1);
  }
  if ( this[453].y > 2u )
    this[492].x |= 0x100000u;
  v48 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v49 = (char *)a2 + 56;
    while ( 1 )
    {
      v50 = *((_DWORD *)v49 + 3);
      v51 = *((_DWORD *)v49 + 1) % this[2].x;
      v52 = &this[50 * v51 + 151];
      if ( v50 )
        break;
LABEL_151:
      ++v48;
      v49 += 96;
      if ( v48 >= *((_DWORD *)a2 + 12) )
        goto LABEL_152;
    }
    if ( (v52->x & 0x80000) != 0 && (this[455].y != 2 || v51 != this[451].x) )
    {
      v116 = 1;
      v124 = (struct CContactState *)&this[50 * v51 + 151];
    }
    v53 = this[455].y;
    if ( v53 == 2 && v51 == this[451].x )
    {
      v54 = v99;
      if ( (v50 & 0x40000) == 0 )
        goto LABEL_136;
      this[492].x &= ~0x2000000u;
      v53 = 1;
      this[455].y = 1;
      if ( !v99 )
        goto LABEL_136;
      CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
      v55 = (struct CContactState *)&this[151];
      v56 = 6LL;
      do
      {
        if ( (*(_DWORD *)v55 & 1) != 0 )
        {
          CPTPEngine::SetContactRestingState((CPTPEngine *)this, v55, 1);
          *((_DWORD *)v55 + 1) &= ~1u;
        }
        v55 = (struct CContactState *)((char *)v55 + 400);
        --v56;
      }
      while ( v56 );
      v53 = this[455].y;
    }
    v54 = v99;
LABEL_136:
    if ( *p_y )
    {
      if ( v53 != 5 )
        goto LABEL_146;
      if ( (*((_DWORD *)v49 + 3) & 0x40000) != 0 )
        goto LABEL_147;
      if ( v54 != 1
        || (v57 = v52->x, (v52->x & 0x80u) == 0)
        || (v57 & 4) != 0
        || (v57 & 0x2000) != 0
        || (v57 & 0x4000) != 0
        || (v57 & 0x8000) != 0
        || (this[455].y = 1, CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[451].y), *p_y) )
      {
LABEL_146:
        if ( (*((_DWORD *)v49 + 3) & 0x40000) != 0 )
        {
LABEL_147:
          if ( (v52->x & 0x8000) != 0 )
          {
            this[455].y = 1;
            CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[451].y);
          }
        }
      }
    }
    if ( this[455].y == 2 )
      this[492].x |= 0x2000000u;
    goto LABEL_151;
  }
LABEL_152:
  v58 = v99;
  if ( (unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts((CPTPEngine *)this, a2, v99) )
    goto LABEL_241;
  v59 = this[454].x + v99;
  if ( v59 > 1 && (this[492].x & 0x200000) == 0 && (v101 || v105) )
  {
    v60 = this[2].x;
    if ( v60 )
    {
      v61 = this[2].x;
      v62 = 1;
      do
      {
        v63 = v62;
        v64 = 50LL * (v62 - 1);
        v65 = v61;
        if ( (this[v64 + 151].x & 0x20000000) != 0 && (this[v64 + 188].y & 0xFFFFFFFB) == 0 && v62 < v61 )
        {
          v66 = &this[50 * v62 + 161];
          v67 = v60 - v62;
          do
          {
            v68 = v66[-10].x;
            if ( (v68 & 0x20000000) != 0 && (v66[27].y & 0xFFFFFFFB) == 0 )
            {
              v69 = (this[v64 + 151].x & 2) != 0 || *(_QWORD *)&this[v64 + 161] == *(_QWORD *)a2;
              v70 = (v68 & 2) != 0 || *v66 == *(_QWORD *)a2;
              if ( v69 || v70 )
              {
                v71 = this[v64 + 161];
                v72 = *(_QWORD *)v66 - *(_QWORD *)&v71;
                if ( *(_QWORD *)v66 <= *(unsigned __int64 *)&v71 )
                  v72 = *(_QWORD *)&this[v64 + 161] - *(_QWORD *)v66;
                if ( v72 <= *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[28].y / 0x3E8 )
                  this[492].x |= 0x200000u;
              }
            }
            v66 += 50;
            --v67;
          }
          while ( v67 );
          v65 = v60;
        }
        ++v62;
        v61 = v65;
      }
      while ( v63 < v65 );
    }
  }
  v73 = this[492].x;
  if ( (v73 & 0x200000) != 0 && v59 == 1 )
  {
    v73 &= 0xFF9FFFFF;
    this[492].x = v73;
  }
  if ( (v73 & 0x2000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)this, a2, v120) )
  {
    v58 = v99;
LABEL_241:
    v75 = 6LL;
    goto LABEL_242;
  }
  v2 = v112;
LABEL_188:
  v58 = v99;
  if ( !(unsigned int)CPTPEngine::DoTPButtonProcessing(this, a2, v2, v99, &v113)
    || !(unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing((CPTPEngine *)this, a2, &v114, &v115) )
  {
    goto LABEL_241;
  }
  if ( v2 )
  {
    v75 = 6LL;
    goto LABEL_277;
  }
  if ( v113 || v114 || v115 )
  {
    v74 = this[455].y;
    if ( v74 != 3 )
    {
      v75 = 6LL;
      if ( v74 != 6 )
        goto LABEL_242;
    }
  }
  v76 = this[455].y;
  v77 = this[451].y && v76 != 1;
  v78 = v106;
  v79 = !v106 && !v121 && v122 == v106 && !v77 && v116;
  v80 = this[453].y;
  if ( v80 == 2 && v76 != 3 && (this[492].x & 0x2000000) == 0 && v79 && v102 )
  {
    v81 = 1;
  }
  else
  {
    v81 = 0;
    v82 = 0;
    if ( v80 != 2 || !v79 && !*((_DWORD *)a2 + 10) )
      goto LABEL_217;
  }
  v82 = 1;
LABEL_217:
  v83 = 0;
  if ( this[455].y != 3 && (v81 || v82) )
  {
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, a2, v124);
    v80 = this[453].y;
    v78 = v106;
    if ( v80 == 2 )
      v83 = 1;
  }
  v84 = this[455].y;
  if ( v84 == 3 || v83 )
  {
    this[492].x &= ~0x2000000u;
    v85 = 3;
  }
  else
  {
    v85 = 1;
  }
  if ( (unsigned int)(v80 - 3) <= 1 && v85 != 3 && v79 )
  {
    v75 = 6LL;
    goto LABEL_234;
  }
  v75 = 6LL;
  if ( v84 == 6 )
  {
LABEL_234:
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, a2, v124);
LABEL_235:
    CPTPEngine::DoGestureProcessing((CPTPEngine *)this, a2, &v117);
    goto LABEL_242;
  }
  if ( v85 != 1 )
    goto LABEL_235;
  if ( this[453].y >= 2u )
  {
    this[455].y = 1;
LABEL_242:
    v86 = v100;
    goto LABEL_243;
  }
  v86 = v100;
  if ( !v78 && !v77 )
    CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)a2, v99, v100);
LABEL_243:
  v87 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v88 = (char *)a2 + 68;
    do
    {
      v89 = 50LL * (unsigned int)(*((_DWORD *)v88 - 2) % this[2].x);
      v90 = this[v89 + 151].x;
      if ( (v90 & 1) != 0 && *(_DWORD *)v88 )
      {
        if ( (*(_DWORD *)v88 & 0x40000) != 0 )
        {
          if ( this[455].y == 2 && *((_DWORD *)v88 - 2) % this[2].x == this[451].x )
          {
            this[492].x &= ~0x2000000u;
            v90 = this[v89 + 151].x;
          }
          v91 = v90 & 0xFFFFFFFE;
          this[v89 + 151].x = v91;
          if ( (*(_DWORD *)v88 & 0x2000000) != 0 )
            ++this[454].x;
          else
            this[v89 + 151].x = v91 & 0xDFFFFFFF;
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
  v92 = -__CFSHR__(this[492].x, 19);
  if ( __CFSHR__(this[492].x, 19) != v123 )
  {
    LODWORD(v119) = 0;
    v118 = 0LL;
    v93 = 2LL;
    if ( !v92 )
      v93 = 3LL;
    CBasePTPEngine::SendEtwOutput(this, v93, &v118);
  }
  if ( this[455].y != 2 )
    this[492].x &= ~0x800000u;
  for ( k = 0; k < 6; ++k )
  {
    if ( (this[50 * k + 151].x & 1) != 0 )
      goto LABEL_273;
  }
  this[492].x &= 0xE78FFFFF;
  v95 = this[451].y == 0;
  this[455].y = 1;
  if ( !v95 )
    CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[451].y);
  if ( v86 == 2 )
  {
    v96 = 50LL * (unsigned int)this[451].x;
    if ( (this[v96 + 151].x & 0x800) != 0
      && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)&this[v96 + 162] - *(_QWORD *)&this[v96 + 164]))
                 / *(_QWORD *)&this[12]) >= (unsigned int)this[68].x )
    {
      this[488] = this[v96 + 162];
    }
  }
  v108 = *(unsigned __int64 *)a2;
  v109 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v108);
LABEL_273:
  if ( v117 )
  {
    this[492].x &= 0xFF9FFFFF;
    this[455].y = 1;
    this[482] = *(struct tagPOINT *)a2;
  }
  this[452].x = v58;
LABEL_277:
  v97 = this + 151;
  do
  {
    if ( (v97->x & 0x20000000) != 0 && *(_QWORD *)&v97[48] != *(_QWORD *)a2 )
    {
      v125 = 0LL;
      v108 = 0LL;
      v109 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v108);
      v97->x &= 0xDFFFFFFE;
    }
    v97 += 50;
    --v75;
  }
  while ( v75 );
  if ( (unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    if ( (v98 & 1) != 0 || (v98 & 2) != 0 || (v98 & 4) != 0 || this[489].x || this[455].y != 1 )
    {
      v6 = 0;
    }
    else if ( v98 >= 0 )
    {
      v125 = 0LL;
      v108 = 0LL;
      v109 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v108);
      v98 = this[492].x & 0xA78FFFFF | 0x40000000;
    }
    this[492].x = (v6 << 31) | v98 & 0x7FFFFFFF;
  }
  else
  {
    v125 = 0LL;
    v108 = 0LL;
    this[492].x = v98 | 0x80000000;
    v109 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v108);
  }
}
