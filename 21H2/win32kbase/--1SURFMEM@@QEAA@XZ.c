/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C00306C0
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001BFB0 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C00271A0 (GreCreateBitmap.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00A2714 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE530 (pProcessDfbSurfacesInternal.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CB33C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     EngCreateLockedBitmap @ 0x1C00CB540 (EngCreateLockedBitmap.c)
 *     EngCreateLockedDeviceBitmap @ 0x1C00CB5B0 (EngCreateLockedDeviceBitmap.c)
 *     EngCreateLockedRedirectionDeviceBitmap @ 0x1C00CB620 (EngCreateLockedRedirectionDeviceBitmap.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002E210 (HmgDecrementShareReferenceCountEx.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002F7F0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00302CC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0031CD0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0032170 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0038B54 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0080AE0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00A5438 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x1C00BB8B0 (EngFreeUserMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0125FD8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C013EC20 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014C9A8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CA60 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C014D87C (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014DD34 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this, int a2, int a3)
{
  int *v3; // rbx
  __int16 v5; // r13
  GdiHandleManager *v6; // r12
  struct _ERESOURCE *v7; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PEPROCESS v11; // r8
  GdiHandleManager *v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int16 *v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rax
  unsigned int v21; // ecx
  char v22; // al
  unsigned int v23; // ebx
  GdiHandleManager *v24; // r10
  __int64 v25; // rsi
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // ebx
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // eax
  __int64 v36; // r13
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  char v41; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v42; // rdx
  int v43; // ebx
  signed int v44; // r13d
  __int64 v45; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rsi
  struct _ERESOURCE *v51; // r12
  unsigned int v52; // esi
  unsigned int v53; // ebx
  GdiHandleManager *v54; // rsi
  __int64 v55; // rdx
  unsigned int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // r9
  _DWORD *v59; // r12
  int v60; // eax
  unsigned int v61; // ebx
  __int64 v62; // r8
  __int64 v63; // r15
  unsigned int v64; // edx
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // r10
  __int64 v68; // r11
  __int64 v69; // rcx
  int *v70; // rax
  __int64 v71; // rcx
  void *v72; // rsi
  void *v73; // r15
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  int *v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // rdi
  int v81; // eax
  unsigned int v82; // edx
  _DWORD *v83; // rdi
  char v84; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v85; // rdx
  GdiHandleManager *v86; // rbx
  unsigned int v87; // eax
  __int64 v88; // r9
  unsigned __int64 v89; // rdx
  unsigned int v90; // r8d
  __int64 v91; // rcx
  __int64 v92; // r9
  _DWORD *v93; // rdx
  unsigned int v94; // eax
  __int64 v95; // r10
  unsigned int v96; // edx
  unsigned int v97; // r8d
  __int64 v98; // rcx
  __int64 v99; // r10
  __int64 v100; // rcx
  int v101; // ecx
  int v102; // r8d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _ENTRY *Entry; // rax
  GdiHandleManager *v107; // rbx
  unsigned int v108; // eax
  __int64 v109; // r9
  unsigned __int64 v110; // rdx
  unsigned int v111; // r8d
  __int64 v112; // rcx
  __int64 v113; // r10
  __int64 v114; // rdx
  __int64 v115; // rcx
  struct _ENTRY *v116; // rax
  struct _ENTRY *v117; // rax
  char EtwGdiHandleType; // al
  _QWORD *v119; // r9
  int v120; // ecx
  int v121; // r8d
  unsigned int v122; // r13d
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 ThreadWin32Thread; // r15
  __int64 v126; // rax
  __int64 v127; // rax
  struct _ERESOURCE *v128; // rbx
  _QWORD *v129; // rbx
  _QWORD *v130; // rax
  _QWORD *v131; // rcx
  _QWORD *v132; // rdx
  unsigned __int64 v133; // [rsp+40h] [rbp-C0h] BYREF
  GdiHandleManager *v134; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v135; // [rsp+50h] [rbp-B0h] BYREF
  int v136; // [rsp+58h] [rbp-A8h]
  int v137; // [rsp+5Ch] [rbp-A4h]
  HSEMAPHORE v138; // [rsp+68h] [rbp-98h] BYREF
  __int64 v139; // [rsp+70h] [rbp-90h] BYREF
  int v140; // [rsp+78h] [rbp-88h]
  PVOID Object[2]; // [rsp+88h] [rbp-78h]
  __int128 v142; // [rsp+98h] [rbp-68h]
  _OWORD v143[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v144; // [rsp+130h] [rbp+30h]
  __int64 v145; // [rsp+130h] [rbp+30h]
  PEPROCESS Process; // [rsp+138h] [rbp+38h] BYREF
  PEPROCESS v147; // [rsp+140h] [rbp+40h] BYREF
  __int64 v148; // [rsp+148h] [rbp+48h] BYREF

  v3 = *(int **)this;
  if ( !*(_QWORD *)this )
    return;
  if ( (*((_BYTE *)this + 8) & 1) == 0 )
  {
    v5 = 0;
    v144 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      v5 = 1;
      v144 = 1;
    }
    v6 = *(GdiHandleManager **)v3;
    v7 = ghsemHmgr;
    v134 = v6;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
    v148 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v148);
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (CurrentProcess = PsGetCurrentProcess(v10, v9),
           ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v11 = *(PEPROCESS *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = gpHandleManager;
    v13 = (unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000;
    Process = v11;
    v136 = 1;
    if ( v13 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry(
                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                  (unsigned __int16)v6,
                  1);
        v11 = Process;
        if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v13) )
          v13 = (unsigned __int16)v6;
      }
      else
      {
        v13 = (unsigned __int16)v6;
      }
    }
    v14 = *((_QWORD *)v12 + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( v13 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
      goto LABEL_242;
    v16 = ((v13 - v15) >> 16) + 1;
    if ( v13 < v15 )
      v16 = 0LL;
    v17 = *(_QWORD *)(v14 + 8 * v16 + 8);
    if ( (_DWORD)v16 )
      v13 += ((1 - (_DWORD)v16) << 16) - v15;
    v18 = 0LL;
    if ( v13 < *(_DWORD *)(v17 + 20) )
    {
      v19 = 16LL * (unsigned __int8)v13;
      v20 = *(_QWORD **)(v17 + 24);
      v133 = 8 * ((unsigned __int64)v13 >> 8);
      v147 = (PEPROCESS)(v19 + *(_QWORD *)(*v20 + v133));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v147, 0LL);
      if ( v13 < *(_DWORD *)(v17 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + v133) + v19 + 8) )
      {
        *(_DWORD *)(24LL * v13 + *(_QWORD *)v17 + 8) |= 1u;
        v18 = (unsigned __int16 *)(24LL * v13 + *(_QWORD *)v17);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v147, 0LL);
        KeLeaveCriticalRegion();
      }
      WORD1(v6) = WORD1(v134);
      v11 = Process;
      v5 = v144;
    }
    v135 = v18;
    if ( v18 )
    {
      _m_prefetchw(v18 + 4);
      v137 = *((_DWORD *)v18 + 2);
      v21 = v137 & 0xFFFFFFFE;
      if ( (v137 & 0xFFFFFFFE) == (v148 & 0xFFFFFFFC) || !v21 || v11 && v21 == *((_DWORD *)v11 + 2) )
      {
        v22 = *((_BYTE *)v18 + 15);
        if ( (v22 & 0x20) == 0 )
        {
          if ( (v22 & 0x40) == 0 )
          {
LABEL_29:
            v23 = *(_DWORD *)v18 & 0xFFFFFF;
            if ( v23 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v18,
                                            1)
                     + 13) == HIWORD(v23) )
                  v23 = (unsigned __int16)v23;
              }
              else
              {
                v23 = *v18;
              }
            }
            v24 = gpHandleManager;
            v134 = gpHandleManager;
            v25 = *((_QWORD *)gpHandleManager + 2);
            v26 = *(_DWORD *)(v25 + 2056);
            if ( v23 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
              goto LABEL_185;
            v27 = ((v23 - v26) >> 16) + 1;
            if ( v23 < v26 )
              v27 = 0LL;
            v28 = *(_QWORD *)(v25 + 8 * v27 + 8);
            if ( (_DWORD)v27 )
              v23 += ((1 - (_DWORD)v27) << 16) - v26;
            if ( v23 >= *(_DWORD *)(v28 + 20) )
LABEL_185:
              v29 = 0LL;
            else
              v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                              + 16LL * (unsigned __int8)v23
                              + 8);
            v145 = v29;
            if ( *((_BYTE *)v18 + 14) == 5 && v18[6] == WORD1(v6) )
            {
              if ( *(_WORD *)(v29 + 12) == v5 && *(_DWORD *)(v29 + 8) == 1 )
              {
                v30 = (unsigned __int16)*(_DWORD *)v29;
                v31 = v30 | (*(_DWORD *)v29 >> 8) & 0xFF0000;
                if ( v31 >= 0x10000 )
                {
                  if ( *(_DWORD *)gpHandleManager > 0x10000u )
                  {
                    v116 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v25, (unsigned __int16)v30, 1);
                    v29 = v145;
                    v24 = v134;
                    if ( *((unsigned __int8 *)v116 + 13) == HIWORD(v31) )
                      v31 = (unsigned __int16)v31;
                  }
                  else
                  {
                    v31 = (unsigned __int16)v30;
                  }
                }
                v32 = *(_DWORD *)(v25 + 2056);
                if ( v31 >= v32 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
                {
                  v36 = 0LL;
                }
                else
                {
                  v33 = ((v31 - v32) >> 16) + 1;
                  if ( v31 < v32 )
                    v33 = 0LL;
                  v34 = *(_QWORD *)(v25 + 8 * v33 + 8);
                  if ( (_DWORD)v33 )
                    v35 = v31 + ((1 - (_DWORD)v33) << 16) - v32;
                  else
                    v35 = v31;
                  v36 = 0LL;
                  if ( v35 < *(_DWORD *)(v34 + 20)
                    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v35 >> 8))
                                 + 16LL * (unsigned __int8)v35
                                 + 8) )
                  {
                    v36 = *(_QWORD *)v34 + 24LL * v35;
                  }
                  v29 = v145;
                }
                if ( v31 >= 0x10000 )
                {
                  if ( *(_DWORD *)v24 > 0x10000u )
                  {
                    v117 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v25, (unsigned __int16)v31, 1);
                    v29 = v145;
                    if ( *((unsigned __int8 *)v117 + 13) == HIWORD(v31) )
                      v31 = (unsigned __int16)v31;
                  }
                  else
                  {
                    v31 = (unsigned __int16)v31;
                  }
                }
                v37 = *(_DWORD *)(v25 + 2056);
                if ( v31 >= v37 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
                  goto LABEL_196;
                v38 = ((v31 - v37) >> 16) + 1;
                if ( v31 < v37 )
                  v38 = 0LL;
                v39 = *(_QWORD *)(v25 + 8 * v38 + 8);
                if ( (_DWORD)v38 )
                  v31 += ((1 - (_DWORD)v38) << 16) - v37;
                if ( v31 >= *(_DWORD *)(v39 + 20) )
LABEL_196:
                  v40 = 0LL;
                else
                  v40 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v31 >> 8))
                                  + 16LL * (unsigned __int8)v31
                                  + 8);
                if ( v40 != v29 )
                  v36 = 0LL;
                v41 = *(_BYTE *)(v36 + 14);
                if ( v41 == 5 )
                {
                  v42 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v29 + 680);
                  if ( v42 && qword_1C024C3F8 )
                    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
                      qword_1C024C3F8,
                      v42,
                      0);
                }
                else if ( v41 == 16 )
                {
                  TrackObjectReferenceDecrement(
                    2u,
                    *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v29 + 136));
                }
                v43 = *((_DWORD *)v18 + 2);
                v44 = v43 & 0xFFFFFFFE;
                if ( (v43 & 0xFFFFFFFE) == 0 || v44 == -2147483630 )
                  goto LABEL_80;
                Process = 0LL;
                if ( v44 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v45);
                }
                else
                {
                  if ( PsLookupProcessByProcessId((HANDLE)v44, &Process) < 0 )
                  {
LABEL_78:
                    if ( Process )
                      ObfDereferenceObject(Process);
LABEL_80:
                    v52 = *(_DWORD *)v18 & 0xFFFFFF;
                    if ( v52 >= 0x10000 && *(_DWORD *)gpHandleManager > 0x10000u )
                      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)gpHandleManager + 2), *v18, 1);
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
                    {
                      EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v18 + 14));
                      McTemplateK0pqqq_EtwWriteTransfer(
                        v120,
                        (unsigned int)&GdiDestroyHandle,
                        v121,
                        *v119,
                        EtwGdiHandleType);
                    }
                    *((_BYTE *)v18 + 14) = 0;
                    *((_QWORD *)v18 + 2) = 0LL;
                    *((_DWORD *)v18 + 2) = v43 & 1;
                    v53 = *(_DWORD *)v18 & 0xFFFFFF;
                    if ( v53 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    *v18,
                                                    1)
                             + 13) == HIWORD(v53) )
                          v53 = (unsigned __int16)v53;
                      }
                      else
                      {
                        v53 = *v18;
                      }
                    }
                    v54 = gpHandleManager;
                    v55 = *((_QWORD *)gpHandleManager + 2);
                    v56 = *(_DWORD *)(v55 + 2056);
                    if ( v53 >= v56 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16) )
                      goto LABEL_210;
                    v57 = ((v53 - v56) >> 16) + 1;
                    if ( v53 < v56 )
                      v57 = 0LL;
                    v58 = *(_QWORD *)(v55 + 8 * v57 + 8);
                    if ( (_DWORD)v57 )
                      v53 += ((1 - (_DWORD)v57) << 16) - v56;
                    if ( v53 >= *(_DWORD *)(v58 + 20) )
