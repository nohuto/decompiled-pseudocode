void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int128 v8; // xmm0
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  int v16; // edi
  __int64 v17; // rax
  LONG v18; // edi
  LONG v19; // esi
  int *v20; // rdi
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  GdiHandleManager *v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rdi
  unsigned int v30; // r12d
  unsigned int v31; // edx
  __int64 CurrentThread; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  _QWORD *v35; // rax
  char v36; // al
  GdiHandleManager *v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  unsigned int v41; // r9d
  __int64 v42; // r8
  __int64 v43; // rcx
  GdiHandleManager *v44; // r15
  GdiHandleManager *v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  unsigned int v49; // r9d
  __int64 v50; // r8
  _DWORD *v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // r10
  unsigned int v54; // edx
  unsigned int v55; // r8d
  __int64 v56; // r10
  int v57; // eax
  HDC v58; // r12
  int v59; // eax
  unsigned int v60; // edx
  __int64 v61; // rcx
  _DWORD *v62; // rsi
  BOOL v63; // r15d
  char v64; // al
  __int64 v65; // rcx
  GdiHandleManager *v66; // r14
  GdiHandleManager *v67; // rdi
  unsigned int v68; // eax
  __int64 v69; // r8
  unsigned __int64 v70; // rdx
  unsigned int v71; // r9d
  __int64 v72; // r8
  _DWORD *v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // r10
  unsigned int v76; // edx
  unsigned int v77; // r8d
  __int64 v78; // r10
  __int64 v79; // r15
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  GdiHandleEntryDirectory **v85; // rdi
  unsigned int v86; // eax
  struct _ENTRY *v87; // rax
  __int64 v88; // rcx
  int *v89; // r14
  char v90; // al
  GdiHandleManager *v91; // rdi
  unsigned int v92; // eax
  __int64 v93; // r8
  unsigned __int64 v94; // rdx
  unsigned int v95; // r9d
  __int64 v96; // r8
  __int64 v97; // rcx
  GdiHandleManager *v98; // r15
  GdiHandleManager *v99; // rdi
  unsigned int v100; // eax
  __int64 v101; // r8
  unsigned __int64 v102; // rdx
  unsigned int v103; // r9d
  __int64 v104; // r8
  _DWORD *v105; // rdx
  unsigned int v106; // eax
  __int64 v107; // r10
  unsigned int v108; // edx
  unsigned int v109; // r8d
  __int64 v110; // r10
  HDC v111; // r12
  int v112; // eax
  unsigned int v113; // edx
  __int64 v114; // rcx
  _DWORD *v115; // r15
  char v116; // al
  BOOL v117; // r14d
  __int64 v118; // rcx
  GdiHandleManager *v119; // rsi
  GdiHandleManager *v120; // rdi
  unsigned int v121; // eax
  __int64 v122; // r8
  unsigned __int64 v123; // rdx
  unsigned int v124; // r9d
  __int64 v125; // r8
  unsigned int v126; // eax
  __int64 v127; // r8
  unsigned int v128; // edx
  unsigned int v129; // r9d
  __int64 v130; // r8
  __m128i v131; // xmm1
  __int64 v132; // rax
  unsigned __int64 v133; // xmm0_8
  __int64 v134; // rax
  __int128 v135; // xmm0
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v137; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  struct OBJECT *v141; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v142; // rdx
  __int64 v143; // rcx
  __int128 v144; // [rsp+30h] [rbp-79h] BYREF
  int *v145; // [rsp+40h] [rbp-69h] BYREF
  int v146; // [rsp+48h] [rbp-61h]
  int v147; // [rsp+4Ch] [rbp-5Dh]
  int v148; // [rsp+50h] [rbp-59h]
  __int64 v149; // [rsp+58h] [rbp-51h] BYREF
  int v150; // [rsp+60h] [rbp-49h]
  int v151; // [rsp+64h] [rbp-45h]
  __int128 v152; // [rsp+70h] [rbp-39h] BYREF
  __int64 v153; // [rsp+80h] [rbp-29h] BYREF
  int v154; // [rsp+88h] [rbp-21h]
  __int64 v155; // [rsp+98h] [rbp-11h] BYREF
  int v156; // [rsp+A0h] [rbp-9h]
  __m128i v157; // [rsp+B0h] [rbp+7h]
  struct _POINTL v159; // [rsp+118h] [rbp+6Fh] BYREF
  int v160; // [rsp+120h] [rbp+77h]
  __int64 v161; // [rsp+128h] [rbp+7Fh] BYREF

  v160 = a3;
  v3 = *((_QWORD *)a2 + 2);
  v144 = 0LL;
  v6 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(v6 + 42) & 0x2FFF) == 0x29D )
  {
    v131 = *(__m128i *)(*(_QWORD *)gpDispInfo + 24LL);
    v132 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v133 = _mm_srli_si128(v131, 8).m128i_u64[0];
    v9 = v133 - v132;
    v10 = HIDWORD(v133) - HIDWORD(v132);
    DWORD2(v144) = v133 - v132;
    v7 = *((_DWORD *)a2 + 16);
    HIDWORD(v144) = HIDWORD(v133) - HIDWORD(v132);
    v157 = v131;
  }
  else
  {
    v7 = *((_DWORD *)a2 + 16);
    if ( (v7 & 1) != 0 )
      v8 = *(_OWORD *)(v6 + 88);
    else
      v8 = *(_OWORD *)(v6 + 104);
    v144 = v8;
    v9 = DWORD2(v8);
    v10 = HIDWORD(v8);
  }
  v11 = *((_QWORD *)a2 + 11);
  if ( v11 )
  {
    if ( (v7 & 0x4000) == 0 )
    {
      v152 = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 28LL);
      LODWORD(v144) = v144 - v152;
      v9 -= v152;
      DWORD2(v144) = v9;
      DWORD1(v144) -= DWORD1(v152);
      v10 -= DWORD1(v152);
      HIDWORD(v144) = v10;
      if ( a1 )
        SetMonitorRegion((struct tagMONITOR *)v11, a1, a1);
    }
  }
  v12 = 0LL;
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_113;
  if ( qword_1C02D6C00 && (int)qword_1C02D6C00() >= 0 )
  {
    v13 = qword_1C02D6C08 ? qword_1C02D6C08(*((_QWORD *)a2 + 2)) : 0LL;
    if ( v13 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 24LL) & 0x20000000) != 0
        && qword_1C02D6C10
        && (int)qword_1C02D6C10() >= 0
        && qword_1C02D6C18
        && qword_1C02D6C18(v13) )
      {
        v14 = *(_QWORD *)(v13 + 40);
        v15 = *(_DWORD *)(v14 + 88);
        v16 = *(_DWORD *)(v14 + 92);
        v17 = *((_QWORD *)a2 + 11);
        if ( v17 && *((int *)a2 + 16) < 0 )
        {
          v134 = *(_QWORD *)(v17 + 40);
          LODWORD(v144) = v15 + v144;
          DWORD1(v144) += v16;
          v135 = *(_OWORD *)(v134 + 28);
          DWORD2(v144) = v15 + v9;
          HIDWORD(v144) = v16 + v10;
          v152 = v135;
          IntersectRect(&v144, (int *)&v144, (int *)&v152);
          v10 = HIDWORD(v144);
          v9 = DWORD2(v144);
        }
        v18 = -v16;
        v19 = -v15;
        LODWORD(v144) = v19 + v144;
        DWORD1(v144) += v18;
        DWORD2(v144) = v19 + v9;
        HIDWORD(v144) = v18 + v10;
        if ( a1 )
        {
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v145, a1, 0, 0);
          v159.y = v18;
          v20 = v145;
          v159.x = v19;
          if ( v145 )
          {
            RGNOBJ::bOffset(&v145, &v159);
            v20 = v145;
          }
          if ( !v148 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v145);
          if ( v20 )
            _InterlockedDecrement(v20 + 3);
        }
        goto LABEL_25;
      }
