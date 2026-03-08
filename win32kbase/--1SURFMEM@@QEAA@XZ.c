/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0
 * Callers:
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C000A360 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001CE8C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C00577F0 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005AD80 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005B3C4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C01878E0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004A980 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C005168C (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0052144 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C0052198 (-ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00C426C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00EE72C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C01853AC (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     EngFreeUserMem @ 0x1C0196E00 (EngFreeUserMem.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C019A314 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 *v1; // rbx
  _DWORD *v3; // r15
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // r14
  _BYTE *v16; // rsi
  __int64 v17; // r13
  _QWORD *v18; // rax
  bool v19; // zf
  char v20; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned int v28; // r9d
  __int64 v29; // r8
  unsigned int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // r10
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r14
  struct _ERESOURCE *v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE *v44; // r14
  __int64 v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  unsigned int v49; // r9d
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // r12
  unsigned int v54; // eax
  __int64 v55; // r13
  unsigned int v56; // r10d
  unsigned int v57; // r14d
  __int64 v58; // r8
  __int64 v59; // rdi
  unsigned int v60; // eax
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  char v65; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v66; // rbx
  __int64 v67; // rcx
  _BYTE *v68; // r12
  int v69; // ebx
  signed int v70; // r14d
  __int64 v71; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // r13
  struct _ERESOURCE *v77; // r12
  __int64 v78; // r12
  int v79; // edx
  __int64 v80; // rcx
  int v81; // r8d
  __int64 v82; // rdi
  __int64 v83; // r12
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // r8d
  struct _ERESOURCE *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  char EtwGdiHandleType; // r13
  __int64 v91; // rcx
  __int64 v92; // rdi
  unsigned int v93; // eax
  __int64 v94; // r8
  unsigned __int64 v95; // rdx
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 *v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // rdi
  __int64 v102; // rbx
  unsigned int v103; // eax
  __int64 v104; // r8
  unsigned __int64 v105; // rdx
  unsigned int v106; // r9d
  __int64 v107; // rax
  _DWORD *v108; // r14
  unsigned int v109; // r12d
  __int64 v110; // rax
  GdiHandleEntryDirectory *v111; // rbx
  __int64 v112; // rcx
  __int64 *v113; // rax
  __int64 v114; // rcx
  void *v115; // rdi
  void *v116; // rbx
  __int128 v117; // xmm1
  __int128 v118; // xmm0
  __int128 v119; // xmm1
  __int128 v120; // xmm0
  __int64 v121; // rbx
  __int64 v122; // rdi
  void *v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rbx
  __int64 v126; // rdi
  __int64 v127; // rcx
  __int64 v128; // rcx
  int v129; // r8d
  struct _ERESOURCE *v130; // rcx
  __int64 CurrentThreadProcess; // rax
  __int16 v132; // r12
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v133; // rcx
  _QWORD *ProcessWin32Process; // rax
  _DWORD *v135; // rax
  int v136; // r8d
  unsigned int v137; // ebx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 ThreadWin32Thread; // r14
  __int64 CurrentProcess; // rax
  __int64 v144; // rax
  __int64 v145; // rcx
  struct _KPROCESS *v146; // r14
  _QWORD *v147; // r14
  _QWORD *v148; // rax
  _QWORD *v149; // rcx
  _QWORD *v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v154; // [rsp+50h] [rbp-39h]
  _OWORD v155[4]; // [rsp+68h] [rbp-21h] BYREF
  PEPROCESS v156; // [rsp+F0h] [rbp+67h] BYREF
  PEPROCESS Process; // [rsp+F8h] [rbp+6Fh] BYREF
  struct GdiHandleEntryTable *v158; // [rsp+100h] [rbp+77h] BYREF
  struct OBJECT *v159; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(__int64 **)this;
  if ( !*(_QWORD *)this )
    return;
  v3 = 0LL;
  if ( (*((_BYTE *)this + 8) & 1) == 0 )
  {
    v132 = *((_DWORD *)this + 3) != 0;
    v34 = *v1;
    SGDGetSessionState(this);
    v37 = *(_QWORD *)(SGDGetSessionState(v35) + 24);
    v38 = *(struct _ERESOURCE **)(v37 + 1912);
    if ( v38 )
    {
      PsEnterPriorityRegion(v36);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v38);
    }
    v39 = *(_QWORD *)(v37 + 1912);
    v40 = *(_QWORD *)(SGDGetSessionState(v36) + 24);
    if ( *(_DWORD *)(v40 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(
        v40,
        (unsigned int)L"GreBaseGlobals.hsemHmgr",
        v41,
        v39,
        17,
        (__int64)L"GreBaseGlobals.hsemHmgr");
    Object[0] = 0LL;
    LODWORD(Object[1]) = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)Object, (unsigned __int16)v34 | ((unsigned int)v34 >> 8) & 0xFF0000, 1, 0, 0);
    if ( LODWORD(Object[1]) )
    {
      v43 = SGDGetSessionState(v42);
      v44 = Object[0];
      v45 = *(_QWORD *)(*(_QWORD *)(v43 + 24) + 8008LL);
      v46 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v45, *(_DWORD *)Object[0] & 0xFFFFFF);
      v47 = *(_QWORD *)(v45 + 16);
      v48 = v46;
      v49 = *(_DWORD *)(v47 + 2056);
      v50 = v49 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16);
      if ( v46 >= (unsigned int)v50
        || (v46 >= v49
          ? (v50 = ((v46 - v49) >> 16) + 1,
             v51 = *(_QWORD *)(v47 + 8 * v50 + 8),
             v48 = -65536 * ((v46 - v49) >> 16) - v49 + v46)
          : (v51 = *(_QWORD *)(v47 + 8)),
            (unsigned int)v48 >= *(_DWORD *)(v51 + 20)) )
      {
        v52 = 0LL;
      }
      else
      {
        v50 = 2LL * (unsigned __int8)v48;
        v52 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v51 + 24) + 8 * (v48 >> 8)) + 16LL * (unsigned __int8)v48 + 8);
      }
      if ( v44[14] == 5 && *((_WORD *)v44 + 6) == WORD1(v34) )
      {
        if ( *(_WORD *)(v52 + 12) == v132 && *(_DWORD *)(v52 + 8) == 1 )
        {
          v53 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v50) + 24) + 8008LL);
          v54 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)v53,
                  (unsigned __int16)*(_DWORD *)v52 | (*(_DWORD *)v52 >> 8) & 0xFF0000u);
          v55 = *(_QWORD *)(v53 + 16);
          v56 = v54;
          v57 = *(_DWORD *)(v55 + 2056);
          LODWORD(v156) = v57 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16);
          if ( v54 >= (unsigned int)v156 )
          {
            v59 = 0LL;
          }
          else
          {
            if ( v54 >= v57 )
            {
              v58 = *(_QWORD *)(v55 + 8LL * (((v54 - v57) >> 16) + 1) + 8);
              v54 += -65536 * ((v54 - v57) >> 16) - v57;
            }
            else
            {
              v58 = *(_QWORD *)(v55 + 8);
            }
            v59 = 0LL;
            if ( v54 < *(_DWORD *)(v58 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v58 + 24) + 8 * ((unsigned __int64)v54 >> 8))
                           + 16LL * (unsigned __int8)v54
                           + 8) )
            {
              v59 = *(_QWORD *)v58 + 24LL * v54;
            }
          }
          v60 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v53, v56);
          v62 = v60;
          if ( v60 >= (unsigned int)v156
            || (v60 >= v57
              ? (v61 = ((v60 - v57) >> 16) + 1,
                 v63 = *(_QWORD *)(v55 + 8 * v61 + 8),
                 v62 = -65536 * ((v60 - v57) >> 16) - v57 + v60)
              : (v63 = *(_QWORD *)(v55 + 8)),
                (unsigned int)v62 >= *(_DWORD *)(v63 + 20)) )
          {
            v64 = 0LL;
          }
          else
          {
            v61 = 2LL * (unsigned __int8)v62;
            v64 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v63 + 24) + 8 * (v62 >> 8)) + 16LL * (unsigned __int8)v62 + 8);
          }
          if ( v64 != v52 )
            v59 = 0LL;
          v65 = *(_BYTE *)(v59 + 14);
          if ( v65 == 5 )
          {
            v66 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v52 + 680);
            v67 = *(_QWORD *)(SGDGetSessionState(v61) + 24);
            if ( v66 )
            {
              v133 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v67 + 8040);
              if ( v133 )
                NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v133, v66, 0);
            }
          }
          else if ( v65 == 16 )
          {
            TrackObjectReferenceDecrement(
              2LL,
              *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v52 + 136));
          }
          v68 = Object[0];
          v69 = *((_DWORD *)Object[0] + 2);
          v70 = v69 & 0xFFFFFFFE;
          if ( (v69 & 0xFFFFFFFE) == 0 || v70 == -2147483630 )
          {
LABEL_80:
            EtwGdiHandleType = GetEtwGdiHandleType(v68[14]);
            v92 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v91) + 24) + 8008LL);
            v93 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v92, *(_DWORD *)v68 & 0xFFFFFF);
            v94 = *(_QWORD *)(v92 + 16);
            v95 = v93;
            v96 = *(unsigned int *)(v94 + 2056);
            v97 = (unsigned int)v96 + ((*(unsigned __int16 *)(v94 + 2) + 0xFFFF) << 16);
            if ( v93 >= (unsigned int)v97
              || (v93 >= (unsigned int)v96
                ? (v97 = ((v93 - (unsigned int)v96) >> 16) + 1,
                   v94 = *(_QWORD *)(v94 + 8 * v97 + 8),
                   v95 = -65536 * ((v93 - (unsigned int)v96) >> 16) - (_DWORD)v96 + v93)
                : (v94 = *(_QWORD *)(v94 + 8)),
                  (unsigned int)v95 >= *(_DWORD *)(v94 + 20)) )
            {
              v98 = 0LL;
            }
            else
            {
              v97 = 2LL * (unsigned __int8)v95;
              v98 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v94 + 24) + 8 * (v95 >> 8)) + 16LL * (unsigned __int8)v95 + 8);
            }
            v99 = *v98;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
            {
              v135 = (_DWORD *)SGDGetUserSessionState(v97, v98, v94, v96);
              McTemplateK0pqqq_EtwWriteTransfer(
                *v135,
                (unsigned int)&GdiDestroyHandle,
                v136,
                v99,
                EtwGdiHandleType,
                *v135,
                v70);
            }
            v68[14] = 0;
            *((_QWORD *)v68 + 2) = 0LL;
            *((_DWORD *)v68 + 2) = v69 & 1;
            v100 = *(_QWORD *)(SGDGetSessionState(v97) + 24);
            v101 = *(_QWORD *)(v100 + 8008);
            v102 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v100) + 24) + 8008LL);
            v103 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v102, *(_DWORD *)v68 & 0xFFFFFF);
            v104 = *(_QWORD *)(v102 + 16);
            v105 = v103;
            v106 = *(_DWORD *)(v104 + 2056);
            if ( v103 >= v106 + ((*(unsigned __int16 *)(v104 + 2) + 0xFFFF) << 16)
              || (v103 >= v106
                ? (v107 = *(_QWORD *)(v104 + 8LL * (((v103 - v106) >> 16) + 1) + 8),
                   v105 = -65536 * (((unsigned int)v105 - v106) >> 16) - v106 + (unsigned int)v105)
                : (v107 = *(_QWORD *)(v104 + 8)),
                  (unsigned int)v105 >= *(_DWORD *)(v107 + 20)) )
            {
              v108 = 0LL;
            }
            else
            {
              v108 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v107 + 24) + 8 * (v105 >> 8))
                                + 16LL * (unsigned __int8)v105
                                + 8);
            }
            v109 = GdiHandleManager::DecodeIndex(
                     (GdiHandleEntryDirectory **)v101,
                     (unsigned __int16)*v108 | (*v108 >> 8) & 0xFF0000u);
            v110 = *(_QWORD *)(v101 + 24);
            if ( v110 )
            {
              v137 = *(_DWORD *)(v110 + 4LL * (unsigned __int16)v109);
              if ( v137 )
              {
                if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v101 + 16), v137, 1) )
                  GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v101 + 16), v137, 1);
                *(_DWORD *)(*(_QWORD *)(v101 + 24) + 4LL * (unsigned __int16)v109) = 0;
                --*(_DWORD *)(v101 + 4);
              }
            }
            v111 = *(GdiHandleEntryDirectory **)(v101 + 16);
            v158 = 0LL;
            LODWORD(v156) = 0;
            if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v111, v109, &v158, (unsigned int *)&v156) )
            {
              GdiHandleEntryTable::ReleaseLockAndEntry(v158, (unsigned int)v156, 0);
              *(_BYTE *)v111 = 0;
            }
            *(_QWORD *)v108 = 0LL;
            --*(_DWORD *)(v101 + 4);
            KeLeaveCriticalRegion();
            GreReleaseHmgrSemaphore(v112);
            if ( (*((_BYTE *)this + 8) & 8) != 0 && *(_QWORD *)(*(_QWORD *)this + 128LL) )
            {
              v159 = *(struct OBJECT **)(*(_QWORD *)this + 128LL);
              XEPALOBJ::vUnrefPalette(&v159);
              *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
            }
            if ( *((_DWORD *)this + 3) )
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
            v113 = *(__int64 **)this;
            v114 = *(unsigned __int16 *)(*(_QWORD *)this + 102LL);
            v115 = *(void **)(*(_QWORD *)this + 72LL);
            v116 = *(void **)(*(_QWORD *)this + 248LL);
            v117 = *(_OWORD *)(*(_QWORD *)this + 288LL);
            v155[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
            v118 = *((_OWORD *)v113 + 19);
            v155[1] = v117;
            v119 = *(_OWORD *)(v113 + 73);
            v155[2] = v118;
            v120 = *(_OWORD *)(v113 + 75);
            *(_OWORD *)Object = v119;
            v154 = v120;
            if ( (v114 & 8) != 0 )
            {
              if ( (v113[14] & 0x40000) != 0 && v115 )
              {
                if ( (v114 & 0x80u) == 0LL )
                {
                  EngFreeUserMem(v115);
                }
                else
                {
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  if ( *(_QWORD *)(ThreadWin32Thread + 72) )
                  {
                    CurrentProcess = PsGetCurrentProcess(v139, v138, v140, v141);
                    MmUnmapViewOfSection(CurrentProcess);
                    v144 = *(_QWORD *)(ThreadWin32Thread + 72);
                    v156 = 0LL;
                    if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v144 + 8), &v156) >= 0 )
                    {
                      MmUnmapViewOfSection(v156);
                      ObfDereferenceObject(v156);
                    }
                  }
                  if ( !Object[0] )
                    KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                  ObfDereferenceObject(Object[0]);
                }
              }
              goto LABEL_104;
            }
            if ( (v114 & 0x800) == 0 )
            {
              if ( (v114 & 0x10) != 0 )
                vFreeKernelSection(v115);
              goto LABEL_104;
            }
            v145 = *(_QWORD *)(SGDGetSessionState(v114) + 24);
            v146 = *(struct _KPROCESS **)(v145 + 104);
            v156 = v146;
            if ( v146 )
            {
              PsEnterPriorityRegion(v145);
              ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)v146);
            }
            v147 = *(_QWORD **)(*(_QWORD *)this + 264LL);
            if ( !v147 )
              goto LABEL_186;
            PsGetCurrentProcessWin32Process(v145);
            v148 = (_QWORD *)(*(_QWORD *)this + 528LL);
            v149 = (_QWORD *)*v148;
            if ( (_QWORD *)*v148 != v148 )
            {
              if ( (_QWORD *)v149[1] != v148 || (v150 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v150 != v148) )
                __fastfail(3u);
              *v150 = v149;
              v149[1] = v150;
            }
            if ( v115 && v116 )
            {
              MmUnmapViewOfSection(*v147);
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)v155);
            }
            else
            {
LABEL_186:
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)v155);
              if ( !v116 )
              {
LABEL_188:
                SEMOBJ::vUnlock((PERESOURCE *)&v156);
LABEL_104:
                v121 = *(_QWORD *)this;
                if ( *(_QWORD *)(*(_QWORD *)this + 680LL) )
                  ReleaseReferenceCountedObjectHandle(0LL);
                if ( *(_BYTE *)(v121 + 688) )
                {
                  v123 = *(void **)(v121 + 72);
                  if ( v123 )
                  {
                    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v123);
                    *(_QWORD *)(v121 + 72) = 0LL;
                  }
                }
                v122 = **(_QWORD **)(*(_QWORD *)(SGDGetSessionState(v114) + 24) + 6504LL);
                if ( v122 )
                {
                  memset((void *)v121, 0, 0x360uLL);
                  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v122 + 48), (PVOID)v121);
                }
                return;
              }
            }
            ObfDereferenceObject(v116);
            goto LABEL_188;
          }
          Process = 0LL;
          if ( v70 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v71);
            v74 = CurrentProcessWin32Process;
            if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
              v74 = 0LL;
          }
          else
          {
            if ( PsLookupProcessByProcessId((HANDLE)v70, &Process) < 0 )
            {
LABEL_78:
              if ( Process )
                ObfDereferenceObject(Process);
              goto LABEL_80;
            }
            ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
            v74 = ProcessWin32Process;
            if ( ProcessWin32Process && !*ProcessWin32Process )
              v74 = 0LL;
          }
          if ( v74 )
          {
            v76 = *(_QWORD *)(SGDGetSessionState(v73) + 24);
            v77 = *(struct _ERESOURCE **)(v76 + 1912);
            if ( v77 )
            {
              PsEnterPriorityRegion(v75);
              ExEnterCriticalRegionAndAcquireResourceExclusive(v77);
            }
            v78 = *(_QWORD *)(v76 + 1912);
            v80 = *(_QWORD *)(SGDGetSessionState(v75) + 24);
            if ( *(_DWORD *)(v80 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pqz_EtwWriteTransfer(v80, v79, v81, v78, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
            --*((_DWORD *)v74 + 15);
            v82 = *(_QWORD *)(SGDGetSessionState(v80) + 24);
            v83 = *(_QWORD *)(v82 + 1912);
            v85 = *(_QWORD *)(SGDGetSessionState(v84) + 24);
            if ( *(_DWORD *)(v85 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v85,
                (unsigned int)&LockRelease,
                v86,
                v83,
                (__int64)L"GreBaseGlobals.hsemHmgr");
            v87 = *(struct _ERESOURCE **)(v82 + 1912);
            if ( v87 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v87);
              PsLeavePriorityRegion(v89, v88);
            }
            v68 = Object[0];
          }
          goto LABEL_78;
        }
        v44[15] |= 8u;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)Object);
      if ( LODWORD(Object[1]) )
        HANDLELOCK::vUnlock((HANDLELOCK *)Object);
      v125 = *(_QWORD *)(SGDGetSessionState(v124) + 24);
      v126 = *(_QWORD *)(v125 + 1912);
      v128 = *(_QWORD *)(SGDGetSessionState(v127) + 24);
      if ( *(_DWORD *)(v128 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v128,
          (unsigned int)&LockRelease,
          v129,
          v126,
          (__int64)L"GreBaseGlobals.hsemHmgr");
      v130 = *(struct _ERESOURCE **)(v125 + 1912);
      if ( v130 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v130);
        PsLeavePriorityRegion(v152, v151);
      }
    }
    else
    {
      GreReleaseHmgrSemaphore(v42);
    }
    *(_WORD *)(*(_QWORD *)this + 14LL) |= 0x4000u;
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    HmgDecrementShareReferenceCountEx(*(int **)this, 0LL);
    return;
  }
  v4 = *(_DWORD *)v1;
  v5 = *(_DWORD *)v1;
  Process = 0LL;
  v6 = (unsigned __int16)v4 | (v5 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&Process);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    SGDGetUserSessionState(v8, v7, v9, v10);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  LODWORD(Object[1]) = 1;
  v11 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  v12 = *(_QWORD *)(v11 + 8008);
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v12 > 0x10000u )
    {
      v11 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *(GdiHandleEntryDirectory **)(v12 + 16),
                                   (unsigned __int16)v6,
                                   1)
            + 13);
      if ( (_DWORD)v11 == HIWORD(v6) )
        v6 = (unsigned __int16)v6;
    }
    else
    {
      v6 = (unsigned __int16)v6;
    }
  }
  v13 = *(_QWORD *)(v12 + 16);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v6 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    goto LABEL_34;
  if ( v6 >= v14 )
  {
    v11 = ((v6 - v14) >> 16) + 1;
    v15 = *(_QWORD *)(v13 + 8 * v11 + 8);
    v6 += -65536 * ((v6 - v14) >> 16) - v14;
  }
  else
  {
    v15 = *(_QWORD *)(v13 + 8);
  }
  v16 = 0LL;
  if ( v6 < *(_DWORD *)(v15 + 20) )
  {
    v17 = 16LL * (unsigned __int8)v6;
    v18 = *(_QWORD **)(v15 + 24);
    v158 = (struct GdiHandleEntryTable *)(8 * ((unsigned __int64)v6 >> 8));
    v156 = (PEPROCESS)(v17 + *(_QWORD *)((char *)v158 + *v18));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v156, 0LL);
    if ( v6 < *(_DWORD *)(v15 + 20) && *(_QWORD *)(*(_QWORD *)((char *)v158 + **(_QWORD **)(v15 + 24)) + v17 + 8) )
    {
      v11 = 24LL * v6;
      *(_DWORD *)(v11 + *(_QWORD *)v15 + 8) |= 1u;
      v16 = (_BYTE *)(v11 + *(_QWORD *)v15);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v156, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  Object[0] = v16;
  if ( !v16 )
    goto LABEL_34;
  _m_prefetchw(v16 + 8);
  v19 = (v16[15] & 0x20) == 0;
  HIDWORD(Object[1]) = *((_DWORD *)v16 + 2);
  if ( v19 )
  {
LABEL_17:
    v20 = v16[14];
    if ( v20 == 5 )
    {
      v21 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v1[85];
      v11 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
      if ( v21 )
      {
        v11 = *(_QWORD *)(v11 + 8040);
        if ( v11 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v11,
            v21,
            0);
      }
    }
    else if ( v20 == 16 )
    {
      TrackObjectReferenceDecrement(
        2LL,
        (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v1[17]);
    }
    --*((_DWORD *)v1 + 2);
    v22 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
    v23 = *(_QWORD *)(v22 + 8008);
    v24 = SGDGetSessionState(v22);
    v25 = *(_DWORD *)v16 & 0xFFFFFF;
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 24) + 8008LL);
    if ( v25 >= 0x10000 )
    {
      if ( *(_DWORD *)v26 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v26 + 16),
                                    *(unsigned __int16 *)v16,
                                    1)
             + 13) == HIWORD(v25) )
          v25 = (unsigned __int16)v25;
      }
      else
      {
        v25 = *(unsigned __int16 *)v16;
      }
    }
    v27 = *(_QWORD *)(v26 + 16);
    v28 = *(_DWORD *)(v27 + 2056);
    if ( v25 < v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
    {
      if ( v25 >= v28 )
      {
        v29 = *(_QWORD *)(v27 + 8LL * (((v25 - v28) >> 16) + 1) + 8);
        v25 += -65536 * ((v25 - v28) >> 16) - v28;
      }
      else
      {
        v29 = *(_QWORD *)(v27 + 8);
      }
      if ( v25 < *(_DWORD *)(v29 + 20) )
        v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                        + 16LL * (unsigned __int8)v25
                        + 8);
    }
    v30 = (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000;
    if ( v30 >= 0x10000 )
    {
      if ( *(_DWORD *)v23 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v23 + 16),
                                    (unsigned __int16)*v3,
                                    1)
             + 13) == HIWORD(v30) )
          v30 = (unsigned __int16)v30;
      }
      else
      {
        v30 = (unsigned __int16)*v3;
      }
    }
    v31 = *(_QWORD *)(v23 + 16);
    v32 = *(_DWORD *)(v31 + 2056);
    if ( v30 < v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    {
      if ( v30 >= v32 )
      {
        v33 = *(_QWORD *)(v31 + 8LL * (((v30 - v32) >> 16) + 1) + 8);
        v30 += -65536 * ((v30 - v32) >> 16) - v32;
      }
      else
      {
        v33 = *(_QWORD *)(v31 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v33 + 24LL * v30 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v30 >> 8)) + 16LL * (unsigned __int8)v30,
        0LL);
      KeLeaveCriticalRegion();
    }
LABEL_34:
    KeLeaveCriticalRegion();
    return;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)Object);
  if ( LODWORD(Object[1]) )
  {
    v16 = Object[0];
    goto LABEL_17;
  }
}
