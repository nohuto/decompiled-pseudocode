/*
 * XREFs of GreDeleteObject @ 0x1C0043CD0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003B638 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0042860 (DeleteMaybeSpecialRgn.c)
 *     UserSetDCVisRgn @ 0x1C0044E20 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C00A9370 (UserValidateCopyRgn.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B5B14 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B5B3C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     bInitBRUSHOBJ @ 0x1C031D4F4 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0019D64 (-bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002D3CC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C004A620 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0051CB0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C00542B0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     HmgFreeObjectAttr @ 0x1C00D43C0 (HmgFreeObjectAttr.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1, __int64 a2)
{
  unsigned int v3; // eax
  volatile signed __int32 *v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  GdiHandleManager *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r14
  unsigned int v15; // r13d
  unsigned int v16; // edx
  __int64 v17; // r14
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v22; // edx
  char v23; // al
  GdiHandleManager *v24; // r13
  unsigned int v25; // eax
  __int64 v26; // r14
  unsigned int v27; // r8d
  unsigned int v28; // r15d
  unsigned int v29; // r12d
  __int64 v30; // r9
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned int v35; // r13d
  __int64 v36; // r8
  volatile signed __int32 *v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rcx
  GdiHandleManager *v40; // r14
  GdiHandleManager *v41; // rbx
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
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct _ERESOURCE *v62; // rdi
  __int64 v63; // rcx
  unsigned int v64; // eax
  unsigned int v65; // esi
  int v66; // ebx
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v68; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v70; // r14
  __int64 ProcessWow64Process; // rax
  int v72; // ecx
  unsigned __int64 v73; // r12
  __int64 v74; // [rsp+58h] [rbp-29h]
  __int64 v75; // [rsp+60h] [rbp-21h] BYREF
  int v76; // [rsp+68h] [rbp-19h]
  int v77; // [rsp+6Ch] [rbp-15h]
  PVOID Entry; // [rsp+78h] [rbp-9h] BYREF
  struct HOBJ__ *v79; // [rsp+80h] [rbp-1h]
  int v80; // [rsp+88h] [rbp+7h]
  __int64 v81; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v82; // [rsp+F0h] [rbp+6Fh] BYREF
  PERESOURCE v83; // [rsp+F8h] [rbp+77h] BYREF
  unsigned __int64 v84; // [rsp+100h] [rbp+7Fh]

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = ((unsigned int)a1 >> 16) & 0x1F;
  if ( v3 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&Entry, (HRGN)a1, 0, 0);
    v4 = (volatile signed __int32 *)Entry;
    if ( !Entry || *((_DWORD *)Entry + 19) )
      goto LABEL_114;
    v5 = *(_QWORD *)Entry;
    v6 = 0LL;
    v82 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v82);
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v66 = *(_DWORD *)SGDGetUserSessionState(v9, v8, v10, v11),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           v66 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v83 = *(PERESOURCE *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v83 = 0LL;
    }
    v76 = 1;
    v12 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v9) + 24) + 8008LL);
    v13 = GdiHandleManager::DecodeIndex(v12, (unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000);
    v14 = *((_QWORD *)v12 + 2);
    v15 = v13;
    v16 = *(_DWORD *)(v14 + 2056);
    if ( v13 >= v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
      goto LABEL_47;
    if ( v13 >= v16 )
    {
      v17 = *(_QWORD *)(v14 + 8LL * (((v13 - v16) >> 16) + 1) + 8);
      v15 = -65536 * ((v13 - v16) >> 16) - v16 + v13;
    }
    else
    {
      v17 = *(_QWORD *)(v14 + 8);
    }
    v18 = 0LL;
    if ( v15 < *(_DWORD *)(v17 + 20) )
    {
      v74 = 16LL * (unsigned __int8)v15;
      v19 = *(_QWORD **)(v17 + 24);
      v84 = 8 * ((unsigned __int64)v15 >> 8);
      v81 = v74 + *(_QWORD *)(*v19 + v84);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v81, 0LL);
      if ( v15 < *(_DWORD *)(v17 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + v84) + v74 + 8) )
      {
        v20 = 24LL * v15;
        *(_DWORD *)(v20 + *(_QWORD *)v17 + 8) |= 1u;
        v18 = v20 + *(_QWORD *)v17;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v81, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v75 = v18;
    if ( !v18 )
      goto LABEL_47;
    _m_prefetchw((const void *)(v18 + 8));
    CurrentThread = (struct _KTHREAD *)*(unsigned int *)(v18 + 8);
    v22 = *(_DWORD *)(v18 + 8) & 0xFFFFFFFE;
    v77 = (int)CurrentThread;
    if ( (((unsigned int)CurrentThread ^ v82 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
      && v22
      && (!v83 || v22 != LODWORD(v83->SystemResourcesList.Blink))
      || (v23 = *(_BYTE *)(v18 + 15), (v23 & 0x20) != 0)
      || (v23 & 0x40) != 0
      && ((v68 = HANDLELOCK::pObj((HANDLELOCK *)&v75), !*((_WORD *)v68 + 6))
       || (CurrentThread = KeGetCurrentThread(),
           v4 = (volatile signed __int32 *)Entry,
           *((struct _KTHREAD **)v68 + 2) != CurrentThread)) )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v75);
      if ( !v76 )
        goto LABEL_48;
    }
    if ( *(_BYTE *)(v75 + 14) != 4 || *(_WORD *)(v75 + 12) != WORD1(v5) )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v75);
    if ( !v76 )
    {
LABEL_48:
      v53 = SGDGetSessionState(CurrentThread);
      if ( v79 != *(struct HOBJ__ **)(*(_QWORD *)(v53 + 24) + 6392LL) )
      {
        v35 = 1;
        if ( HmgRemoveObjectImpl(v79, 1, 0, 0, 4, 0LL) == v4 )
        {
          v79 = 0LL;
          REGION::vDeleteREGION((PVOID)v4);
          Entry = 0LL;
          v4 = 0LL;
          if ( v6 )
            HmgFreeObjectAttr(v6);
          goto LABEL_52;
        }
      }
LABEL_114:
      v35 = 0;
LABEL_52:
      if ( !v80 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&Entry);
      if ( v4 )
        _InterlockedDecrement(v4 + 3);
      return v35;
    }
    v24 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(CurrentThread) + 24) + 8008LL);
    v25 = GdiHandleManager::DecodeIndex(v24, (unsigned __int16)*v4 | ((unsigned __int32)*v4 >> 8) & 0xFF0000);
    v26 = *((_QWORD *)v24 + 2);
    v27 = v25;
    v28 = *(_DWORD *)(v26 + 2056);
    v29 = v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16);
    if ( v25 >= v29 )
    {
      v31 = 0LL;
    }
    else
    {
      if ( v25 >= v28 )
      {
        v30 = *(_QWORD *)(v26 + 8LL * (((v25 - v28) >> 16) + 1) + 8);
        v25 += -65536 * ((v25 - v28) >> 16) - v28;
      }
      else
      {
        v30 = *(_QWORD *)(v26 + 8);
      }
      v31 = 0LL;
      if ( v25 < *(_DWORD *)(v30 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                     + 16LL * (unsigned __int8)v25
                     + 8) )
      {
        v31 = *(_QWORD *)v30 + 24LL * v25;
      }
    }
    v32 = GdiHandleManager::DecodeIndex(v24, v27);
    v34 = v32;
    v35 = 1;
    if ( v32 >= v29
      || (v32 >= v28
        ? (v33 = ((v32 - v28) >> 16) + 1,
           v36 = *(_QWORD *)(v26 + 8 * v33 + 8),
           v34 = -65536 * ((v32 - v28) >> 16) - v28 + v32)
        : (v36 = *(_QWORD *)(v26 + 8)),
          (unsigned int)v34 >= *(_DWORD *)(v36 + 20)) )
    {
      v37 = 0LL;
    }
    else
    {
      v33 = 2LL * (unsigned __int8)v34;
      v37 = *(volatile signed __int32 **)(*(_QWORD *)(**(_QWORD **)(v36 + 24) + 8 * (v34 >> 8))
                                        + 16LL * (unsigned __int8)v34
                                        + 8);
    }
    if ( v37 != v4 )
      v31 = 0LL;
    v38 = *(_QWORD *)(v31 + 16);
    if ( v38 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v33);
      v70 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v72 = *((_DWORD *)v70 + 73);
        if ( ProcessWow64Process )
        {
          v33 = (unsigned __int8)(32 - (v72 & 0x1F));
          v73 = (unsigned int)__ROR4__(v38, v33);
        }
        else
        {
          v33 = (unsigned __int8)(64 - (v72 & 0x3F));
          v73 = __ROR8__(v38, v33);
        }
        v6 = *((unsigned int *)v70 + 73) ^ v73;
        if ( v6 )
        {
          if ( (unsigned int)bPEBCacheHandle(2LL, v6, v31, &v75, &Entry) )
          {
            if ( v76 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v75);
            v4 = (volatile signed __int32 *)Entry;
            goto LABEL_52;
          }
          v4 = (volatile signed __int32 *)Entry;
        }
        goto LABEL_38;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v6 = 0LL;
LABEL_38:
    v39 = *(_QWORD *)(SGDGetSessionState(v33) + 24);
    v40 = *(GdiHandleManager **)(v39 + 8008);
    v41 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v39) + 24) + 8008LL);
    v42 = GdiHandleManager::DecodeIndex(v41, *(_DWORD *)v75 & 0xFFFFFF);
    v43 = *((_QWORD *)v41 + 2);
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
    v48 = GdiHandleManager::DecodeIndex(v40, (unsigned __int16)*v47 | (*v47 >> 8) & 0xFF0000);
    v49 = *((_QWORD *)v40 + 2);
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
LABEL_47:
    KeLeaveCriticalRegion();
    goto LABEL_48;
  }
  v55 = v3 - 1;
  if ( !v55 )
    return 0LL;
  v56 = v55 - 4;
  if ( !v56 )
    return bDeleteSurface((__int64)a1, a2);
  v57 = v56 - 3;
  if ( v57 )
  {
    v58 = v57 - 2;
    if ( !v58 )
    {
      if ( qword_1C02D57D8 && (int)qword_1C02D57D8() >= 0 && qword_1C02D57E0 )
        return (unsigned int)qword_1C02D57E0(a1, 0LL);
      else
        return 0;
    }
    if ( v58 == 6 )
      return bDeleteBrush(a1);
    return 0LL;
  }
  v61 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v62 = *(struct _ERESOURCE **)(v61 + 40);
  v83 = v62;
  if ( v62 )
  {
    PsEnterPriorityRegion(v61, v60);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v62);
  }
  EPALOBJ::EPALOBJ((EPALOBJ *)&v81, (HPALETTE)a1);
  v63 = v81;
  if ( !v81 || (*(_DWORD *)(v81 + 24) & 0x1000000) != 0 )
  {
    v65 = 0;
  }
  else
  {
    v64 = XEPALOBJ::bDeletePaletteInternal((XEPALOBJ *)&v81, 0);
    v63 = v81;
    v65 = v64;
  }
  if ( v63 )
    HmgDecrementShareReferenceCountEx(v63, 0LL);
  SEMOBJ::vUnlock(&v83);
  return v65;
}
