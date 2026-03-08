/*
 * XREFs of ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00
 * Callers:
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1C00BF644 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 * Callees:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003EBA4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C004A620 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004B580 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004E8F0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C0053788 (HmgFreeDcAttr.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0059910 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00D2230 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00D5DA4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall XDCOBJ::vDelete(DC **this, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // r8d
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbp
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rbx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned int v36; // r9d
  __int64 v37; // r8
  _DWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // r9d
  GdiHandleEntryTable *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // r8d
  struct _ERESOURCE *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct _ERESOURCE *v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // r8d
  __int64 v59; // rdx
  __int64 v60; // rcx
  DC *v61; // r15
  __int64 v62; // r14
  unsigned int v63; // eax
  __int64 v64; // rbx
  unsigned int v65; // r8d
  unsigned int v66; // ebp
  unsigned int v67; // r12d
  __int64 v68; // r10
  __int64 v69; // rdi
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __int64 v73; // r8
  DC *v74; // rdx
  __int64 v75; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v77; // r14
  DC *v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rcx
  _DWORD *v81; // rdi
  char v82; // al
  __int64 v83; // rcx
  __int64 v84; // rbp
  __int64 v85; // rbx
  unsigned int v86; // eax
  __int64 v87; // rcx
  unsigned int v88; // edx
  unsigned int v89; // r9d
  GdiHandleEntryTable *v90; // rcx
  struct OBJECT *EntryObject; // rax
  unsigned int v92; // eax
  __int64 v93; // rcx
  unsigned int v94; // edx
  unsigned int v95; // r9d
  GdiHandleEntryTable *v96; // rcx
  __int64 v97; // rdi
  DC *v98; // r12
  __int64 v99; // rcx
  __int64 v100; // r15
  unsigned int v101; // eax
  __int64 v102; // r14
  unsigned int v103; // r10d
  unsigned int v104; // ebp
  unsigned int v105; // r13d
  __int64 v106; // r9
  __int64 v107; // rbx
  unsigned int v108; // eax
  unsigned __int64 v109; // rdx
  __int64 v110; // r8
  DC *v111; // rdx
  void *v112; // rcx
  void *v113; // rcx
  void *v114; // rcx
  void *v115; // rcx
  void *v116; // rcx
  void *v117; // rcx
  struct PDEV *v118; // rbx
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rsi
  struct _ERESOURCE *v122; // rbp
  __int64 v123; // rbp
  int v124; // edx
  __int64 v125; // rcx
  int v126; // r8d
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v127; // rbp
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v128; // rcx
  bool v129; // zf
  int v130; // ebp
  __int64 v131; // r14
  __int64 v132; // rcx
  int v133; // r8d
  struct _ERESOURCE *v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 ProcessWow64Process; // rax
  int v138; // ecx
  unsigned __int64 v139; // rbx
  struct _DC_ATTR *v140; // rbx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // [rsp+50h] [rbp-48h] BYREF
  __int64 v144; // [rsp+58h] [rbp-40h]
  struct PDEV *v145; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)*this + 6);
  if ( (*(_DWORD *)(v4 + 40) & 0x80u) != 0 )
  {
    v5 = 0;
    LOBYTE(v145) = 0;
  }
  else
  {
    v5 = 1;
    LOBYTE(v145) = 1;
    v6 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
      ExEnterPriorityRegionAndAcquireResourceShared(v7);
    v8 = *(_QWORD *)(v6 + 80);
    v4 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v4,
        (unsigned int)&LockAcquireShared,
        v9,
        v8,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  }
  v10 = *(_QWORD *)*this;
  v12 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  v13 = *(struct _ERESOURCE **)(v12 + 1912);
  if ( v13 )
  {
    PsEnterPriorityRegion(v11);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
  }
  v14 = *(_QWORD *)(v12 + 1912);
  v16 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
  if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v16, v15, v17, v14, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
  v143 = 0LL;
  LODWORD(v144) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v143, (unsigned __int16)v10 | ((unsigned int)v10 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !(_DWORD)v144 )
    goto LABEL_148;
  v19 = SGDGetSessionState(v18);
  v20 = v143;
  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 24) + 8008LL);
  v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v21, *(_DWORD *)v143 & 0xFFFFFF);
  v23 = *(_QWORD *)(v21 + 16);
  v24 = v22;
  v25 = *(_DWORD *)(v23 + 2056);
  v26 = v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16);
  if ( v22 >= (unsigned int)v26
    || (v22 >= v25
      ? (v26 = ((v22 - v25) >> 16) + 1,
         v27 = *(_QWORD *)(v23 + 8 * v26 + 8),
         v24 = -65536 * ((v22 - v25) >> 16) - v25 + v22)
      : (v27 = *(_QWORD *)(v23 + 8)),
        (unsigned int)v24 >= *(_DWORD *)(v27 + 20)) )
  {
    v28 = 0LL;
  }
  else
  {
    v26 = 2LL * (unsigned __int8)v24;
    v28 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
  }
  if ( *(_BYTE *)(v20 + 14) != 1 || *(_WORD *)(v20 + 12) != WORD1(v10) )
  {
LABEL_146:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v143);
    if ( (_DWORD)v144 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v143);
LABEL_148:
    GreReleaseHmgrSemaphore(v18);
    EngSetLastError(0xAAu);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v145);
    return;
  }
  if ( *(_WORD *)(v28 + 12) != 1 || *(_DWORD *)(v28 + 8) )
  {
    *(_BYTE *)(v20 + 15) |= 8u;
    goto LABEL_146;
  }
  v29 = *(_BYTE *)(v20 + 15);
  if ( (v29 & 1) != 0 )
    goto LABEL_146;
  *(_BYTE *)(v20 + 15) = v29 | 0x40;
  v30 = *(_QWORD *)(SGDGetSessionState(v26) + 24);
  v31 = *(_QWORD *)(v30 + 8008);
  v32 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v30) + 24) + 8008LL);
  v33 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v32, *(_DWORD *)v20 & 0xFFFFFF);
  v34 = *(_QWORD *)(v32 + 16);
  v35 = v33;
  v36 = *(_DWORD *)(v34 + 2056);
  if ( v33 >= v36 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16)
    || (v33 >= v36
      ? (v37 = *(_QWORD *)(v34 + 8LL * (((v33 - v36) >> 16) + 1) + 8), v35 = -65536 * ((v33 - v36) >> 16) - v36 + v33)
      : (v37 = *(_QWORD *)(v34 + 8)),
        (unsigned int)v35 >= *(_DWORD *)(v37 + 20)) )
  {
    v38 = 0LL;
  }
  else
  {
    v38 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * (v35 >> 8)) + 16LL * (unsigned __int8)v35 + 8);
  }
  v39 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v31, (unsigned __int16)*v38 | (*v38 >> 8) & 0xFF0000u);
  v40 = *(_QWORD *)(v31 + 16);
  v41 = v39;
  v42 = *(_DWORD *)(v40 + 2056);
  if ( v39 < v42 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
  {
    if ( v39 >= v42 )
    {
      v43 = *(GdiHandleEntryTable **)(v40 + 8LL * (((v39 - v42) >> 16) + 1) + 8);
      v41 = -65536 * ((v39 - v42) >> 16) - v42 + v39;
    }
    else
    {
      v43 = *(GdiHandleEntryTable **)(v40 + 8);
    }
    GdiHandleEntryTable::ReleaseEntryLock(v43, v41);
  }
  KeLeaveCriticalRegion();
  v45 = *(_QWORD *)(SGDGetSessionState(v44) + 24);
  v46 = *(_QWORD *)(v45 + 1912);
  v48 = *(_QWORD *)(SGDGetSessionState(v47) + 24);
  if ( *(_DWORD *)(v48 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v48, (unsigned int)&LockRelease, v49, v46, (__int64)L"GreBaseGlobals.hsemHmgr");
  v50 = *(struct _ERESOURCE **)(v45 + 1912);
  if ( v50 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v50);
    PsLeavePriorityRegion(v52, v51);
  }
  XDCOBJ::bCleanDC(this, HIBYTE(a2) & 1);
  if ( v5 )
  {
    v54 = *(_QWORD *)(SGDGetSessionState(v53) + 24);
    v55 = *(_QWORD *)(v54 + 80);
    v57 = *(_QWORD *)(SGDGetSessionState(v56) + 24);
    if ( *(_DWORD *)(v57 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v57,
        (unsigned int)&LockRelease,
        v58,
        v55,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
    v53 = *(struct _ERESOURCE **)(v54 + 80);
    if ( v53 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v53);
      PsLeavePriorityRegion(v60, v59);
    }
  }
  if ( (a2 & 0x800000) == 0 )
  {
    v61 = *this;
    v62 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v53) + 24) + 8008LL);
    v63 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v62,
            (unsigned __int16)*(_DWORD *)v61 | (*(_DWORD *)v61 >> 8) & 0xFF0000u);
    v64 = *(_QWORD *)(v62 + 16);
    v65 = v63;
    v66 = *(_DWORD *)(v64 + 2056);
    v67 = v66 + ((*(unsigned __int16 *)(v64 + 2) + 0xFFFF) << 16);
    if ( v63 >= v67 )
    {
      v69 = 0LL;
    }
    else
    {
      if ( v63 >= v66 )
      {
        v68 = *(_QWORD *)(v64 + 8LL * (((v63 - v66) >> 16) + 1) + 8);
        v63 += -65536 * ((v63 - v66) >> 16) - v66;
      }
      else
      {
        v68 = *(_QWORD *)(v64 + 8);
      }
      v69 = 0LL;
      if ( v63 < *(_DWORD *)(v68 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v68 + 24) + 8 * ((unsigned __int64)v63 >> 8))
                     + 16LL * (unsigned __int8)v63
                     + 8) )
      {
        v69 = *(_QWORD *)v68 + 24LL * v63;
      }
    }
    v70 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v62, v65);
    v72 = v70;
    if ( v70 >= v67
      || (v70 >= v66
        ? (v71 = ((v70 - v66) >> 16) + 1,
           v73 = *(_QWORD *)(v64 + 8 * v71 + 8),
           v72 = -65536 * ((v70 - v66) >> 16) - v66 + v70)
        : (v73 = *(_QWORD *)(v64 + 8)),
          (unsigned int)v72 >= *(_DWORD *)(v73 + 20)) )
    {
      v74 = 0LL;
    }
    else
    {
      v71 = 2LL * (unsigned __int8)v72;
      v74 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v73 + 24) + 8 * (v72 >> 8)) + 16LL * (unsigned __int8)v72 + 8);
    }
    if ( v74 != v61 )
      v69 = 0LL;
    v75 = *(_QWORD *)(v69 + 16);
    if ( v75 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v71);
      v77 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v138 = *((_DWORD *)v77 + 73);
        if ( ProcessWow64Process )
          v139 = (unsigned int)__ROR4__(v75, 32 - (v138 & 0x1F));
        else
          v139 = __ROR8__(v75, 64 - (v138 & 0x3Fu));
        v140 = (struct _DC_ATTR *)(*((unsigned int *)v77 + 73) ^ v139);
        if ( v140 )
        {
          *(_QWORD *)(v69 + 16) = 0LL;
          if ( (*((_DWORD *)v61 + 11) & 2) == 0 )
            DC::SaveAttributes(v61, v140);
          HmgFreeDcAttr(v140);
        }
      }
      else
      {
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
    }
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  v78 = *this;
  v143 = 0LL;
  LODWORD(v144) = 0;
  v79 = *((_QWORD *)v78 + 12);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v143,
    (unsigned __int16)*(_DWORD *)v79 | (*(_DWORD *)v79 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !(_DWORD)v144 )
    goto LABEL_64;
  v81 = (_DWORD *)v143;
  v82 = *(_BYTE *)(v143 + 14);
  if ( v82 == 5 )
  {
    v141 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v79 + 680);
    v142 = 0LL;
LABEL_132:
    TrackObjectReferenceDecrement(v142, v141);
    goto LABEL_55;
  }
  if ( v82 == 16 )
  {
    v141 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v79 + 136);
    v142 = 2LL;
    goto LABEL_132;
  }
LABEL_55:
  --*(_DWORD *)(v79 + 8);
  v83 = *(_QWORD *)(SGDGetSessionState(v80) + 24);
  v84 = *(_QWORD *)(v83 + 8008);
  v85 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v83) + 24) + 8008LL);
  v86 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v85, *v81 & 0xFFFFFF);
  v87 = *(_QWORD *)(v85 + 16);
  v88 = v86;
  v89 = *(_DWORD *)(v87 + 2056);
  if ( v86 >= v89 + ((*(unsigned __int16 *)(v87 + 2) + 0xFFFF) << 16) )
  {
    EntryObject = 0LL;
  }
  else
  {
    if ( v86 >= v89 )
    {
      v90 = *(GdiHandleEntryTable **)(v87 + 8LL * (((v86 - v89) >> 16) + 1) + 8);
      v88 = -65536 * ((v86 - v89) >> 16) - v89 + v86;
    }
    else
    {
      v90 = *(GdiHandleEntryTable **)(v87 + 8);
    }
    EntryObject = GdiHandleEntryTable::GetEntryObject(v90, v88);
  }
  v92 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)v84,
          (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000u);
  v93 = *(_QWORD *)(v84 + 16);
  v94 = v92;
  v95 = *(_DWORD *)(v93 + 2056);
  if ( v92 < v95 + ((*(unsigned __int16 *)(v93 + 2) + 0xFFFF) << 16) )
  {
    if ( v92 >= v95 )
    {
      v96 = *(GdiHandleEntryTable **)(v93 + 8LL * (((v92 - v95) >> 16) + 1) + 8);
      v94 = -65536 * ((v92 - v95) >> 16) - v95 + v92;
    }
    else
    {
      v96 = *(GdiHandleEntryTable **)(v93 + 8);
    }
    GdiHandleEntryTable::ReleaseEntryLock(v96, v94);
  }
  KeLeaveCriticalRegion();
LABEL_64:
  v97 = *((_QWORD *)*this + 6);
  DC::vReleaseVis(*this);
  v98 = *this;
  *((_DWORD *)*this + 9) |= 0x10u;
  v100 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v99) + 24) + 8008LL);
  v101 = GdiHandleManager::DecodeIndex(
           (GdiHandleEntryDirectory **)v100,
           (unsigned __int16)*(_DWORD *)v98 | (*(_DWORD *)v98 >> 8) & 0xFF0000u);
  v102 = *(_QWORD *)(v100 + 16);
  v103 = v101;
  v104 = *(_DWORD *)(v102 + 2056);
  v105 = v104 + ((*(unsigned __int16 *)(v102 + 2) + 0xFFFF) << 16);
  if ( v101 >= v105 )
  {
    v107 = 0LL;
  }
  else
  {
    if ( v101 >= v104 )
    {
      v106 = *(_QWORD *)(v102 + 8LL * (((v101 - v104) >> 16) + 1) + 8);
      v101 += -65536 * ((v101 - v104) >> 16) - v104;
    }
    else
    {
      v106 = *(_QWORD *)(v102 + 8);
    }
    v107 = 0LL;
    if ( v101 < *(_DWORD *)(v106 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v106 + 24) + 8 * ((unsigned __int64)v101 >> 8))
                   + 16LL * (unsigned __int8)v101
                   + 8) )
    {
      v107 = *(_QWORD *)v106 + 24LL * v101;
    }
  }
  v108 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v100, v103);
  v109 = v108;
  if ( v108 >= v105
    || (v108 >= v104
      ? (v110 = *(_QWORD *)(v102 + 8LL * (((v108 - v104) >> 16) + 1) + 8),
         v109 = -65536 * ((v108 - v104) >> 16) - v104 + v108)
      : (v110 = *(_QWORD *)(v102 + 8)),
        (unsigned int)v109 >= *(_DWORD *)(v110 + 20)) )
  {
    v111 = 0LL;
  }
  else
  {
    v111 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v110 + 24) + 8 * (v109 >> 8)) + 16LL * (unsigned __int8)v109 + 8);
  }
  if ( v111 != v98 )
    v107 = 0LL;
  *(_BYTE *)(v107 + 15) |= 4u;
  v112 = (void *)*((_QWORD *)*this + 143);
  if ( v112 )
  {
    REGION::vDeleteREGION(v112);
    *((_QWORD *)*this + 143) = 0LL;
  }
  v113 = (void *)*((_QWORD *)*this + 145);
  if ( v113 )
  {
    REGION::vDeleteREGION(v113);
    *((_QWORD *)*this + 145) = 0LL;
  }
  v114 = (void *)*((_QWORD *)*this + 144);
  if ( v114 )
  {
    REGION::vDeleteREGION(v114);
    *((_QWORD *)*this + 144) = 0LL;
  }
  v115 = (void *)*((_QWORD *)*this + 146);
  if ( v115 )
  {
    REGION::vDeleteREGION(v115);
    *((_QWORD *)*this + 146) = 0LL;
  }
  v116 = (void *)*((_QWORD *)*this + 147);
  if ( v116 )
  {
    REGION::vDeleteREGION(v116);
    *((_QWORD *)*this + 147) = 0LL;
  }
  v117 = (void *)*((_QWORD *)*this + 148);
  if ( v117 )
  {
    REGION::vDeleteREGION(v117);
    *((_QWORD *)*this + 148) = 0LL;
  }
  v118 = (struct PDEV *)*((_QWORD *)*this + 7);
  v145 = v118;
  XDCOBJ::vDeleteCore((XDCOBJ *)this);
  v121 = *(_QWORD *)(SGDGetSessionState(v119) + 24);
  v122 = *(struct _ERESOURCE **)(v121 + 8);
  if ( v122 )
  {
    PsEnterPriorityRegion(v120);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v122);
  }
  v123 = *(_QWORD *)(v121 + 8);
  v125 = *(_QWORD *)(SGDGetSessionState(v120) + 24);
  if ( *(_DWORD *)(v125 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v125, v124, v126, v123, 16, (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v127 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v97 + 3520);
  v128 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v125) + 24);
  if ( v127 )
  {
    v128 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v128 + 1007);
    if ( v128 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v128, v127, 0);
  }
  v129 = (*(_DWORD *)(v97 + 8))-- == 1;
  v130 = *(_DWORD *)(v97 + 8);
  if ( v129 )
    RemovePDEVFromList((struct PDEV **)(v121 + 6080), (struct PDEV *)v97);
  v131 = *(_QWORD *)(v121 + 8);
  v132 = *(_QWORD *)(SGDGetSessionState(v128) + 24);
  if ( *(_DWORD *)(v132 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v132,
      (unsigned int)&LockRelease,
      v133,
      v131,
      (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v134 = *(struct _ERESOURCE **)(v121 + 8);
  if ( v134 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v134);
    PsLeavePriorityRegion(v136, v135);
  }
  if ( !v130 )
  {
    v144 = 1LL;
    v143 = v97;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v143);
  }
  if ( v118 )
    PDEVOBJ::vUnreferencePdev(&v145);
}
