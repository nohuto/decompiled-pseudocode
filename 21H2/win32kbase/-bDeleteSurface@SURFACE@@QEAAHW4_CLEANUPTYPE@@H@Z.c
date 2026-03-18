/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20
 * Callers:
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0018308 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001C9F4 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0061570 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00CE0D0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C016F53C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C001EDC0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C001F220 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0021A60 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00224D0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D40 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DEC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00628E0 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C0090FC4 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A6910 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngFreeUserMem @ 0x1C00A8740 (EngFreeUserMem.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B2270 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0150614 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C016BC30 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0179828 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C017A888 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(SURFACE *a1, int a2, int a3)
{
  char *v5; // rdx
  void *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rax
  __int128 v11; // xmm0
  void *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  char v15; // si
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  struct HOBJ__ *v20; // r10
  int v21; // eax
  unsigned int v22; // r15d
  unsigned int v23; // r15d
  unsigned int v24; // ebx
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // r9
  struct _ERESOURCE *v28; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r12
  GdiHandleManager *v30; // rbx
  __int64 v31; // rbx
  unsigned int v32; // edx
  __int64 v33; // rbx
  unsigned __int16 *v34; // r12
  _QWORD *v35; // rax
  unsigned int v36; // ecx
  char v37; // al
  unsigned int v38; // ebx
  GdiHandleManager *v39; // r10
  __int64 v40; // r15
  unsigned int v41; // edx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // edx
  __int64 v47; // r8
  unsigned int v48; // eax
  __int64 v49; // r13
  unsigned int v50; // edx
  __int64 v51; // r8
  __int64 v52; // rdx
  char v53; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v54; // rdx
  int v55; // ebx
  signed int v56; // r15d
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r15
  struct _ERESOURCE *v66; // r13
  __int64 v67; // rcx
  int EtwGdiHandleType; // r8d
  _QWORD *v69; // r11
  unsigned int v70; // r15d
  __int64 v71; // rdx
  unsigned int v72; // r9d
  __int64 v73; // r8
  _QWORD *v74; // r9
  unsigned int v75; // ebx
  GdiHandleManager *v76; // r15
  __int64 v77; // rdx
  unsigned int v78; // r9d
  __int64 v79; // r8
  _DWORD *v80; // r13
  unsigned int v81; // ebx
  __int64 v82; // r8
  GdiHandleEntryDirectory *v83; // rcx
  GdiHandleEntryDirectory *v84; // r12
  unsigned int v85; // edx
  __int64 v86; // r8
  _QWORD *v87; // r10
  __int64 v88; // r11
  __int64 v89; // rcx
  int v90; // r15d
  PERESOURCE v91; // rcx
  HANDLE v92; // rbx
  HANDLE v93; // rbx
  void *v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // rbx
  __int64 v97; // rbx
  PERESOURCE v98; // rdx
  struct _ERESOURCE *v99; // rbx
  int v101; // ecx
  int v102; // r8d
  int v103; // eax
  struct _ERESOURCE *v104; // rbx
  _QWORD *v105; // rcx
  __int64 *v106; // rax
  __int64 *v107; // rdx
  __int64 **v108; // r8
  PVOID v109; // rbx
  ULONG_PTR v110; // rbx
  void (__fastcall *v111)(ULONG_PTR, unsigned __int64, __int64); // rax
  ULONG_PTR v112; // rcx
  struct _ENTRY *Entry; // rax
  int v114; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v116; // rcx
  GdiHandleManager *v117; // rbx
  unsigned int v118; // eax
  __int64 v119; // r8
  unsigned __int64 v120; // rdx
  unsigned int v121; // r9d
  __int64 v122; // r8
  __int64 v123; // rdx
  struct _ENTRY *v124; // rax
  bool v125; // cc
  struct _ENTRY *v126; // rax
  struct _ENTRY *v127; // rax
  bool v128; // r8
  unsigned int v129; // eax
  unsigned int v130; // r9d
  __int64 ThreadWin32Thread; // rdi
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 CurrentProcess; // rax
  __int64 v137; // rax
  int v138; // ecx
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  int v142; // [rsp+28h] [rbp-D8h]
  unsigned int v143[2]; // [rsp+50h] [rbp-B0h]
  unsigned int v144[2]; // [rsp+50h] [rbp-B0h]
  unsigned int v145; // [rsp+50h] [rbp-B0h]
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v148; // [rsp+68h] [rbp-98h]
  PEPROCESS Process; // [rsp+70h] [rbp-90h] BYREF
  int v150; // [rsp+78h] [rbp-88h]
  unsigned int v151; // [rsp+7Ch] [rbp-84h]
  __int64 v152; // [rsp+80h] [rbp-80h] BYREF
  GdiHandleManager *v153; // [rsp+88h] [rbp-78h]
  HSEMAPHORE v154; // [rsp+90h] [rbp-70h] BYREF
  int v155; // [rsp+98h] [rbp-68h]
  int v156; // [rsp+9Ch] [rbp-64h]
  PVOID Object; // [rsp+A0h] [rbp-60h]
  struct HOBJ__ *v158; // [rsp+A8h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v160; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v161; // [rsp+C0h] [rbp-40h] BYREF
  int v162; // [rsp+C8h] [rbp-38h]
  int v163; // [rsp+CCh] [rbp-34h]
  __int64 v164; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE v165; // [rsp+E0h] [rbp-20h]
  HANDLE SecureHandle; // [rsp+E8h] [rbp-18h]
  PERESOURCE v167; // [rsp+F0h] [rbp-10h] BYREF
  ULONG_PTR v168[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v169; // [rsp+108h] [rbp+8h]
  __int64 v170; // [rsp+118h] [rbp+18h]
  PERESOURCE Resource[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v172; // [rsp+130h] [rbp+30h]
  int v173; // [rsp+138h] [rbp+38h]
  _BYTE v174[4]; // [rsp+13Ch] [rbp+3Ch] BYREF
  _BYTE v175[56]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v176; // [rsp+178h] [rbp+78h] BYREF
  __int64 v177; // [rsp+180h] [rbp+80h] BYREF
  __int64 v178; // [rsp+188h] [rbp+88h] BYREF
  __int64 v179; // [rsp+190h] [rbp+90h]
  _OWORD v180[6]; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v181; // [rsp+210h] [rbp+110h] BYREF
  int v182; // [rsp+218h] [rbp+118h]
  unsigned int v183; // [rsp+228h] [rbp+128h]

  v182 = a2;
  v183 = 1;
  if ( a1 == SURFACE::pdibDefault || !a1 )
    return v183;
  v5 = (char *)*((_QWORD *)a1 + 9);
  SecureHandle = 0LL;
  v154 = 0LL;
  MappedBase = 0LL;
  v165 = 0LL;
  v150 = 0;
  if ( !*((_WORD *)a1 + 50) )
  {
    SecureHandle = (HANDLE)*((_QWORD *)a1 + 24);
    v154 = (HSEMAPHORE)*((_QWORD *)a1 + 23);
    v150 = *((_DWORD *)a1 + 54);
    v6 = (void *)*((_QWORD *)a1 + 28);
    MappedBase = &v5[-(unsigned __int16)*((_DWORD *)a1 + 53)];
    v165 = v6;
  }
  v7 = *((_OWORD *)a1 + 17);
  v8 = *((_OWORD *)a1 + 18);
  v9 = ghsemDynamicModeChange;
  RegionSize = *((_QWORD *)a1 + 3);
  v160 = *((_QWORD *)a1 + 16);
  v10 = *((_QWORD *)a1 + 17);
  v180[0] = v7;
  v179 = v10;
  v11 = *((_OWORD *)a1 + 19);
  v156 = *((unsigned __int16 *)a1 + 51);
  v12 = (void *)*((_QWORD *)a1 + 31);
  v180[2] = v11;
  Object = v12;
  v13 = *(_OWORD *)((char *)a1 + 584);
  LODWORD(v12) = *((_DWORD *)a1 + 80);
  v180[1] = v8;
  BaseAddress = v5;
  v14 = *(_OWORD *)((char *)a1 + 600);
  v155 = (int)v12;
  *(_OWORD *)v168 = v13;
  v170 = *((_QWORD *)a1 + 77);
  v169 = v14;
  if ( ExIsResourceAcquiredExclusiveLite(ghsemDynamicModeChange) || ExIsResourceAcquiredSharedLite(v9) )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  }
  v16 = *((_QWORD *)a1 + 6);
  v152 = v16;
  if ( (!v16 || (*((_DWORD *)a1 + 28) & 0x400000) == 0 || (*(_DWORD *)(v16 + 40) & 1) == 0) && v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
    v15 = 0;
  }
  v167 = 0LL;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v175);
  *(_OWORD *)Resource = 0LL;
  v172 = 0LL;
  v173 = 0;
  if ( qword_1C029B090 && (int)qword_1C029B090() >= 0 && qword_1C029B098 )
    qword_1C029B098(Resource, 0LL);
  v19 = (*((_DWORD *)a1 + 28) & 0x400000) == 0;
  v178 = 0LL;
  v177 = 0LL;
  v176 = 0LL;
  if ( v19 || !v16 )
  {
    *(_OWORD *)Resource = 0LL;
    v172 = 0LL;
    v173 = 0;
    if ( qword_1C029B090 && (int)qword_1C029B090() >= 0 && qword_1C029B098 )
      qword_1C029B098(Resource, 0LL);
    v178 = 0LL;
    v177 = 0LL;
    v176 = 0LL;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v167, (struct PDEVOBJ *)&v152);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)Resource, (struct PDEVOBJ *)&v152);
  }
  v20 = *(struct HOBJ__ **)a1;
  v21 = (unsigned __int16)*(_QWORD *)a1;
  v22 = ((unsigned int)*(_QWORD *)a1 >> 8) & 0xFF0000;
  v158 = *(struct HOBJ__ **)a1;
  v23 = v21 | v22;
  v151 = -2147483614;
  v24 = v23;
  if ( v23 >= 0x10000 )
  {
    v17 = (__int64)gpHandleManager;
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      Entry = GdiHandleEntryDirectory::GetEntry(
                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                (unsigned __int16)v23,
                1);
      WORD1(v20) = WORD1(v158);
      v17 = *((unsigned __int8 *)Entry + 13);
      if ( (_DWORD)v17 == HIWORD(v23) )
        v24 = (unsigned __int16)v23;
    }
    else
    {
      v24 = (unsigned __int16)v23;
    }
  }
  v25 = *((_QWORD *)gpHandleManager + 2);
  v26 = *(unsigned int *)(v25 + 2056);
  if ( v24 < (unsigned int)v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
  {
    if ( v24 >= (unsigned int)v26 )
    {
      v17 = ((v24 - (unsigned int)v26) >> 16) + 1;
      v27 = *(_QWORD *)(v25 + 8 * v17 + 8);
      v24 += -65536 * ((v24 - (unsigned int)v26) >> 16) - v26;
    }
    else
    {
      v27 = *(_QWORD *)(v25 + 8);
    }
    if ( v24 < *(_DWORD *)(v27 + 20) )
    {
      v26 = (unsigned __int64)v24 >> 8;
      v18 = v24;
      v17 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * v26) + 16LL * (unsigned __int8)v24 + 8);
      if ( v17 )
      {
        v17 = 3LL * v24;
        v26 = *(_QWORD *)v27 + 24LL * v24;
        if ( v26 )
        {
          if ( *(_BYTE *)(v26 + 14) == 5 && *(_WORD *)(v26 + 12) == WORD1(v20) )
          {
            v18 = *(_DWORD *)(v26 + 8) & 0xFFFFFFFE;
            v151 = *(_DWORD *)(v26 + 8) & 0xFFFFFFFE;
          }
        }
      }
    }
  }
  v181 = 0;
  if ( a3 )
    goto LABEL_133;
  v28 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v17, v26, v18);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v28);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", v26, v18, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  v164 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v164, v26, v18);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v114 = gSessionId,
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v114 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    *(_QWORD *)v143 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    *(_QWORD *)v143 = 0LL;
  }
  v30 = gpHandleManager;
  v162 = 1;
  if ( v23 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v23,
                                  1)
           + 13) == HIWORD(v23) )
        v23 = (unsigned __int16)v23;
    }
    else
    {
      v23 = (unsigned __int16)v23;
    }
  }
  v31 = *((_QWORD *)v30 + 2);
  v32 = *(_DWORD *)(v31 + 2056);
  if ( v23 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    goto LABEL_320;
  if ( v23 >= v32 )
  {
    v33 = *(_QWORD *)(v31 + 8LL * (((v23 - v32) >> 16) + 1) + 8);
    v23 += -65536 * ((v23 - v32) >> 16) - v32;
  }
  else
  {
    v33 = *(_QWORD *)(v31 + 8);
  }
  v34 = 0LL;
  if ( v23 >= *(_DWORD *)(v33 + 20) )
    goto LABEL_320;
  v153 = (GdiHandleManager *)(16LL * (unsigned __int8)v23);
  v35 = *(_QWORD **)(v33 + 24);
  v148 = 8 * ((unsigned __int64)v23 >> 8);
  Process = (GdiHandleManager *)((char *)v153 + *(_QWORD *)(*v35 + v148));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(Process, 0LL);
  if ( v23 < *(_DWORD *)(v33 + 20) && *(_QWORD *)((char *)v153 + *(_QWORD *)(**(_QWORD **)(v33 + 24) + v148) + 8) )
  {
    *(_DWORD *)(24LL * v23 + *(_QWORD *)v33 + 8) |= 1u;
    v34 = (unsigned __int16 *)(24LL * v23 + *(_QWORD *)v33);
  }
  else
  {
    ExReleasePushLockExclusiveEx(Process, 0LL);
    KeLeaveCriticalRegion();
  }
  v161 = v34;
  if ( !v34 )
  {
LABEL_320:
    KeLeaveCriticalRegion();
    goto LABEL_321;
  }
  _m_prefetchw(v34 + 4);
  v163 = *((_DWORD *)v34 + 2);
  v36 = v163 & 0xFFFFFFFE;
  if ( (v163 & 0xFFFFFFFE) != (v164 & 0xFFFFFFFC)
    && v36
    && (!*(_QWORD *)v143 || v36 != *(_DWORD *)(*(_QWORD *)v143 + 8LL))
    || (v37 = *((_BYTE *)v34 + 15), (v37 & 0x20) != 0) )
  {
LABEL_258:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v161);
    if ( v162 )
    {
      v34 = v161;
      goto LABEL_55;
    }
LABEL_321:
    GreReleaseHmgrSemaphore(v116);
    goto LABEL_195;
  }
  if ( (v37 & 0x40) != 0 )
  {
    v117 = gpHandleManager;
    v118 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v34 & 0xFFFFFF);
    v119 = *((_QWORD *)v117 + 2);
    v120 = v118;
    v121 = *(_DWORD *)(v119 + 2056);
    if ( v118 >= v121 + ((*(unsigned __int16 *)(v119 + 2) + 0xFFFF) << 16)
      || (v118 >= v121
        ? (v122 = *(_QWORD *)(v119 + 8LL * (((v118 - v121) >> 16) + 1) + 8),
           v120 = -65536 * ((v118 - v121) >> 16) - v121 + v118)
        : (v122 = *(_QWORD *)(v119 + 8)),
          (unsigned int)v120 >= *(_DWORD *)(v122 + 20)) )
    {
      v123 = 0LL;
    }
    else
    {
      v123 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v122 + 24) + 8 * (v120 >> 8)) + 16LL * (unsigned __int8)v120 + 8);
    }
    if ( *(_WORD *)(v123 + 12) )
    {
      v16 = v152;
      if ( *(struct _KTHREAD **)(v123 + 16) == KeGetCurrentThread() )
      {
        v34 = v161;
        goto LABEL_55;
      }
    }
    goto LABEL_258;
  }