LABEL_113:
      if ( a1 )
        GreSetRectRgn(a1, 0, 0, 0, 0);
    }
  }
LABEL_25:
  v21 = *((_QWORD *)a2 + 1);
  v22 = 0LL;
  v161 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v161);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    SGDGetUserSessionState(v24, v23, v25, v26);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v150 = 1;
  v27 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v24) + 24) + 8008LL);
  v28 = GdiHandleManager::DecodeIndex(v27, (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000);
  v29 = *((_QWORD *)v27 + 2);
  v30 = v28;
  v31 = *(_DWORD *)(v29 + 2056);
  CurrentThread = v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16);
  if ( v28 >= (unsigned int)CurrentThread )
    goto LABEL_54;
  if ( v28 >= v31 )
  {
    CurrentThread = ((v28 - v31) >> 16) + 1;
    v33 = *(_QWORD *)(v29 + 8 * CurrentThread + 8);
    v30 = -65536 * ((v28 - v31) >> 16) - v31 + v28;
  }
  else
  {
    v33 = *(_QWORD *)(v29 + 8);
  }
  v34 = 0LL;
  if ( v30 < *(_DWORD *)(v33 + 20) )
  {
    *(_QWORD *)&v152 = 16LL * (unsigned __int8)v30;
    v35 = *(_QWORD **)(v33 + 24);
    v157.m128i_i64[0] = 8 * ((unsigned __int64)v30 >> 8);
    v159 = (struct _POINTL)(v152 + *(_QWORD *)(*v35 + v157.m128i_i64[0]));
    KeEnterCriticalRegion();
    ((void (__fastcall *)(_QWORD, _QWORD))ExAcquirePushLockExclusiveEx)(v159, 0LL);
    if ( v30 < *(_DWORD *)(v33 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + v157.m128i_i64[0]) + v152 + 8) )
    {
      CurrentThread = 24LL * v30;
      *(_DWORD *)(CurrentThread + *(_QWORD *)v33 + 8) |= 1u;
      v34 = CurrentThread + *(_QWORD *)v33;
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD))ExReleasePushLockExclusiveEx)(v159, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v149 = v34;
  if ( !v34 )
    goto LABEL_55;
  _m_prefetchw((const void *)(v34 + 8));
  v151 = *(_DWORD *)(v34 + 8);
  v36 = *(_BYTE *)(v34 + 15);
  if ( (v36 & 0x20) != 0 )
    goto LABEL_125;
  if ( (v36 & 0x40) == 0 )
    goto LABEL_37;
  v137 = HANDLELOCK::pObj((HANDLELOCK *)&v149);
  if ( !*((_WORD *)v137 + 6) || (CurrentThread = (__int64)KeGetCurrentThread(), *((_QWORD *)v137 + 2) != CurrentThread) )
  {
LABEL_125:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v149);
    if ( !v150 )
      goto LABEL_56;
  }
  v34 = v149;
