/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 *     GreCleanDC @ 0x1C0072B90 (GreCleanDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1C00BF644 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DEED0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C0005440 (GreDCSelectPen.c)
 *     GreRestoreDC @ 0x1C000D6C0 (GreRestoreDC.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C001A908 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00438B0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreDCSelectBrush @ 0x1C00457E0 (GreDCSelectBrush.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0053730 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0093290 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C017F2E4 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C017F36C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C017F900 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     IsRFONTOBJ_dtorHelperSupported @ 0x1C0271604 (IsRFONTOBJ_dtorHelperSupported.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  BOOL v8; // r12d
  __int64 v9; // r13
  void *v10; // rcx
  void *v11; // rcx
  DC *v12; // rbx
  struct HPATH__ *v13; // rdx
  __int64 v14; // rsi
  struct HOBJ__ *v15; // r14
  int v16; // eax
  unsigned int v17; // edx
  int v18; // r12d
  __int64 v19; // rcx
  _DWORD *v20; // rbx
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned int v28; // r9d
  __int64 v29; // r8
  _DWORD *v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // r10
  DC *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rcx
  _DWORD *v38; // rbx
  char v39; // al
  __int64 v40; // rcx
  GdiHandleManager *v41; // r14
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // rsi
  __int64 v45; // rdx
  unsigned int v46; // r9d
  __int64 v47; // r8
  _DWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rdx
  unsigned __int64 v51; // r8
  unsigned int v52; // r9d
  __int64 v53; // rdx
  char *v54; // rdx
  __int128 *v55; // rcx
  __int64 v56; // rdx
  __int128 *v57; // rax
  __int64 v58; // r8
  __int128 v59; // xmm0
  _OWORD *v60; // rcx
  __int128 *v61; // rax
  __int128 v62; // xmm0
  __int128 v63; // xmm0
  __int64 v64; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v65; // rcx
  _DWORD *v66; // rsi
  char v67; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v68; // r14
  __int64 v69; // rcx
  GdiHandleManager *v70; // r15
  __int64 v71; // rax
  unsigned int v72; // ebx
  __int64 v73; // r14
  __int64 v74; // rdx
  unsigned int v75; // r9d
  __int64 v76; // r8
  _DWORD *v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // r10
  unsigned int v80; // edx
  unsigned int v81; // r8d
  __int64 v82; // r10
  DC *v83; // rax
  __int64 v84; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v85; // rcx
  _DWORD *v86; // rsi
  char v87; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v88; // r14
  __int64 v89; // rcx
  __int64 v90; // r15
  __int64 v91; // rax
  unsigned int v92; // ebx
  __int64 v93; // r14
  __int64 v94; // rdx
  unsigned int v95; // r9d
  __int64 v96; // r8
  _DWORD *v97; // rdx
  int v98; // eax
  unsigned int v99; // ebx
  __int64 v100; // rdx
  unsigned int v101; // r8d
  __int64 v102; // r10
  __int64 v103; // rbx
  unsigned int v104; // ecx
  DC *v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rcx
  _DWORD *v108; // rbx
  char v109; // al
  __int64 v110; // rcx
  __int64 v111; // r14
  __int64 v112; // rax
  unsigned int v113; // ebx
  __int64 v114; // rsi
  __int64 v115; // rdx
  unsigned int v116; // r9d
  __int64 v117; // r8
  _DWORD *v118; // rdx
  int v119; // eax
  unsigned int v120; // ebx
  __int64 v121; // rdx
  unsigned int v122; // r8d
  __int64 v123; // r10
  __int64 v124; // rbx
  DC *v125; // rcx
  int v126; // edx
  _DWORD *v127; // rax
  DC *v128; // r13
  struct HOBJ__ *v129; // rsi
  unsigned int v130; // edx
  unsigned int v131; // eax
  __int64 v132; // r15
  unsigned int v133; // ebx
  unsigned int v134; // r14d
  unsigned int v135; // r12d
  __int64 v136; // r9
  __int64 v137; // rsi
  __int64 v138; // r8
  DC *v139; // rdx
  int v140; // eax
  __int64 v142; // rax
  HDC v143; // rdx
  HBITMAP v144; // rbx
  DC *v145; // rcx
  struct OBJECT *v146; // rbx
  __int64 v147; // rcx
  __int64 v148; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v149; // rdx
  __int64 v150; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rcx
  DC *v155[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v156; // [rsp+40h] [rbp-C0h] BYREF
  int v157; // [rsp+48h] [rbp-B8h]
  __int64 v158; // [rsp+58h] [rbp-A8h] BYREF
  int v159; // [rsp+60h] [rbp-A0h]
  __int64 v160; // [rsp+70h] [rbp-90h] BYREF
  int v161; // [rsp+78h] [rbp-88h]
  __int64 v162; // [rsp+88h] [rbp-78h] BYREF
  int v163; // [rsp+90h] [rbp-70h]
  __int64 v164; // [rsp+A0h] [rbp-60h] BYREF
  int v165; // [rsp+A8h] [rbp-58h]
  __int64 v166; // [rsp+B8h] [rbp-48h] BYREF
  int v167; // [rsp+C0h] [rbp-40h]
  char v168[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v169; // [rsp+D8h] [rbp-28h]
  BOOL v170; // [rsp+190h] [rbp+90h]
  __int64 v171; // [rsp+1A0h] [rbp+A0h] BYREF
  struct HOBJ__ *v172; // [rsp+1A8h] [rbp+A8h]

  v4 = *this;
  v5 = *((_QWORD *)v4 + 122);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush((__int64)v4, *(_QWORD *)(v5 + 160));
    v4 = *this;
  }
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(v4, *(_QWORD *)(*((_QWORD *)v4 + 122) + 168LL));
  v7 = *this;
  v8 = *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (*((_DWORD *)v7 + 63) & 1) != 0;
  v170 = v8;
  if ( *((int *)v7 + 26) > 1 )
    GreRestoreDC(*(HDC *)v7, 1);
  v9 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
  if ( *((_QWORD *)*this + 11) != *(_QWORD *)(v9 + 6000) )
    SelectPaletteWorker((struct XDCOBJ *)this, *(HPALETTE *)(v9 + 752), 1);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    v142 = *(_QWORD *)(v9 + 3168);
    v143 = *(HDC *)*this;
    v155[0] = 0LL;
    v155[1] = 0LL;
    v144 = *(HBITMAP *)(v142 + 168);
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)v155, v143);
    if ( v155[0] )
    {
      if ( (unsigned int)XDCOBJ::SaveAttributes((XDCOBJ *)v155) )
      {
        v145 = v155[0];
        if ( (*((_DWORD *)v155[0] + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v155[0]);
          v145 = v155[0];
        }
        if ( v145 )
          hbmSelectBitmapInternal(v155, v144, 1, a2, 1);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)v155[0] + 3);
        v155[0] = 0LL;
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v155);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1044) = -1;
  v10 = (void *)*((_QWORD *)*this + 20);
  if ( v10 )
  {
    REGION::vDeleteREGION(v10);
    *((_QWORD *)*this + 20) = 0LL;
  }
  v11 = (void *)*((_QWORD *)*this + 21);
  if ( v11 )
  {
    REGION::vDeleteREGION(v11);
    *((_QWORD *)*this + 21) = 0LL;
  }
  v12 = *this;
  v13 = (struct HPATH__ *)*((_QWORD *)*this + 25);
  if ( v13 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v168, v13);
    if ( v169 && (*(_DWORD *)(v169 + 84) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v169, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v168);
    *((_QWORD *)v12 + 25) = 0LL;
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  v14 = *((_QWORD *)*this + 19);
  if ( v14 )
  {
    v15 = *(struct HOBJ__ **)v14;
    v16 = (unsigned __int16)*(_QWORD *)v14;
    v17 = ((unsigned int)*(_QWORD *)v14 >> 8) & 0xFF0000;
    v172 = *(struct HOBJ__ **)v14;
    v156 = 0LL;
    v157 = 0;
    LOWORD(v18) = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v156, v16 | v17, 0, 0, 1);
    if ( !v157 )
    {
LABEL_39:
      if ( (_WORD)v18 == 1 )
      {
        v158 = 0LL;
        v159 = 0;
        HANDLELOCK::bLockHobj((HANDLELOCK *)&v158, v15, 10);
        if ( v159 )
        {
          v146 = HANDLELOCK::pObj((HANDLELOCK *)&v158);
          v148 = SGDGetSessionState(v147);
          LOBYTE(v146) = *((_BYTE *)GdiHandleManager::GetEntryFromObject(
                                      *(GdiHandleManager **)(*(_QWORD *)(v148 + 24) + 8008LL),
                                      v146)
                         + 15);
          HANDLELOCK::vUnlock((HANDLELOCK *)&v158);
          if ( ((unsigned __int8)v146 & 2) != 0 && qword_1C02D57E0 )
            qword_1C02D57E0(v15, 0LL);
          if ( v159 )
            HANDLELOCK::vUnlock((HANDLELOCK *)&v158);
        }
      }
      v8 = v170;
      goto LABEL_41;
    }
    v20 = (_DWORD *)v156;
    v18 = *(_DWORD *)(v14 + 8);
    v21 = *(_BYTE *)(v156 + 14);
    if ( v21 == 5 )
    {
      v149 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v14 + 680);
      v150 = 0LL;
    }
    else
    {
      if ( v21 != 16 )
      {
LABEL_22:
        --*(_DWORD *)(v14 + 8);
        v22 = *(_QWORD *)(SGDGetSessionState(v19) + 24);
        v23 = *(_QWORD *)(v22 + 8008);
        v24 = SGDGetSessionState(v22);
        v25 = *v20 & 0xFFFFFF;
        v26 = *(_QWORD *)(*(_QWORD *)(v24 + 24) + 8008LL);
        if ( v25 >= 0x10000 )
        {
          if ( *(_DWORD *)v26 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v26 + 16),
                                        (unsigned __int16)v25,
                                        1)
                 + 13) == HIWORD(v25) )
              v25 = (unsigned __int16)v25;
          }
          else
          {
            v25 = (unsigned __int16)v25;
          }
          v15 = v172;
        }
        v27 = *(_QWORD *)(v26 + 16);
        v28 = *(_DWORD *)(v27 + 2056);
        if ( v25 >= v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16)
          || (v25 >= v28
            ? (v29 = *(_QWORD *)(v27 + 8LL * (((v25 - v28) >> 16) + 1) + 8), v25 += -65536 * ((v25 - v28) >> 16) - v28)
            : (v29 = *(_QWORD *)(v27 + 8)),
              v25 >= *(_DWORD *)(v29 + 20)) )
        {
          v30 = 0LL;
        }
        else
        {
          v30 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                           + 16LL * (unsigned __int8)v25
                           + 8);
        }
        v31 = (unsigned __int16)*v30 | (*v30 >> 8) & 0xFF0000;
        if ( v31 >= 0x10000 )
        {
          if ( *(_DWORD *)v23 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v23 + 16),
                                        (unsigned __int16)*v30,
                                        1)
                 + 13) == HIWORD(v31) )
              v31 = (unsigned __int16)v31;
          }
          else
          {
            v31 = (unsigned __int16)*v30;
          }
        }
        v32 = *(_QWORD *)(v23 + 16);
        v33 = *(_DWORD *)(v32 + 2056);
        if ( v31 < v33 + ((*(unsigned __int16 *)(v32 + 2) + 0xFFFF) << 16) )
        {
          if ( v31 >= v33 )
          {
            v34 = *(_QWORD *)(v32 + 8LL * (((v31 - v33) >> 16) + 1) + 8);
            v31 += -65536 * ((v31 - v33) >> 16) - v33;
          }
          else
          {
            v34 = *(_QWORD *)(v32 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v34 + 24LL * v31 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v31 >> 8)) + 16LL * (unsigned __int8)v31,
            0LL);
          KeLeaveCriticalRegion();
        }
        v156 = 0LL;
        v157 = 0;
        KeLeaveCriticalRegion();
        goto LABEL_39;
      }
      v149 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v14 + 136);
      v150 = 2LL;
    }
    TrackObjectReferenceDecrement(v150, v149);
    goto LABEL_22;
  }
