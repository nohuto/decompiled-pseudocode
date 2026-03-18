/*
 * XREFs of GreDeleteObject @ 0x1C00472A0
 * Callers:
 *     UserSetDCVisRgn @ 0x1C004C660 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C005C980 (UserValidateCopyRgn.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00A03D8 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A0400 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DeleteMaybeSpecialRgn @ 0x1C00A5AB0 (DeleteMaybeSpecialRgn.c)
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D250 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F908 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C0043510 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDeleteObject(HPALETTE a1)
{
  unsigned int v2; // eax
  __int64 v3; // r14
  _DWORD *v4; // r15
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _ERESOURCE *v10; // r13
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // r12d
  unsigned int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rbx
  _QWORD *v18; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v20; // edx
  char v21; // al
  _DWORD *v22; // r13
  __int64 v23; // r15
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // r8d
  unsigned int v27; // r14d
  unsigned int v28; // r12d
  __int64 v29; // r9
  __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rcx
  bool v33; // cf
  unsigned __int64 v34; // rdx
  unsigned int v35; // r12d
  __int64 v36; // r8
  _DWORD *v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  unsigned int v45; // r9d
  __int64 v46; // r8
  _DWORD *v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // rcx
  unsigned int v50; // edx
  unsigned int v51; // r9d
  GdiHandleEntryTable *v52; // rcx
  __int64 v53; // rax
  PVOID v54; // rax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  struct _ERESOURCE *v61; // rdi
  int *v62; // rcx
  unsigned int v63; // eax
  unsigned int v64; // edi
  int v65; // ebx
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v67; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v69; // rsi
  __int64 ProcessWow64Process; // rax
  int v71; // ecx
  unsigned __int64 v72; // r15
  __int64 v73; // [rsp+58h] [rbp-49h]
  __int64 v74; // [rsp+60h] [rbp-41h] BYREF
  int v75; // [rsp+68h] [rbp-39h]
  int v76; // [rsp+6Ch] [rbp-35h]
  PVOID Entry[5]; // [rsp+78h] [rbp-29h] BYREF
  struct HOBJ__ *v78; // [rsp+A0h] [rbp-1h]
  int *v79; // [rsp+108h] [rbp+67h] BYREF
  struct _ERESOURCE *v80; // [rsp+110h] [rbp+6Fh] BYREF
  __int64 v81; // [rsp+118h] [rbp+77h] BYREF
  unsigned __int64 v82; // [rsp+120h] [rbp+7Fh]

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = ((unsigned int)a1 >> 16) & 0x1F;
  if ( v2 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)Entry, (HRGN)a1, 0, 0);
    if ( !Entry[0] || *((_DWORD *)Entry[0] + 19) )
      goto LABEL_109;
    v3 = *(_QWORD *)Entry[0];
    v4 = 0LL;
    v81 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v81);
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v65 = *(_DWORD *)SGDGetUserSessionState(v7, v6, v8, v9),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           v65 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v10 = *(struct _ERESOURCE **)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v10 = 0LL;
    }
    v80 = v10;
    v75 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
    v12 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v11,
            (unsigned __int16)v3 | ((unsigned int)v3 >> 8) & 0xFF0000);
    v13 = *(_QWORD *)(v11 + 16);
    v14 = v12;
    v15 = *(_DWORD *)(v13 + 2056);
    if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
      goto LABEL_48;
    if ( v12 >= v15 )
    {
      v16 = *(_QWORD *)(v13 + 8LL * (((v12 - v15) >> 16) + 1) + 8);
      v14 = -65536 * ((v12 - v15) >> 16) - v15 + v12;
    }
    else
    {
      v16 = *(_QWORD *)(v13 + 8);
    }
    v17 = 0LL;
    if ( v14 < *(_DWORD *)(v16 + 20) )
    {
      v73 = 16LL * (unsigned __int8)v14;
      v18 = *(_QWORD **)(v16 + 24);
      v82 = 8 * ((unsigned __int64)v14 >> 8);
      v79 = (int *)(v73 + *(_QWORD *)(*v18 + v82));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v79, 0LL);
      if ( v14 < *(_DWORD *)(v16 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + v82) + v73 + 8) )
      {
        *(_DWORD *)(24LL * v14 + *(_QWORD *)v16 + 8) |= 1u;
        v17 = 24LL * v14 + *(_QWORD *)v16;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v79, 0LL);
        KeLeaveCriticalRegion();
      }
      v10 = v80;
    }
    v74 = v17;
    if ( !v17 )
      goto LABEL_48;
    _m_prefetchw((const void *)(v17 + 8));
    CurrentThread = (struct _KTHREAD *)*(unsigned int *)(v17 + 8);
    v20 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
    v76 = (int)CurrentThread;
    if ( (((unsigned int)CurrentThread ^ v81 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
      && v20
      && (!v10 || v20 != LODWORD(v10->SystemResourcesList.Blink))
      || (v21 = *(_BYTE *)(v17 + 15), (v21 & 0x20) != 0)
      || (v21 & 0x40) != 0
      && ((v67 = HANDLELOCK::pObj((HANDLELOCK *)&v74), !*((_WORD *)v67 + 6))
       || (CurrentThread = KeGetCurrentThread(), *((struct _KTHREAD **)v67 + 2) != CurrentThread)) )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v74);
      if ( !v75 )
        goto LABEL_49;
    }
    if ( *(_BYTE *)(v74 + 14) != 4 || *(_WORD *)(v74 + 12) != WORD1(v3) )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v74);
    if ( !v75 )
    {
LABEL_49:
      v53 = SGDGetSessionState(CurrentThread);
      if ( v78 != *(struct HOBJ__ **)(*(_QWORD *)(v53 + 24) + 6392LL) )
      {
        v35 = 1;
        v54 = (PVOID)HmgRemoveObjectImpl(v78, 1u, 0, 0, 4, 0LL);
        if ( v54 == Entry[0] )
        {
          v78 = 0LL;
          REGION::vDeleteREGION(Entry[0]);
          Entry[0] = 0LL;
          if ( v4 )
            HmgFreeObjectAttr(v4);
          goto LABEL_53;
        }
      }
LABEL_109:
      v35 = 0;
LABEL_53:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)Entry);
      return v35;
    }
    v22 = Entry[0];
    v23 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(CurrentThread) + 24) + 8008LL);
    v24 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v23,
            (unsigned __int16)*v22 | (*v22 >> 8) & 0xFF0000u);
    v25 = *(_QWORD *)(v23 + 16);
    v26 = v24;
    v27 = *(_DWORD *)(v25 + 2056);
    v28 = v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16);
    if ( v24 >= v28 )
    {
      v30 = 0LL;
    }
    else
    {
      if ( v24 >= v27 )
      {
        v29 = *(_QWORD *)(v25 + 8LL * (((v24 - v27) >> 16) + 1) + 8);
        v24 += -65536 * ((v24 - v27) >> 16) - v27;
      }
      else
      {
        v29 = *(_QWORD *)(v25 + 8);
      }
      v30 = 0LL;
      if ( v24 < *(_DWORD *)(v29 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                     + 16LL * (unsigned __int8)v24
                     + 8) )
      {
        v30 = *(_QWORD *)v29 + 24LL * v24;
      }
    }
    v31 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v23, v26);
    v33 = v31 < v28;
    v34 = v31;
    v35 = 1;
    if ( v33
      && (v31 >= v27
        ? (v32 = ((v31 - v27) >> 16) + 1,
           v36 = *(_QWORD *)(v25 + 8 * v32 + 8),
           v34 = -65536 * ((v31 - v27) >> 16) - v27 + v31)
        : (v36 = *(_QWORD *)(v25 + 8)),
          (unsigned int)v34 < *(_DWORD *)(v36 + 20)) )
    {
      v32 = 2LL * (unsigned __int8)v34;
      v37 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v36 + 24) + 8 * (v34 >> 8)) + 16LL * (unsigned __int8)v34 + 8);
    }
    else
    {
      v37 = 0LL;
    }
    if ( v37 != v22 )
      v30 = 0LL;
    v38 = *(_QWORD *)(v30 + 16);
    if ( v38 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v32);
      v69 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v71 = *((_DWORD *)v69 + 73);
        if ( ProcessWow64Process )
        {
          v32 = (unsigned __int8)(32 - (v71 & 0x1F));
          v72 = (unsigned int)__ROR4__(v38, v32);
        }
        else
        {
          v32 = (unsigned __int8)(64 - (v71 & 0x3F));
          v72 = __ROR8__(v38, v32);
        }
        v4 = (_DWORD *)(*((unsigned int *)v69 + 73) ^ v72);
        if ( v4 && (unsigned int)bPEBCacheHandle(2LL, v4, (_DWORD *)v30, (__int64)&v74, (__int64)Entry) )
        {
          if ( v75 )
            HANDLELOCK::vUnlock((HANDLELOCK *)&v74);
          goto LABEL_53;
        }
        goto LABEL_39;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v4 = 0LL;
LABEL_39:
    v39 = *(_QWORD *)(SGDGetSessionState(v32) + 24);
    v40 = *(_QWORD *)(v39 + 8008);
    v41 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v39) + 24) + 8008LL);
    v42 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v41, *(_DWORD *)v74 & 0xFFFFFF);
    v43 = *(_QWORD *)(v41 + 16);
    v44 = v42;
    v45 = *(_DWORD *)(v43 + 2056);
    if ( v42 >= v45 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16)
      || (v42 >= v45
        ? (v46 = *(_QWORD *)(v43 + 8LL * (((v42 - v45) >> 16) + 1) + 8), v44 = -65536 * ((v42 - v45) >> 16) - v45 + v42)
        : (v46 = *(_QWORD *)(v43 + 8)),
          (unsigned int)v44 >= *(_DWORD *)(v46 + 20)) )
    {
      v47 = 0LL;
    }
    else
    {
      v47 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * (v44 >> 8)) + 16LL * (unsigned __int8)v44 + 8);
    }
    v48 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v40,
            (unsigned __int16)*v47 | (*v47 >> 8) & 0xFF0000u);
    v49 = *(_QWORD *)(v40 + 16);
    v50 = v48;
    v51 = *(_DWORD *)(v49 + 2056);
    if ( v48 < v51 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
    {
      if ( v48 >= v51 )
      {
        v52 = *(GdiHandleEntryTable **)(v49 + 8LL * (((v48 - v51) >> 16) + 1) + 8);
        v50 = -65536 * ((v48 - v51) >> 16) - v51 + v48;
      }
      else
      {
        v52 = *(GdiHandleEntryTable **)(v49 + 8);
      }
      GdiHandleEntryTable::ReleaseEntryLock(v52, v50);
    }
LABEL_48:
    KeLeaveCriticalRegion();
    goto LABEL_49;
  }
  v56 = v2 - 1;
  if ( !v56 )
    return 0LL;
  v57 = v56 - 4;
  if ( !v57 )
    return bDeleteSurface();
  v58 = v57 - 3;
  if ( v58 )
  {
    v59 = v58 - 2;
    if ( !v59 )
    {
      if ( qword_1C0294668 && (int)qword_1C0294668() >= 0 && qword_1C0294670 )
        return (unsigned int)qword_1C0294670(a1, 0LL);
      else
        return 0;
    }
    if ( v59 == 6 )
      return bDeleteBrush((HBRUSH)a1);
    return 0LL;
  }
  v61 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 40LL);
  v80 = v61;
  if ( v61 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v61);
  }
  EPALOBJ::EPALOBJ((EPALOBJ *)&v79, a1);
  v62 = v79;
  if ( !v79 || (v79[6] & 0x1000000) != 0 )
  {
    v64 = 0;
  }
  else
  {
    v63 = XEPALOBJ::bDeletePalette(&v79, 0LL);
    v62 = v79;
    v64 = v63;
  }
  if ( v62 )
    HmgDecrementShareReferenceCountEx(v62, 0LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v80);
  return v64;
}