LABEL_37:
  if ( *(_BYTE *)(v34 + 14) == 1 && *(_WORD *)(v34 + 12) == WORD1(v21) )
  {
    v37 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(CurrentThread) + 24) + 8008LL);
    v38 = GdiHandleManager::DecodeIndex(v37, *(_DWORD *)v34 & 0xFFFFFF);
    v39 = *((_QWORD *)v37 + 2);
    v40 = v38;
    v41 = *(_DWORD *)(v39 + 2056);
    CurrentThread = v41 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16);
    if ( v38 < (unsigned int)CurrentThread )
    {
      if ( v38 >= v41 )
      {
        CurrentThread = ((v38 - v41) >> 16) + 1;
        v42 = *(_QWORD *)(v39 + 8 * CurrentThread + 8);
        v40 = -65536 * ((v38 - v41) >> 16) - v41 + v38;
      }
      else
      {
        v42 = *(_QWORD *)(v39 + 8);
      }
      if ( (unsigned int)v40 < *(_DWORD *)(v42 + 20) )
      {
        CurrentThread = 2LL * (unsigned __int8)v40;
        v22 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * (v40 >> 8)) + 16LL * (unsigned __int8)v40 + 8);
      }
    }
    ++*(_DWORD *)(v22 + 8);
  }
  v43 = *(_QWORD *)(SGDGetSessionState(CurrentThread) + 24);
  v44 = *(GdiHandleManager **)(v43 + 8008);
  v45 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v43) + 24) + 8008LL);
  v46 = GdiHandleManager::DecodeIndex(v45, *(_DWORD *)v34 & 0xFFFFFF);
  v47 = *((_QWORD *)v45 + 2);
  v48 = v46;
  v49 = *(_DWORD *)(v47 + 2056);
  if ( v46 >= v49 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16)
    || (v46 >= v49
      ? (v50 = *(_QWORD *)(v47 + 8LL * (((v46 - v49) >> 16) + 1) + 8), v48 = -65536 * ((v46 - v49) >> 16) - v49 + v46)
      : (v50 = *(_QWORD *)(v47 + 8)),
        (unsigned int)v48 >= *(_DWORD *)(v50 + 20)) )
  {
    v51 = 0LL;
  }
  else
  {
    v51 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v50 + 24) + 8 * (v48 >> 8)) + 16LL * (unsigned __int8)v48 + 8);
  }
  v52 = GdiHandleManager::DecodeIndex(v44, (unsigned __int16)*v51 | (*v51 >> 8) & 0xFF0000);
  v53 = *((_QWORD *)v44 + 2);
  v54 = v52;
  v55 = *(_DWORD *)(v53 + 2056);
  if ( v52 < v55 + ((*(unsigned __int16 *)(v53 + 2) + 0xFFFF) << 16) )
  {
    if ( v52 >= v55 )
    {
      v56 = *(_QWORD *)(v53 + 8LL * (((v52 - v55) >> 16) + 1) + 8);
      v54 = -65536 * ((v52 - v55) >> 16) - v55 + v52;
    }
    else
    {
      v56 = *(_QWORD *)(v53 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v56 + 24LL * v54 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v56 + 24) + 8 * ((unsigned __int64)v54 >> 8)) + 16LL * (unsigned __int8)v54,
      0LL);
    KeLeaveCriticalRegion();
  }