LABEL_210:
                      v59 = 0LL;
                    else
                      v59 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v58 + 24) + 8 * ((unsigned __int64)v53 >> 8))
                                       + 16LL * (unsigned __int8)v53
                                       + 8);
                    v60 = (unsigned __int16)*v59;
                    v61 = v60 | (*v59 >> 8) & 0xFF0000;
                    if ( v61 >= 0x10000 )
                    {
                      if ( *(_DWORD *)gpHandleManager > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                    (unsigned __int16)v60,
                                                    1)
                             + 13) == HIWORD(v61) )
                          v61 = (unsigned __int16)v61;
                      }
                      else
                      {
                        v61 = (unsigned __int16)v60;
                      }
                    }
                    v62 = *((_QWORD *)v54 + 3);
                    v63 = *((_QWORD *)v54 + 2);
                    if ( v62 )
                    {
                      v122 = *(_DWORD *)(v62 + 4LL * (unsigned __int16)v61);
                      if ( v122 )
                      {
                        if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v54 + 2), v122, 1) )
                          GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v54 + 2), v122, 1);
                        *(_DWORD *)(4LL * (unsigned __int16)v61 + *((_QWORD *)v54 + 3)) = 0;
                        --*((_DWORD *)v54 + 1);
                        v63 = *((_QWORD *)v54 + 2);
                      }
                    }
                    v64 = *(_DWORD *)(v63 + 2056);
                    if ( v61 < v64 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16) )
                    {
                      v65 = ((v61 - v64) >> 16) + 1;
                      if ( v61 < v64 )
                        v65 = 0LL;
                      v66 = *(_QWORD *)(v63 + 8 * v65 + 8);
                      if ( (_DWORD)v65 )
                        v61 += ((1 - (_DWORD)v65) << 16) - v64;
                      v67 = *(_QWORD **)(v66 + 24);
                      if ( v61 < *(_DWORD *)(v66 + 20) )
                      {
                        v68 = *(_QWORD *)(*v67 + 8 * ((unsigned __int64)v61 >> 8));
                        if ( *(_QWORD *)(v68 + 16LL * (unsigned __int8)v61 + 8) )
                        {
                          *(_QWORD *)(v68 + 16LL * (unsigned __int8)v61 + 8) = 0LL;
                          *(_QWORD *)(*(_QWORD *)v66 + 24LL * v61) = *(unsigned int *)(v66 + 12);
                          --*(_DWORD *)(v66 + 16);
                          v67 = *(_QWORD **)(v66 + 24);
                          *(_DWORD *)(v66 + 12) = v61;
                        }
                      }
                      ExReleasePushLockExclusiveEx(
                        *(_QWORD *)(*v67 + 8 * ((unsigned __int64)v61 >> 8)) + 16LL * (unsigned __int8)v61,
                        0LL);
                      KeLeaveCriticalRegion();
                      *(_BYTE *)v63 = 0;
                    }
                    *(_QWORD *)v59 = 0LL;
                    --*((_DWORD *)v54 + 1);
                    KeLeaveCriticalRegion();
                    GreReleaseHmgrSemaphore(v69);
                    if ( (*((_BYTE *)this + 8) & 8) != 0 && *(_QWORD *)(*(_QWORD *)this + 128LL) )
                    {
                      v133 = *(_QWORD *)(*(_QWORD *)this + 128LL);
                      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v133);
                      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
                    }
                    if ( *((_DWORD *)this + 3) )
                      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
                    v70 = *(int **)this;
                    v71 = *(unsigned __int16 *)(*(_QWORD *)this + 102LL);
                    v72 = *(void **)(*(_QWORD *)this + 72LL);
                    v73 = *(void **)(*(_QWORD *)this + 248LL);
                    v74 = *(_OWORD *)(*(_QWORD *)this + 288LL);
                    v143[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
                    v75 = *((_OWORD *)v70 + 19);
                    v143[1] = v74;
                    v76 = *(_OWORD *)(v70 + 146);
                    v143[2] = v75;
                    v77 = *(_OWORD *)(v70 + 150);
                    *(_OWORD *)Object = v76;
                    v142 = v77;
                    if ( (v71 & 8) != 0 )
                    {
                      if ( (v70[28] & 0x40000) != 0 && v72 )
                      {
                        if ( (v71 & 0x80u) != 0LL )
                        {
                          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
                          {
                            v126 = PsGetCurrentProcess(v124, v123);
                            MmUnmapViewOfSection(v126);
                            v127 = *(_QWORD *)(ThreadWin32Thread + 72);
                            v147 = 0LL;
                            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v127 + 8), &v147) >= 0 )
                            {
                              MmUnmapViewOfSection(v147);
                              ObfDereferenceObject(v147);
                            }
                          }
                          if ( !Object[0] )
                            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                          ObfDereferenceObject(Object[0]);
                        }
                        else
                        {
                          EngFreeUserMem(v72);
                        }
                      }
                    }
                    else if ( (v71 & 0x800) != 0 )
                    {
                      v128 = (struct _ERESOURCE *)ghsemMapRot;
                      v138 = ghsemMapRot;
                      if ( ghsemMapRot )
                      {
                        PsEnterPriorityRegion();
                        ExEnterCriticalRegionAndAcquireResourceExclusive(v128);
                        v70 = *(int **)this;
                      }
                      v129 = (_QWORD *)*((_QWORD *)v70 + 33);
                      if ( v129 )
                      {
                        PsGetCurrentProcessWin32Process(v71);
                        v130 = (_QWORD *)(*(_QWORD *)this + 528LL);
                        v131 = (_QWORD *)*v130;
                        if ( (_QWORD *)*v130 != v130 )
                        {
                          if ( (_QWORD *)v131[1] != v130
                            || (v132 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v132 != v130) )
                          {
                            __fastfail(3u);
                          }
                          *v132 = v131;
                          v131[1] = v132;
                        }
                        if ( v72 && v73 )
                          MmUnmapViewOfSection(*v129);
                      }
                      W32PIDLOCK::vCleanUp((W32PIDLOCK *)v143);
                      if ( v73 )
                        ObfDereferenceObject(v73);
                      SEMOBJ::vUnlock((SEMOBJ *)&v138);
                    }
                    else if ( (v71 & 0x10) != 0 )
                    {
                      vFreeKernelSection(v72);
                    }
                    v78 = *(int **)this;
                    if ( *(_QWORD *)(*(_QWORD *)this + 680LL) )
                      ReleaseReferenceCountedObjectHandle(0LL);
                    if ( *((_BYTE *)v78 + 688) )
                    {
                      v100 = *((_QWORD *)v78 + 9);
                      if ( v100 )
                      {
                        Win32FreePool(v100);
                        *((_QWORD *)v78 + 9) = 0LL;
                      }
                    }
                    v79 = (__int64)*gpTypeIsolation;
                    if ( *gpTypeIsolation )
                    {
                      memset(v78, 0, 0x2C0uLL);
                      ++*(_DWORD *)(v79 + 76);
                      v80 = v79 + 48;
                      if ( ExQueryDepthSList((PSLIST_HEADER)v80) >= *(_WORD *)(v80 + 16) )
                      {
                        ++*(_DWORD *)(v80 + 32);
                        (*(void (__fastcall **)(int *, __int64))(v80 + 56))(v78, v80);
                      }
                      else
                      {
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)v80, (PSLIST_ENTRY)v78);
                      }
                    }
                    return;
                  }
                  CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
                }
                v50 = CurrentProcessWin32Process;
                if ( CurrentProcessWin32Process )
                {
                  v51 = ghsemHmgr;
                  if ( ghsemHmgr )
                  {
                    PsEnterPriorityRegion();
                    ExEnterCriticalRegionAndAcquireResourceExclusive(v51);
                  }
                  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                    McTemplateK0pqz_EtwWriteTransfer(v48, v47, v49, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
                  --*(_DWORD *)(v50 + 60);
                  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                    McTemplateK0pz_EtwWriteTransfer(
                      v48,
                      (unsigned int)&LockRelease,
                      v49,
                      (_DWORD)ghsemHmgr,
                      (__int64)L"ghsemHmgr");
                  if ( ghsemHmgr )
                  {
                    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
                    PsLeavePriorityRegion();
                  }
                }
                goto LABEL_78;
              }
              *((_BYTE *)v18 + 15) |= 8u;
            }
            HANDLELOCK::vUnlock((HANDLELOCK *)&v135);
            if ( v136 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v135);
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v101,
                (unsigned int)&LockRelease,
                v102,
                (_DWORD)ghsemHmgr,
                (__int64)L"ghsemHmgr");
            if ( ghsemHmgr )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
              PsLeavePriorityRegion();
            }
            goto LABEL_244;
          }
          v107 = gpHandleManager;
          v108 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v18 & 0xFFFFFF);
          v109 = *((_QWORD *)v107 + 2);
          v110 = v108;
          v111 = *(_DWORD *)(v109 + 2056);
          if ( v108 >= v111 + ((*(unsigned __int16 *)(v109 + 2) + 0xFFFF) << 16) )
            goto LABEL_177;
          v112 = ((v108 - v111) >> 16) + 1;
          if ( v108 < v111 )
            v112 = 0LL;
          v113 = *(_QWORD *)(v109 + 8 * v112 + 8);
          if ( (_DWORD)v112 )
            v110 = ((1 - (_DWORD)v112) << 16) - v111 + v108;
          if ( (unsigned int)v110 >= *(_DWORD *)(v113 + 20) )