LABEL_41:
  v35 = *this;
  v160 = 0LL;
  v161 = 0;
  v36 = *((_QWORD *)v35 + 12);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v160,
    (unsigned __int16)*(_DWORD *)v36 | (*(_DWORD *)v36 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v161 )
    goto LABEL_55;
  v38 = (_DWORD *)v160;
  v39 = *(_BYTE *)(v160 + 14);
  if ( v39 == 5 )
  {
    v151 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v36 + 680);
    v152 = 0LL;
LABEL_170:
    TrackObjectReferenceDecrement(v152, v151);
    goto LABEL_44;
  }
  if ( v39 == 16 )
  {
    v151 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v36 + 136);
    v152 = 2LL;
    goto LABEL_170;
  }
LABEL_44:
  --*(_DWORD *)(v36 + 8);
  v40 = *(_QWORD *)(SGDGetSessionState(v37) + 24);
  v41 = *(GdiHandleManager **)(v40 + 8008);
  v42 = SGDGetSessionState(v40);
  v43 = *v38 & 0xFFFFFF;
  v44 = *(_QWORD *)(*(_QWORD *)(v42 + 24) + 8008LL);
  if ( v43 >= 0x10000 )
  {
    if ( *(_DWORD *)v44 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v44 + 16),
                                  (unsigned __int16)v43,
                                  1)
           + 13) == HIWORD(v43) )
        v43 = (unsigned __int16)v43;
    }
    else
    {
      v43 = (unsigned __int16)v43;
    }
  }
  v45 = *(_QWORD *)(v44 + 16);
  v46 = *(_DWORD *)(v45 + 2056);
  if ( v43 >= v46 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16)
    || (v43 >= v46
      ? (v47 = *(_QWORD *)(v45 + 8LL * (((v43 - v46) >> 16) + 1) + 8), v43 += -65536 * ((v43 - v46) >> 16) - v46)
      : (v47 = *(_QWORD *)(v45 + 8)),
        v43 >= *(_DWORD *)(v47 + 20)) )
  {
    v48 = 0LL;
  }
  else
  {
    v48 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                     + 16LL * (unsigned __int8)v43
                     + 8);
  }
  v49 = GdiHandleManager::DecodeIndex(v41, (unsigned __int16)*v48 | (*v48 >> 8) & 0xFF0000);
  v50 = *((_QWORD *)v41 + 2);
  v51 = v49;
  v52 = *(_DWORD *)(v50 + 2056);
  if ( v49 < v52 + ((*(unsigned __int16 *)(v50 + 2) + 0xFFFF) << 16) )
  {
    if ( v49 >= v52 )
    {
      v53 = *(_QWORD *)(v50 + 8LL * (((v49 - v52) >> 16) + 1) + 8);
      v51 = -65536 * ((v49 - v52) >> 16) - v52 + v49;
    }
    else
    {
      v53 = *(_QWORD *)(v50 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v53 + 24 * v51 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v53 + 24) + 8 * (v51 >> 8)) + 16LL * (unsigned __int8)v51,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
LABEL_55:
  v54 = (char *)*((_QWORD *)*this + 37);
  if ( v54 && v54 != (char *)*this + 264 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v54);
    *((_QWORD *)*this + 37) = 0LL;
  }
  v55 = (__int128 *)(v9 + 752);
  v56 = 3LL;
  v57 = (__int128 *)((char *)*this + 80);
  v58 = 3LL;
  do
  {
    v57 += 8;
    v59 = *v55;
    v55 += 8;
    *(v57 - 8) = v59;
    *(v57 - 7) = *(v55 - 7);
    *(v57 - 6) = *(v55 - 6);
    *(v57 - 5) = *(v55 - 5);
    *(v57 - 4) = *(v55 - 4);
    *(v57 - 3) = *(v55 - 3);
    *(v57 - 2) = *(v55 - 2);
    *(v57 - 1) = *(v55 - 1);
    --v58;
  }
  while ( v58 );
  *v57 = *v55;
  v57[1] = v55[1];
  v60 = (_OWORD *)*((_QWORD *)*this + 122);
  v61 = (__int128 *)(v9 + 312);
  do
  {
    v60 += 8;
    v62 = *v61;
    v61 += 8;
    *(v60 - 8) = v62;
    *(v60 - 7) = *(v61 - 7);
    *(v60 - 6) = *(v61 - 6);
    *(v60 - 5) = *(v61 - 5);
    *(v60 - 4) = *(v61 - 4);
    *(v60 - 3) = *(v61 - 3);
    *(v60 - 2) = *(v61 - 2);
    *(v60 - 1) = *(v61 - 1);
    --v56;
  }
  while ( v56 );
  v63 = *v61;
  v162 = 0LL;
  v163 = 0;
  *v60 = v63;
  v60[1] = v61[1];
  v60[2] = v61[2];
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  v64 = *((_QWORD *)*this + 17);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v162,
    (unsigned __int16)*(_DWORD *)v64 | (*(_DWORD *)v64 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v163 )
  {
    v66 = (_DWORD *)v162;
    v67 = *(_BYTE *)(v162 + 14);
    if ( v67 == 5 )
    {
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v64 + 680));
    }
    else if ( v67 == 16 )
    {
      v68 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v64 + 136);
      v65 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v65) + 24);
      if ( v68 )
      {
        v65 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v65 + 1009);
        if ( v65 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v65, v68, 1);
      }
    }
    ++*(_DWORD *)(v64 + 8);
    v69 = *(_QWORD *)(SGDGetSessionState(v65) + 24);
    v70 = *(GdiHandleManager **)(v69 + 8008);
    v71 = SGDGetSessionState(v69);
    v72 = *v66 & 0xFFFFFF;
    v73 = *(_QWORD *)(*(_QWORD *)(v71 + 24) + 8008LL);
    if ( v72 >= 0x10000 )
    {
      if ( *(_DWORD *)v73 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v73 + 16),
                                    *(unsigned __int16 *)v66,
                                    1)
             + 13) == HIWORD(v72) )
          v72 = (unsigned __int16)v72;
      }
      else
      {
        v72 = *(unsigned __int16 *)v66;
      }
    }
    v74 = *(_QWORD *)(v73 + 16);
    v75 = *(_DWORD *)(v74 + 2056);
    if ( v72 >= v75 + ((*(unsigned __int16 *)(v74 + 2) + 0xFFFF) << 16)
      || (v72 >= v75
        ? (v76 = *(_QWORD *)(v74 + 8LL * (((v72 - v75) >> 16) + 1) + 8), v72 += -65536 * ((v72 - v75) >> 16) - v75)
        : (v76 = *(_QWORD *)(v74 + 8)),
          v72 >= *(_DWORD *)(v76 + 20)) )
    {
      v77 = 0LL;
    }
    else
    {
      v77 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v76 + 24) + 8 * ((unsigned __int64)v72 >> 8))
                       + 16LL * (unsigned __int8)v72
                       + 8);
    }
    v78 = GdiHandleManager::DecodeIndex(v70, (unsigned __int16)*v77 | (*v77 >> 8) & 0xFF0000);
    v79 = *((_QWORD *)v70 + 2);
    v80 = v78;
    v81 = *(_DWORD *)(v79 + 2056);
    if ( v78 < v81 + ((*(unsigned __int16 *)(v79 + 2) + 0xFFFF) << 16) )
    {
      if ( v78 >= v81 )
      {
        v82 = *(_QWORD *)(v79 + 8LL * (((v78 - v81) >> 16) + 1) + 8);
        v80 = -65536 * ((v78 - v81) >> 16) - v81 + v78;
      }
      else
      {
        v82 = *(_QWORD *)(v79 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v82 + 24LL * v80 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v82 + 24) + 8 * ((unsigned __int64)v80 >> 8)) + 16LL * (unsigned __int8)v80,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v83 = *this;
  v164 = 0LL;
  v165 = 0;
  v84 = *((_QWORD *)v83 + 18);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v164,
    (unsigned __int16)*(_DWORD *)v84 | (*(_DWORD *)v84 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v165 )
  {
    v86 = (_DWORD *)v164;
    v87 = *(_BYTE *)(v164 + 14);
    if ( v87 == 5 )
    {
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v84 + 680));
    }
    else if ( v87 == 16 )
    {
      v88 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v84 + 136);
      v85 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v85) + 24);
      if ( v88 )
      {
        v85 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v85 + 1009);
        if ( v85 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v85, v88, 1);
      }
    }
    ++*(_DWORD *)(v84 + 8);
    v89 = *(_QWORD *)(SGDGetSessionState(v85) + 24);
    v90 = *(_QWORD *)(v89 + 8008);
    v91 = SGDGetSessionState(v89);
    v92 = *v86 & 0xFFFFFF;
    v93 = *(_QWORD *)(*(_QWORD *)(v91 + 24) + 8008LL);
    if ( v92 >= 0x10000 )
    {
      if ( *(_DWORD *)v93 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v93 + 16),
                                    *(unsigned __int16 *)v86,
                                    1)
             + 13) == HIWORD(v92) )
          v92 = (unsigned __int16)v92;
      }
      else
      {
        v92 = *(unsigned __int16 *)v86;
      }
    }
    v94 = *(_QWORD *)(v93 + 16);
    v95 = *(_DWORD *)(v94 + 2056);
    if ( v92 >= v95 + ((*(unsigned __int16 *)(v94 + 2) + 0xFFFF) << 16)
      || (v92 >= v95
        ? (v96 = *(_QWORD *)(v94 + 8LL * (((v92 - v95) >> 16) + 1) + 8), v92 += -65536 * ((v92 - v95) >> 16) - v95)
        : (v96 = *(_QWORD *)(v94 + 8)),
          v92 >= *(_DWORD *)(v96 + 20)) )
    {
      v97 = 0LL;
    }
    else
    {
      v97 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + 8 * ((unsigned __int64)v92 >> 8))
                       + 16LL * (unsigned __int8)v92
                       + 8);
    }
    v98 = (unsigned __int16)*v97;
    v99 = v98 | (*v97 >> 8) & 0xFF0000;
    if ( v99 >= 0x10000 )
    {
      if ( *(_DWORD *)v90 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v90 + 16),
                                    (unsigned __int16)v98,
                                    1)
             + 13) == HIWORD(v99) )
          v99 = (unsigned __int16)v99;
      }
      else
      {
        v99 = (unsigned __int16)v98;
      }
    }
    v100 = *(_QWORD *)(v90 + 16);
    v101 = *(_DWORD *)(v100 + 2056);
    if ( v99 < v101 + ((*(unsigned __int16 *)(v100 + 2) + 0xFFFF) << 16) )
    {
      if ( v99 >= v101 )
      {
        v102 = *(_QWORD *)(v100 + 8LL * (((v99 - v101) >> 16) + 1) + 8);
        v99 += -65536 * ((v99 - v101) >> 16) - v101;
      }
      else
      {
        v102 = *(_QWORD *)(v100 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v102 + 24LL * v99 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v102 + 24) + 8 * ((unsigned __int64)v99 >> 8)) + 16LL * (unsigned __int8)v99,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v103 = *((_QWORD *)*this + 6);
  if ( qword_1C02D5C28 && (int)qword_1C02D5C28() >= 0 && qword_1C02D5C30 )
    qword_1C02D5C30(this, *(_DWORD *)(v103 + 40) & 1);
  if ( *((_QWORD *)*this + 6) == *((_QWORD *)gpDispInfo + 5) )
    **((_DWORD **)*this + 122) |= 2u;
  v104 = *((_DWORD *)*this + 63) | 1;
  if ( !v8 )
    v104 = *((_DWORD *)*this + 63) & 0xFFFFFFFE;
  *((_DWORD *)*this + 63) = v104;
  v105 = *this;
  v166 = 0LL;
  v167 = 0;
  v106 = *((_QWORD *)v105 + 12);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v166,
    (unsigned __int16)*(_DWORD *)v106 | (*(_DWORD *)v106 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v167 )
  {
    v108 = (_DWORD *)v166;
    v109 = *(_BYTE *)(v166 + 14);
    if ( v109 == 5 )
    {
      v153 = *(_QWORD *)(v106 + 680);
      v154 = 0LL;
    }
    else
    {
      if ( v109 != 16 )
      {
LABEL_102:
        ++*(_DWORD *)(v106 + 8);
        v110 = *(_QWORD *)(SGDGetSessionState(v107) + 24);
        v111 = *(_QWORD *)(v110 + 8008);
        v112 = SGDGetSessionState(v110);
        v113 = *v108 & 0xFFFFFF;
        v114 = *(_QWORD *)(*(_QWORD *)(v112 + 24) + 8008LL);
        if ( v113 >= 0x10000 )
        {
          if ( *(_DWORD *)v114 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v114 + 16),
                                        (unsigned __int16)v113,
                                        1)
                 + 13) == HIWORD(v113) )
              v113 = (unsigned __int16)v113;
          }
          else
          {
            v113 = (unsigned __int16)v113;
          }
        }
        v115 = *(_QWORD *)(v114 + 16);
        v116 = *(_DWORD *)(v115 + 2056);
        if ( v113 >= v116 + ((*(unsigned __int16 *)(v115 + 2) + 0xFFFF) << 16)
          || (v113 >= v116
            ? (v117 = *(_QWORD *)(v115 + 8LL * (((v113 - v116) >> 16) + 1) + 8),
               v113 += -65536 * ((v113 - v116) >> 16) - v116)
            : (v117 = *(_QWORD *)(v115 + 8)),
              v113 >= *(_DWORD *)(v117 + 20)) )
        {
          v118 = 0LL;
        }
        else
        {
          v118 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v117 + 24) + 8 * ((unsigned __int64)v113 >> 8))
                            + 16LL * (unsigned __int8)v113
                            + 8);
        }
        v119 = (unsigned __int16)*v118;
        v120 = v119 | (*v118 >> 8) & 0xFF0000;
        if ( v120 >= 0x10000 )
        {
          if ( *(_DWORD *)v111 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v111 + 16),
                                        (unsigned __int16)v119,
                                        1)
                 + 13) == HIWORD(v120) )
              v120 = (unsigned __int16)v120;
          }
          else
          {
            v120 = (unsigned __int16)v119;
          }
        }
        v121 = *(_QWORD *)(v111 + 16);
        v122 = *(_DWORD *)(v121 + 2056);
        if ( v120 < v122 + ((*(unsigned __int16 *)(v121 + 2) + 0xFFFF) << 16) )
        {
          if ( v120 >= v122 )
          {
            v123 = *(_QWORD *)(v121 + 8LL * (((v120 - v122) >> 16) + 1) + 8);
            v120 += -65536 * ((v120 - v122) >> 16) - v122;
          }
          else
          {
            v123 = *(_QWORD *)(v121 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v123 + 24LL * v120 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v123 + 24) + 8 * ((unsigned __int64)v120 >> 8)) + 16LL * (unsigned __int8)v120,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_114;
      }
      v153 = *(_QWORD *)(v106 + 136);
      v154 = 2LL;
    }
    TrackObjectReferenceIncrement(v154, v153);
    goto LABEL_102;
  }