LABEL_54:
  v149 = 0LL;
LABEL_55:
  v150 = 0;
  KeLeaveCriticalRegion();
LABEL_56:
  if ( !v22 )
    goto LABEL_72;
  *(_QWORD *)(v22 + 8LL * (*(_DWORD *)(v22 + 40) & 1) + 1016) = v144;
  DC::vCalcFillOrigin((DC *)v22);
  v57 = *(_DWORD *)(v22 + 520);
  *(_OWORD *)(v22 + 1032) = v144;
  if ( (v57 & 1) != 0 && (v57 & 2) == 0 )
  {
    *(_DWORD *)(v22 + 36) |= 0x10u;
    *(_DWORD *)(v22 + 520) = v57 | 4;
  }
  v58 = *(HDC *)v22;
  v59 = (unsigned __int16)*(_QWORD *)v22;
  v60 = ((unsigned int)*(_QWORD *)v22 >> 8) & 0xFF0000;
  v153 = 0LL;
  v154 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v153, v59 | v60, 0, 0, 1);
  if ( !v154 )
    goto LABEL_72;
  v62 = (_DWORD *)v153;
  v63 = (*(_BYTE *)(v153 + 15) & 8) != 0;
  v64 = *(_BYTE *)(v153 + 14);
  if ( v64 == 5 )
  {
    v138 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v22 + 680);
    v139 = 0LL;
  }
  else
  {
    if ( v64 != 16 )
      goto LABEL_61;
    v138 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v22 + 136);
    v139 = 2LL;
  }
  TrackObjectReferenceDecrement(v139, v138);
LABEL_61:
  --*(_DWORD *)(v22 + 8);
  v65 = *(_QWORD *)(SGDGetSessionState(v61) + 24);
  v66 = *(GdiHandleManager **)(v65 + 8008);
  v67 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v65) + 24) + 8008LL);
  v68 = GdiHandleManager::DecodeIndex(v67, *v62 & 0xFFFFFF);
  v69 = *((_QWORD *)v67 + 2);
  v70 = v68;
  v71 = *(_DWORD *)(v69 + 2056);
  if ( v68 >= v71 + ((*(unsigned __int16 *)(v69 + 2) + 0xFFFF) << 16)
    || (v68 >= v71
      ? (v72 = *(_QWORD *)(v69 + 8LL * (((v68 - v71) >> 16) + 1) + 8), v70 = -65536 * ((v68 - v71) >> 16) - v71 + v68)
      : (v72 = *(_QWORD *)(v69 + 8)),
        (unsigned int)v70 >= *(_DWORD *)(v72 + 20)) )
  {
    v73 = 0LL;
  }
  else
  {
    v73 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v72 + 24) + 8 * (v70 >> 8)) + 16LL * (unsigned __int8)v70 + 8);
  }
  v74 = GdiHandleManager::DecodeIndex(v66, (unsigned __int16)*v73 | (*v73 >> 8) & 0xFF0000);
  v75 = *((_QWORD *)v66 + 2);
  v76 = v74;
  v77 = *(_DWORD *)(v75 + 2056);
  if ( v74 < v77 + ((*(unsigned __int16 *)(v75 + 2) + 0xFFFF) << 16) )
  {
    if ( v74 >= v77 )
    {
      v78 = *(_QWORD *)(v75 + 8LL * (((v74 - v77) >> 16) + 1) + 8);
      v76 = -65536 * ((v74 - v77) >> 16) - v77 + v74;
    }
    else
    {
      v78 = *(_QWORD *)(v75 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v78 + 24LL * v76 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v78 + 24) + 8 * ((unsigned __int64)v76 >> 8)) + 16LL * (unsigned __int8)v76,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v63 )
    GrepDeleteDC(v58, 0x2000000u);