LABEL_55:
  v38 = *(_DWORD *)v34 & 0xFFFFFF;
  if ( v38 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v34,
                                  1)
           + 13) == HIWORD(v38) )
        v38 = (unsigned __int16)v38;
    }
    else
    {
      v38 = *v34;
    }
  }
  v39 = gpHandleManager;
  v153 = gpHandleManager;
  v40 = *((_QWORD *)gpHandleManager + 2);
  v41 = *(_DWORD *)(v40 + 2056);
  if ( v38 >= v41 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16)
    || (v38 >= v41
      ? (v42 = *(_QWORD *)(v40 + 8LL * (((v38 - v41) >> 16) + 1) + 8), v38 += -65536 * ((v38 - v41) >> 16) - v41)
      : (v42 = *(_QWORD *)(v40 + 8)),
        v38 >= *(_DWORD *)(v42 + 20)) )
  {
    v43 = 0LL;
  }
  else
  {
    v43 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * ((unsigned __int64)v38 >> 8))
                    + 16LL * (unsigned __int8)v38
                    + 8);
  }
  *(_QWORD *)v144 = v43;
  if ( *((_BYTE *)v34 + 14) == 5 && v34[6] == WORD1(v158) )
  {
    v44 = *(_DWORD *)(v43 + 8);
    if ( v44 != 1 || *(_WORD *)(v43 + 12) )
    {
      *((_BYTE *)v34 + 15) |= 8u;
      v181 = v44;
    }
    else if ( v182 == 2 || (*((_BYTE *)v34 + 15) & 1) == 0 )
    {
      v45 = (unsigned __int16)*(_DWORD *)v43 | (*(_DWORD *)v43 >> 8) & 0xFF0000;
      if ( v45 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v124 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v40, (unsigned __int16)*(_DWORD *)v43, 1);
          v43 = *(_QWORD *)v144;
          v39 = v153;
          if ( *((unsigned __int8 *)v124 + 13) == HIWORD(v45) )
            v45 = (unsigned __int16)v45;
        }
        else
        {
          v45 = (unsigned __int16)*(_DWORD *)v43;
        }
      }
      v46 = *(_DWORD *)(v40 + 2056);
      if ( v45 >= v46 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
      {
        v49 = 0LL;
      }
      else
      {
        if ( v45 >= v46 )
        {
          v47 = *(_QWORD *)(v40 + 8LL * (((v45 - v46) >> 16) + 1) + 8);
          v48 = v45 + -65536 * ((v45 - v46) >> 16) - v46;
        }
        else
        {
          v47 = *(_QWORD *)(v40 + 8);
          v48 = v45;
        }
        v49 = 0LL;
        if ( v48 < *(_DWORD *)(v47 + 20) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v48 >> 8))
                         + 16LL * (unsigned __int8)v48
                         + 8) )
            v49 = *(_QWORD *)v47 + 24LL * v48;
          v43 = *(_QWORD *)v144;
        }
      }
      if ( v45 >= 0x10000 )
      {
        v125 = *(_DWORD *)v39 <= 0x10000u;
        LODWORD(v148) = (unsigned __int16)v45;
        if ( v125 )
        {
          v45 = (unsigned __int16)v45;
        }
        else
        {
          v126 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v40, (unsigned __int16)v45, 1);
          v43 = *(_QWORD *)v144;
          if ( *((unsigned __int8 *)v126 + 13) == HIWORD(v45) )
            v45 = v148;
        }
      }
      v50 = *(_DWORD *)(v40 + 2056);
      if ( v45 >= v50 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16)
        || (v45 >= v50
          ? (v51 = *(_QWORD *)(v40 + 8LL * (((v45 - v50) >> 16) + 1) + 8), v45 += -65536 * ((v45 - v50) >> 16) - v50)
          : (v51 = *(_QWORD *)(v40 + 8)),
            v45 >= *(_DWORD *)(v51 + 20)) )
      {
        v52 = 0LL;
      }
      else
      {
        v52 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v51 + 24) + 8 * ((unsigned __int64)v45 >> 8))
                        + 16LL * (unsigned __int8)v45
                        + 8);
      }
      if ( v52 != v43 )
        v49 = 0LL;
      v53 = *(_BYTE *)(v49 + 14);
      if ( v53 == 5 )
      {
        v54 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v43 + 680);
        if ( v54 && qword_1C028F9B8 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C028F9B8,
            v54,
            0);
      }
      else if ( v53 == 16 )
      {
        TrackObjectReferenceDecrement(2LL, *(_QWORD *)(v43 + 136));
      }
      v55 = *((_DWORD *)v34 + 2);
      v56 = v55 & 0xFFFFFFFE;
      if ( (v55 & 0xFFFFFFFE) == 0 || v56 == -2147483630 )
        goto LABEL_102;
      Process = 0LL;
      if ( v56 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v58, v57, v59, v60);
      }
      else
      {
        if ( PsLookupProcessByProcessId((HANDLE)v56, &Process) < 0 )
        {
LABEL_100:
          if ( Process )
            ObfDereferenceObject(Process);
LABEL_102:
          EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v34 + 14));
          v70 = *(_DWORD *)v34 & 0xFFFFFF;
          LODWORD(v148) = EtwGdiHandleType;
          if ( v70 >= 0x10000 )
          {
            LODWORD(v67) = (_DWORD)gpHandleManager;
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              v127 = GdiHandleEntryDirectory::GetEntry(
                       *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                       (unsigned __int16)v70,
                       1);
              EtwGdiHandleType = v148;
              LODWORD(v67) = *((unsigned __int8 *)v127 + 13);
              if ( (_DWORD)v67 == HIWORD(v70) )
                v70 = (unsigned __int16)v70;
              v69 = 0LL;
            }
            else
            {
              v70 = (unsigned __int16)v70;
            }
          }
          v71 = *((_QWORD *)gpHandleManager + 2);
          v72 = *(_DWORD *)(v71 + 2056);
          if ( v70 >= v72 + ((*(unsigned __int16 *)(v71 + 2) + 0xFFFF) << 16) )
          {
            v74 = v69;
          }
          else
          {
            if ( v70 >= v72 )
            {
              v67 = ((v70 - v72) >> 16) + 1;
              v73 = *(_QWORD *)(v71 + 8 * v67 + 8);
              v70 += -65536 * ((v70 - v72) >> 16) - v72;
            }
            else
            {
              v73 = *(_QWORD *)(v71 + 8);
            }
            if ( v70 >= *(_DWORD *)(v73 + 20) )
            {
              v74 = v69;
            }
            else
            {
              LODWORD(v67) = 2 * (unsigned __int8)v70;
              v74 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v73 + 24) + 8 * ((unsigned __int64)v70 >> 8))
                               + 16LL * (unsigned __int8)v70
                               + 8);
            }
            EtwGdiHandleType = v148;
          }
          if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
          {
            McTemplateK0pqqq_EtwWriteTransfer(
              v67,
              (unsigned int)&GdiDestroyHandle,
              EtwGdiHandleType,
              *v74,
              EtwGdiHandleType,
              v142,
              v55 & 0xFE);
            v69 = 0LL;
          }
          *((_BYTE *)v34 + 14) = 0;
          *((_QWORD *)v34 + 2) = v69;
          *((_DWORD *)v34 + 2) = v55 & 1;
          v75 = *(_DWORD *)v34 & 0xFFFFFF;
          if ( v75 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v34,
                                          1)
                   + 13) == HIWORD(v75) )
                v75 = (unsigned __int16)v75;
              v69 = 0LL;
            }
            else
            {
              v75 = *v34;
            }
          }
          v76 = gpHandleManager;
          v77 = *((_QWORD *)gpHandleManager + 2);
          v78 = *(_DWORD *)(v77 + 2056);
          if ( v75 >= v78 + ((*(unsigned __int16 *)(v77 + 2) + 0xFFFF) << 16)
            || (v75 >= v78
              ? (v79 = *(_QWORD *)(v77 + 8LL * (((v75 - v78) >> 16) + 1) + 8), v75 += -65536 * ((v75 - v78) >> 16) - v78)
              : (v79 = *(_QWORD *)(v77 + 8)),
                v75 >= *(_DWORD *)(v79 + 20)) )
          {
            v80 = v69;
          }
          else
          {
            v80 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v79 + 24) + 8 * ((unsigned __int64)v75 >> 8))
                             + 16LL * (unsigned __int8)v75
                             + 8);
          }
          v81 = (unsigned __int16)*v80 | (*v80 >> 8) & 0xFF0000;
          if ( v81 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)*v80,
                                          1)
                   + 13) == HIWORD(v81) )
              {
                v81 = (unsigned __int16)v81;
              }
              else if ( *(_DWORD *)v76 > 0x10000u )
              {
                GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v76 + 2), (unsigned __int16)v81, v128);
              }
            }
            else
            {
              v81 = (unsigned __int16)*v80;
            }
          }
          v82 = *((_QWORD *)v76 + 3);
          v83 = (GdiHandleEntryDirectory *)*((_QWORD *)v76 + 2);
          v84 = v83;
          if ( v82 )
          {
            v153 = (GdiHandleManager *)(4LL * (unsigned __int16)v81);
            v129 = *(_DWORD *)((char *)v153 + v82);
            v145 = v129;
            if ( v129 )
            {
              if ( GdiHandleEntryDirectory::AcquireEntryLock(v83, v129, 1) )
                GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v76 + 2), v145, 1);
              *(_DWORD *)((char *)v153 + *((_QWORD *)v76 + 3)) = 0;
              --*((_DWORD *)v76 + 1);
              v84 = (GdiHandleEntryDirectory *)*((_QWORD *)v76 + 2);
            }
          }
          v85 = *((_DWORD *)v84 + 514);
          if ( v81 < v85 + ((*((unsigned __int16 *)v84 + 1) + 0xFFFF) << 16) )
          {
            if ( v81 >= v85 )
            {
              v86 = *((_QWORD *)v84 + ((v81 - v85) >> 16) + 2);
              v81 += -65536 * ((v81 - v85) >> 16) - v85;
            }
            else
            {
              v86 = *((_QWORD *)v84 + 1);
            }
            v87 = *(_QWORD **)(v86 + 24);
            if ( v81 < *(_DWORD *)(v86 + 20) )
            {
              v88 = *(_QWORD *)(*v87 + 8 * ((unsigned __int64)v81 >> 8));
              if ( *(_QWORD *)(v88 + 16LL * (unsigned __int8)v81 + 8) )
              {
                *(_QWORD *)(v88 + 16LL * (unsigned __int8)v81 + 8) = 0LL;
                *(_QWORD *)(*(_QWORD *)v86 + 24LL * v81) = *(unsigned int *)(v86 + 12);
                --*(_DWORD *)(v86 + 16);
                v87 = *(_QWORD **)(v86 + 24);
                *(_DWORD *)(v86 + 12) = v81;
              }
            }
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(*v87 + 8 * ((unsigned __int64)v81 >> 8)) + 16LL * (unsigned __int8)v81,
              0LL);
            KeLeaveCriticalRegion();
            *(_BYTE *)v84 = 0;
          }
          *(_QWORD *)v80 = 0LL;
          --*((_DWORD *)v76 + 1);
          KeLeaveCriticalRegion();
          GreReleaseHmgrSemaphore(v89);