LABEL_114:
  v124 = *((_QWORD *)*this + 220);
  v171 = 0LL;
  if ( qword_1C02D5DB8 && (int)qword_1C02D5DB8() >= 0 && qword_1C02D5DC0 )
    qword_1C02D5DC0(&v171, v124);
  *((_QWORD *)*this + 220) = 0LL;
  v125 = *this;
  if ( (*((_DWORD *)*this + 10) & 1) != 0 )
  {
    v126 = *((_DWORD *)v125 + 257);
    v127 = (_DWORD *)((char *)v125 + 1024);
  }
  else
  {
    v126 = *((_DWORD *)v125 + 255);
    v127 = (_DWORD *)((char *)v125 + 1016);
  }
  *((_DWORD *)v125 + 298) = *v127;
  *((_DWORD *)v125 + 299) = v126;
  v128 = *this;
  *((_DWORD *)*this + 9) |= 0x10u;
  v129 = *(struct HOBJ__ **)(*(_QWORD *)(SGDGetSessionState(v125) + 24) + 8008LL);
  v130 = (unsigned __int16)*(_DWORD *)v128 | (*(_DWORD *)v128 >> 8) & 0xFF0000;
  v172 = v129;
  v131 = GdiHandleManager::DecodeIndex(v129, v130);
  v132 = *((_QWORD *)v129 + 2);
  v133 = v131;
  v134 = *(_DWORD *)(v132 + 2056);
  v135 = v134 + ((*(unsigned __int16 *)(v132 + 2) + 0xFFFF) << 16);
  if ( v131 >= v135 )
  {
    v137 = 0LL;
  }
  else
  {
    if ( v131 >= v134 )
    {
      v136 = *(_QWORD *)(v132 + 8LL * (((v131 - v134) >> 16) + 1) + 8);
      v131 += -65536 * ((v131 - v134) >> 16) - v134;
    }
    else
    {
      v136 = *(_QWORD *)(v132 + 8);
    }
    v137 = 0LL;
    if ( v131 < *(_DWORD *)(v136 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v136 + 24) + 8 * ((unsigned __int64)v131 >> 8))
                   + 16LL * (unsigned __int8)v131
                   + 8) )
    {
      v137 = *(_QWORD *)v136 + 24LL * v131;
    }
  }
  if ( v133 >= 0x10000 )
  {
    if ( *(_DWORD *)v172 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v132,
                                  (unsigned __int16)v133,
                                  1)
           + 13) == HIWORD(v133) )
        v133 = (unsigned __int16)v133;
    }
    else
    {
      v133 = (unsigned __int16)v133;
    }
  }
  if ( v133 >= v135
    || (v133 >= v134
      ? (v138 = *(_QWORD *)(v132 + 8LL * (((v133 - v134) >> 16) + 1) + 8), v133 += -65536 * ((v133 - v134) >> 16) - v134)
      : (v138 = *(_QWORD *)(v132 + 8)),
        v133 >= *(_DWORD *)(v138 + 20)) )
  {
    v139 = 0LL;
  }
  else
  {
    v139 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v138 + 24) + 8 * ((unsigned __int64)v133 >> 8))
                  + 16LL * (unsigned __int8)v133
                  + 8);
  }
  if ( v139 != v128 )
    v137 = 0LL;
  *(_BYTE *)(v137 + 15) |= 4u;
  v140 = *((_DWORD *)*this + 130);
  if ( (v140 & 1) != 0 && (v140 & 2) == 0 )
    DC::vClearDpiScaling(*this);
  if ( v171 )
  {
    if ( (*(_DWORD *)(v171 + 712) & 0x81) != 0 && (int)IsRFONTOBJ_dtorHelperSupported() >= 0 && qword_1C02D5D40 )
      qword_1C02D5D40(&v171);
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v171);
  }
  return 1LL;
}