LABEL_72:
  if ( !v160 )
    return;
  v79 = *((_QWORD *)a2 + 1);
  *((_QWORD *)&v144 + 1) = 0LL;
  v80 = 0LL;
  v159 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v159);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    SGDGetUserSessionState(v82, v81, v83, v84);
    v140 = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(v140);
  }
  v146 = 1;
  v85 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(v82) + 24) + 8008LL);
  v86 = GdiHandleManager::DecodeIndex(
          (GdiHandleManager *)v85,
          (unsigned __int16)v79 | ((unsigned int)v79 >> 8) & 0xFF0000);
  v87 = GdiHandleEntryDirectory::AcquireEntryLock(v85[2], v86, 0);
  v145 = (int *)v87;
  v89 = (int *)v87;
  if ( !v87 )
  {
    KeLeaveCriticalRegion();
    *(_QWORD *)&v144 = 0LL;
    GreSelectVisRgnInternal((DC **)&v144, a1, 1);
    return;
  }
  _m_prefetchw((char *)v87 + 8);
  v147 = *((_DWORD *)v87 + 2);
  v90 = *((_BYTE *)v87 + 15);
  if ( (v90 & 0x20) != 0 )
    goto LABEL_142;
  if ( (v90 & 0x40) == 0 )
    goto LABEL_78;
  v141 = HANDLELOCK::pObj((HANDLELOCK *)&v145);
  if ( !*((_WORD *)v141 + 6) || (v88 = (__int64)KeGetCurrentThread(), *((_QWORD *)v141 + 2) != v88) )
  {
LABEL_142:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v145);
    if ( !v146 )
      goto LABEL_96;
  }
  v89 = v145;
LABEL_78:
  if ( *((_BYTE *)v89 + 14) == 1 && *((_WORD *)v89 + 6) == WORD1(v79) )
  {
    v91 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v88) + 24) + 8008LL);
    v92 = GdiHandleManager::DecodeIndex(v91, *v89 & 0xFFFFFF);
    v93 = *((_QWORD *)v91 + 2);
    v94 = v92;
    v95 = *(_DWORD *)(v93 + 2056);
    v88 = v95 + ((*(unsigned __int16 *)(v93 + 2) + 0xFFFF) << 16);
    if ( v92 < (unsigned int)v88 )
    {
      if ( v92 >= v95 )
      {
        v88 = ((v92 - v95) >> 16) + 1;
        v96 = *(_QWORD *)(v93 + 8 * v88 + 8);
        v94 = -65536 * ((v92 - v95) >> 16) - v95 + v92;
      }
      else
      {
        v96 = *(_QWORD *)(v93 + 8);
      }
      if ( (unsigned int)v94 < *(_DWORD *)(v96 + 20) )
      {
        v88 = 2LL * (unsigned __int8)v94;
        v80 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + 8 * (v94 >> 8)) + 16LL * (unsigned __int8)v94 + 8);
      }
    }
    ++*(_DWORD *)(v80 + 8);
  }
  v97 = *(_QWORD *)(SGDGetSessionState(v88) + 24);
  v98 = *(GdiHandleManager **)(v97 + 8008);
  v99 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v97) + 24) + 8008LL);
  v100 = GdiHandleManager::DecodeIndex(v99, *v89 & 0xFFFFFF);
  v101 = *((_QWORD *)v99 + 2);
  v102 = v100;
  v103 = *(_DWORD *)(v101 + 2056);
  if ( v100 >= v103 + ((*(unsigned __int16 *)(v101 + 2) + 0xFFFF) << 16)
    || (v100 >= v103
      ? (v104 = *(_QWORD *)(v101 + 8LL * (((v100 - v103) >> 16) + 1) + 8),
         v102 = -65536 * ((v100 - v103) >> 16) - v103 + v100)
      : (v104 = *(_QWORD *)(v101 + 8)),
        (unsigned int)v102 >= *(_DWORD *)(v104 + 20)) )
  {
    v105 = 0LL;
  }
  else
  {
    v105 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v104 + 24) + 8 * (v102 >> 8)) + 16LL * (unsigned __int8)v102 + 8);
  }
  v106 = GdiHandleManager::DecodeIndex(v98, (unsigned __int16)*v105 | (*v105 >> 8) & 0xFF0000);
  v107 = *((_QWORD *)v98 + 2);
  v108 = v106;
  v109 = *(_DWORD *)(v107 + 2056);
  if ( v106 < v109 + ((*(unsigned __int16 *)(v107 + 2) + 0xFFFF) << 16) )
  {
    if ( v106 >= v109 )
    {
      v110 = *(_QWORD *)(v107 + 8LL * (((v106 - v109) >> 16) + 1) + 8);
      v108 = -65536 * ((v106 - v109) >> 16) - v109 + v106;
    }
    else
    {
      v110 = *(_QWORD *)(v107 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v110 + 24LL * v108 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v110 + 24) + 8 * ((unsigned __int64)v108 >> 8)) + 16LL * (unsigned __int8)v108,
      0LL);
    KeLeaveCriticalRegion();
  }
  v146 = 0;
  v145 = 0LL;
  KeLeaveCriticalRegion();