LABEL_133:
          v90 = v182;
          goto LABEL_134;
        }
        CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
      }
      v65 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v66 = ghsemHmgr;
        if ( ghsemHmgr )
        {
          PsEnterPriorityRegion(v63, v62, v64);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v66);
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pqz_EtwWriteTransfer(v63, v62, v64, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
        --*(_DWORD *)(v65 + 60);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v63,
            (unsigned int)&LockRelease,
            v64,
            (_DWORD)ghsemHmgr,
            (__int64)L"ghsemHmgr");
        if ( ghsemHmgr )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
          PsLeavePriorityRegion();
        }
      }
      goto LABEL_100;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v161);
  if ( v162 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v161);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v101, (unsigned int)&LockRelease, v102, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
LABEL_195:
  v90 = v182;
  if ( v182 == 1 )
  {
    v130 = 0;
LABEL_324:
    if ( HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 0, v130, 5, &v181) )
      goto LABEL_134;
    goto LABEL_197;
  }
  if ( v182 == 2 )
  {
    v130 = 1;
    goto LABEL_324;
  }
LABEL_197:
  if ( v90 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2u, 5, &v181) )
  {
    if ( v181 == 1 )
    {
      if ( (*((_DWORD *)a1 + 28) & 0x800) != 0 )
      {
        v183 = 1;
        HmgDecrementShareReferenceCountEx(a1, 0LL);
      }
      else
      {
        EngSetLastError(0xAAu);
        v183 = 0;
      }
    }
    else if ( *((_QWORD *)a1 + 20) || (unsigned int)SURFACE::bStockSurface(a1) || (*((_DWORD *)a1 + 28) & 0x800) != 0 )
    {
      v103 = *((_DWORD *)a1 + 28);
      if ( (v103 & 0x800) != 0 )
      {
        if ( !*((_DWORD *)a1 + 80) )
        {
          *((_DWORD *)a1 + 80) = 1;
          _InterlockedIncrement(&glRenderEndDelete);
        }
      }
      else
      {
        *((_DWORD *)a1 + 28) = v103 | 0x1000000;
      }
      v183 = 1;
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)v168, a1, 0, 0, 1);
      if ( LODWORD(v168[1]) )
      {
        TrackHmgrReferenceDecrement(*(_BYTE *)(v168[0] + 14), a1);
        --*((_DWORD *)a1 + 2);
        HANDLELOCK::vUnlock((HANDLELOCK *)v168);
        if ( LODWORD(v168[1]) )
          HANDLELOCK::vUnlock((HANDLELOCK *)v168);
      }
    }
    else
    {
      v183 = 0;
    }
    goto LABEL_161;
  }