LABEL_177:
            v114 = 0LL;
          else
            v114 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v113 + 24) + 8 * (v110 >> 8)) + 16LL * (unsigned __int8)v110 + 8);
          if ( *(_WORD *)(v114 + 12) && *(struct _KTHREAD **)(v114 + 16) == KeGetCurrentThread() )
            goto LABEL_181;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v135);
      if ( v136 )
      {
LABEL_181:
        v18 = v135;
        goto LABEL_29;
      }
    }
    else
    {
LABEL_242:
      KeLeaveCriticalRegion();
    }
    GreReleaseHmgrSemaphore(v115);
LABEL_244:
    *(_WORD *)(*(_QWORD *)this + 14LL) |= 0x4000u;
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
    return;
  }
  v81 = *v3;
  v82 = *v3;
  v139 = 0LL;
  v140 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v139, (unsigned __int16)v81 | (v82 >> 8) & 0xFF0000, 0, 0, 1);
  if ( v140 )
  {
    v83 = (_DWORD *)v139;
    v84 = *(_BYTE *)(v139 + 14);
    if ( v84 == 5 )
    {
      v85 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v3 + 85);
      if ( v85 && qword_1C024C3F8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C024C3F8, v85, 0);
    }
    else if ( v84 == 16 )
    {
      TrackObjectReferenceDecrement(
        2u,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v3 + 17));
    }
    --v3[2];
    v86 = gpHandleManager;
    v87 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v83 & 0xFFFFFF);
    v88 = *((_QWORD *)v86 + 2);
    v89 = v87;
    v90 = *(_DWORD *)(v88 + 2056);
    if ( v87 >= v90 + ((*(unsigned __int16 *)(v88 + 2) + 0xFFFF) << 16) )
      goto LABEL_157;
    v91 = ((v87 - v90) >> 16) + 1;
    if ( v87 < v90 )
      v91 = 0LL;
    v92 = *(_QWORD *)(v88 + 8 * v91 + 8);
    if ( (_DWORD)v91 )
      v89 = ((1 - (_DWORD)v91) << 16) - v90 + v87;
    if ( (unsigned int)v89 >= *(_DWORD *)(v92 + 20) )
LABEL_157:
      v93 = 0LL;
    else
      v93 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v92 + 24) + 8 * (v89 >> 8)) + 16LL * (unsigned __int8)v89 + 8);
    v94 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v86,
            (unsigned __int16)*v93 | (*v93 >> 8) & 0xFF0000u);
    v95 = *((_QWORD *)v86 + 2);
    v96 = v94;
    v97 = *(_DWORD *)(v95 + 2056);
    if ( v94 < v97 + ((*(unsigned __int16 *)(v95 + 2) + 0xFFFF) << 16) )
    {
      v98 = ((v94 - v97) >> 16) + 1;
      if ( v94 < v97 )
        v98 = 0LL;
      v99 = *(_QWORD *)(v95 + 8 * v98 + 8);
      if ( (_DWORD)v98 )
        v96 = ((1 - (_DWORD)v98) << 16) - v97 + v94;
      *(_DWORD *)(*(_QWORD *)v99 + 24LL * v96 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v99 + 24) + 8 * ((unsigned __int64)v96 >> 8)) + 16LL * (unsigned __int8)v96,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