LABEL_96:
  *(_QWORD *)&v144 = v80;
  GreSelectVisRgnInternal((DC **)&v144, a1, 1);
  if ( !v80 )
    return;
  v111 = *(HDC *)v80;
  v112 = (unsigned __int16)*(_QWORD *)v80;
  v113 = ((unsigned int)*(_QWORD *)v80 >> 8) & 0xFF0000;
  v155 = 0LL;
  v156 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v155, v112 | v113, 0, 0, 1);
  if ( !v156 )
    return;
  v115 = (_DWORD *)v155;
  v116 = *(_BYTE *)(v155 + 14);
  v117 = (*(_BYTE *)(v155 + 15) & 8) != 0;
  if ( v116 == 5 )
  {
    v142 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v80 + 680);
    v143 = 0LL;
  }
  else
  {
    if ( v116 != 16 )
      goto LABEL_100;
    v142 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v80 + 136);
    v143 = 2LL;
  }
  TrackObjectReferenceDecrement(v143, v142);
LABEL_100:
  --*(_DWORD *)(v80 + 8);
  v118 = *(_QWORD *)(SGDGetSessionState(v114) + 24);
  v119 = *(GdiHandleManager **)(v118 + 8008);
  v120 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v118) + 24) + 8008LL);
  v121 = GdiHandleManager::DecodeIndex(v120, *v115 & 0xFFFFFF);
  v122 = *((_QWORD *)v120 + 2);
  v123 = v121;
  v124 = *(_DWORD *)(v122 + 2056);
  if ( v121 < v124 + ((*(unsigned __int16 *)(v122 + 2) + 0xFFFF) << 16) )
  {
    if ( v121 >= v124 )
    {
      v125 = *(_QWORD *)(v122 + 8LL * (((v121 - v124) >> 16) + 1) + 8);
      v123 = -65536 * ((v121 - v124) >> 16) - v124 + v121;
    }
    else
    {
      v125 = *(_QWORD *)(v122 + 8);
    }
    if ( (unsigned int)v123 < *(_DWORD *)(v125 + 20) )
      v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v125 + 24) + 8 * (v123 >> 8)) + 16LL * (unsigned __int8)v123 + 8);
  }
  v126 = GdiHandleManager::DecodeIndex(v119, (unsigned __int16)*v12 | (*v12 >> 8) & 0xFF0000);
  v127 = *((_QWORD *)v119 + 2);
  v128 = v126;
  v129 = *(_DWORD *)(v127 + 2056);
  if ( v126 < v129 + ((*(unsigned __int16 *)(v127 + 2) + 0xFFFF) << 16) )
  {
    if ( v126 >= v129 )
    {
      v130 = *(_QWORD *)(v127 + 8LL * (((v126 - v129) >> 16) + 1) + 8);
      v128 = -65536 * ((v126 - v129) >> 16) - v129 + v126;
    }
    else
    {
      v130 = *(_QWORD *)(v127 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v130 + 24LL * v128 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v130 + 24) + 8 * ((unsigned __int64)v128 >> 8)) + 16LL * (unsigned __int8)v128,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v117 )
    GrepDeleteDC(v111, 0x2000000u);
}