LABEL_134:
  if ( v155 )
  {
    _InterlockedDecrement(&glRenderEndDelete);
    v16 = v152;
  }
  if ( qword_1C029B600 && (int)qword_1C029B600(v17, v26, v18) >= 0 && qword_1C029B608 )
    qword_1C029B608(a1);
  v91 = (PERESOURCE)*((unsigned int *)a1 + 28);
  if ( ((unsigned int)v91 & 0x400000) != 0 )
  {
    v110 = RegionSize;
    if ( RegionSize )
    {
      if ( v16 )
      {
        if ( (*((_DWORD *)a1 + 29) & 9) != 0 )
        {
          v111 = *(void (__fastcall **)(ULONG_PTR, unsigned __int64, __int64))(v16 + 2640);
          if ( v111 )
          {
            v112 = (ULONG_PTR)a1 + 24;
            goto LABEL_233;
          }
          v111 = *(void (__fastcall **)(ULONG_PTR, unsigned __int64, __int64))(v16 + 3424);
          if ( !v111 )
            goto LABEL_141;
LABEL_232:
          v112 = RegionSize;
LABEL_233:
          v111(v112, v26, v18);
          goto LABEL_141;
        }
        v111 = *(void (__fastcall **)(ULONG_PTR, unsigned __int64, __int64))(v16 + 2752);
        if ( v111 )
        {
          if ( ((unsigned int)v91 & 0x40000) == 0 )
            goto LABEL_232;
          if ( !v90 && qword_1C029B610 && (int)qword_1C029B610(v91, v26, v18) >= 0 && qword_1C029B618 )
            qword_1C029B618(*(_QWORD *)(v16 + 1768), v110);
        }
      }
    }
  }
LABEL_141:
  v92 = v165;
  if ( v165 )
  {
    if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      MmUnsecureVirtualMemory(v92);
    goto LABEL_148;
  }
  if ( v150 )
  {
    if ( BaseAddress )
      MmUnmapViewInSessionSpace(MappedBase);
    goto LABEL_148;
  }
  v93 = SecureHandle;
  if ( SecureHandle )
  {
    if ( *((_DWORD *)a1 + 52) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      MmUnsecureVirtualMemory(v93);
      if ( BaseAddress )
      {
        if ( v154 )
        {
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, MappedBase);
        }
        else
        {
          RegionSize = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        }
      }
    }
    goto LABEL_148;
  }
  if ( (v156 & 8) != 0 )
  {
    if ( (v156 & 0x80u) == 0 )
    {
      EngFreeUserMem(BaseAddress);
      goto LABEL_148;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    CurrentProcess = PsGetCurrentProcess(v133, v132, v134, v135);
    MmUnmapViewOfSection(CurrentProcess);
    if ( ThreadWin32Thread && (v137 = *(_QWORD *)(ThreadWin32Thread + 72)) != 0 )
    {
      v138 = *(_DWORD *)(v137 + 8);
    }
    else
    {
      if ( !(_DWORD)v170 )
      {
        if ( qword_1C029B620 && (int)qword_1C029B620() >= 0 && qword_1C029B628 )
          qword_1C029B628(BaseAddress);
        goto LABEL_355;
      }
      v138 = HIDWORD(v169);
    }
    MappedBase = 0LL;
    if ( PsLookupProcessByProcessId((HANDLE)v138, (PEPROCESS *)&MappedBase) >= 0 )
    {
      MmUnmapViewOfSection(MappedBase);
      ObfDereferenceObject(MappedBase);
    }
LABEL_355:
    if ( !v168[0] )
      KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
    ObfDereferenceObject((PVOID)v168[0]);
    goto LABEL_148;
  }
  if ( (v156 & 0x800) == 0 )
  {
    if ( (v156 & 0x10) != 0 )
      vFreeKernelSection(BaseAddress);
    goto LABEL_148;
  }
  v104 = (struct _ERESOURCE *)ghsemMapRot;
  v154 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion(v91, v26, v18);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v104);
  }
  v105 = (_QWORD *)*((_QWORD *)a1 + 33);
  if ( v105 )
  {
    v106 = (__int64 *)((char *)a1 + 528);
    v107 = (__int64 *)*((_QWORD *)a1 + 66);
    if ( v107 != (__int64 *)((char *)a1 + 528) )
    {
      if ( (__int64 *)v107[1] != v106 || (v108 = (__int64 **)*((_QWORD *)a1 + 67), *v108 != v106) )
        __fastfail(3u);
      *v108 = v107;
      v107[1] = (__int64)v108;
    }
    v109 = Object;
    if ( BaseAddress && Object )
    {
      MmUnmapViewOfSection(*v105);
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)v180);
      goto LABEL_238;
    }
  }
  else
  {
    v109 = Object;
  }
  W32PIDLOCK::vCleanUp((W32PIDLOCK *)v180);
  if ( v109 )
LABEL_238:
    ObfDereferenceObject(v109);
  SEMOBJ::vUnlock((SEMOBJ *)&v154);
LABEL_148:
  if ( (*((_DWORD *)a1 + 29) & 0x1000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v158, v181, v151, 0LL, 0LL, 0);
  v94 = (void *)*((_QWORD *)a1 + 85);
  if ( v94 )
    ReleaseReferenceCountedObjectHandle(0LL, v94, v18);
  if ( *((_BYTE *)a1 + 688) )
  {
    v94 = (void *)*((_QWORD *)a1 + 9);
    if ( v94 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v94);
      *((_QWORD *)a1 + 9) = 0LL;
    }
  }
  v95 = *(_QWORD *)gpTypeIsolation;
  if ( *(_QWORD *)gpTypeIsolation )
  {
    memset(a1, 0, 0x2C0uLL);
    ++*(_DWORD *)(v95 + 76);
    v96 = v95 + 48;
    if ( ExQueryDepthSList((PSLIST_HEADER)v96) >= *(_WORD *)(v96 + 16) )
    {
      ++*(_DWORD *)(v96 + 32);
      (*(void (__fastcall **)(SURFACE *, __int64))(v96 + 56))(a1, v96);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v96, (PSLIST_ENTRY)a1);
    }
  }
  v97 = v179;
  if ( v179 && qword_1C029B630 && (int)qword_1C029B630(v91, v94, v18) >= 0 && qword_1C029B638 )
    qword_1C029B638(v97);
  if ( v160 )
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v160);
LABEL_161:
  if ( qword_1C029B0A0 && (int)qword_1C029B0A0(v91, v94, v18) >= 0 && qword_1C029B0A8 )
    qword_1C029B0A8(Resource);
  if ( (v173 & 0x1000) != 0 )
  {
    v139 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v139 )
      --*(_DWORD *)(v139 + 104);
    v173 &= ~0x1000u;
    v140 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v140 )
    {
      *(_QWORD *)(v140 + 320) = 0LL;
      *(_QWORD *)(v140 + 312) = 0LL;
    }
  }
  else if ( (v173 & 0x800000) != 0 )
  {
    v141 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v141 )
      --*(_DWORD *)(v141 + 104);
    v173 &= ~0x800000u;
  }
  if ( Resource[0] )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", Resource[0]);
    v91 = Resource[0];
    if ( Resource[0] )
    {
      ExReleaseResourceAndLeaveCriticalRegion(Resource[0]);
      PsLeavePriorityRegion();
    }
  }
  if ( (v173 & 8) != 0 )
    v173 &= ~8u;
  v98 = Resource[1];
  if ( Resource[1] )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", Resource[1]);
    v91 = Resource[1];
    if ( Resource[1] )
    {
      ExReleaseResourceAndLeaveCriticalRegion(Resource[1]);
      PsLeavePriorityRegion();
    }
  }
  if ( qword_1C029B0B0 && (int)qword_1C029B0B0(v91, v98, v18) >= 0 && qword_1C029B0B8 )
    qword_1C029B0B8(&v178, &v177, &v176, v174);
  DLODCOBJ::~DLODCOBJ((DLODCOBJ *)v175);
  v99 = v167;
  if ( v167 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v167);
    ExReleaseResourceAndLeaveCriticalRegion(v99);
    PsLeavePriorityRegion();
  }
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  return v183;
}
