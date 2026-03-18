/*
 * XREFs of GreDeleteObject @ 0x1C0023690
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C002C8B0 (UserSetDCVisRgn.c)
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0051830 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0051858 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C006D8F4 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserValidateCopyRgn @ 0x1C006EE60 (UserValidateCopyRgn.c)
 *     DeleteMaybeSpecialRgn @ 0x1C009C0F0 (DeleteMaybeSpecialRgn.c)
 *     bInitBRUSHOBJ @ 0x1C02E523C (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0019110 (bDeleteSurface.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E010 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C00221D0 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022520 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C0093780 (bDeletePalette.c)
 *     HmgFreeObjectAttr @ 0x1C00AD9C8 (HmgFreeObjectAttr.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDeleteObject(HRGN a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _SLIST_ENTRY *Next; // rsi
  _DWORD *v6; // rbp
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v8; // r14
  GdiHandleManager *v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r9d
  GdiHandleEntryTable *v15; // rcx
  struct _ENTRY *v16; // rax
  unsigned int v17; // edx
  char v18; // cl
  PSLIST_ENTRY v19; // r12
  GdiHandleManager *v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // r10d
  int v24; // ebp
  unsigned int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  struct _SLIST_ENTRY *v33; // rdx
  __int64 v34; // rbp
  GdiHandleManager *v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned int v39; // r9d
  __int64 v40; // r8
  _DWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  unsigned int v44; // edx
  unsigned int v45; // r9d
  GdiHandleEntryTable *v46; // rcx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v54; // rbx
  GdiHandleManager *v55; // rbx
  unsigned int v56; // eax
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  unsigned int v59; // r9d
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 ProcessWow64Process; // rax
  int v63; // ecx
  unsigned __int64 v64; // rbp
  struct _ENTRY *v65; // [rsp+30h] [rbp-78h] BYREF
  int v66; // [rsp+38h] [rbp-70h]
  int v67; // [rsp+3Ch] [rbp-6Ch]
  PSLIST_ENTRY ListEntry[7]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = ((unsigned int)a1 >> 16) & 0x1F;
  if ( !v2 )
    return 0LL;
  if ( v2 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)ListEntry, a1, 0, 0);
    if ( !ListEntry[0] || LODWORD(ListEntry[0][2].Next) )
      goto LABEL_102;
    Next = ListEntry[0]->Next;
    v6 = 0LL;
    v69 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v69, v3, v4);
    if ( !IsThreadCrossSessionAttached()
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v8 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v8 = 0LL;
    }
    v9 = gpHandleManager;
    v10 = 1;
    v66 = 1;
    v11 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)Next | ((unsigned int)Next >> 8) & 0xFF0000);
    v12 = *((_QWORD *)v9 + 2);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 2056);
    if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    {
      if ( v11 >= v14 )
      {
        v15 = *(GdiHandleEntryTable **)(v12 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
        v13 = -65536 * ((v11 - v14) >> 16) - v14 + v11;
      }
      else
      {
        v15 = *(GdiHandleEntryTable **)(v12 + 8);
      }
      v16 = GdiHandleEntryTable::AcquireEntryLock(v15, v13, 0);
      v65 = v16;
      if ( v16 )
      {
        _m_prefetchw((char *)v16 + 8);
        v67 = *((_DWORD *)v16 + 2);
        v17 = v67 & 0xFFFFFFFE;
        if ( (v67 & 0xFFFFFFFE) != (v69 & 0xFFFFFFFC) && v17 && (!v8 || v17 != *(_DWORD *)(v8 + 8)) )
          goto LABEL_105;
        v18 = *((_BYTE *)v16 + 15);
        if ( (v18 & 0x20) != 0 )
          goto LABEL_105;
        if ( (v18 & 0x40) != 0 )
        {
          v55 = gpHandleManager;
          v56 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v16 & 0xFFFFFF);
          v57 = *((_QWORD *)v55 + 2);
          v58 = v56;
          v59 = *(_DWORD *)(v57 + 2056);
          if ( v56 >= v59 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16)
            || (v56 >= v59
              ? (v60 = *(_QWORD *)(v57 + 8LL * (((v56 - v59) >> 16) + 1) + 8),
                 v58 = -65536 * ((v56 - v59) >> 16) - v59 + v56)
              : (v60 = *(_QWORD *)(v57 + 8)),
                (unsigned int)v58 >= *(_DWORD *)(v60 + 20)) )
          {
            v61 = 0LL;
          }
          else
          {
            v61 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * (v58 >> 8)) + 16LL * (unsigned __int8)v58 + 8);
          }
          if ( !*(_WORD *)(v61 + 12) || *(struct _KTHREAD **)(v61 + 16) != KeGetCurrentThread() )
          {
LABEL_105:
            HANDLELOCK::vUnlock((HANDLELOCK *)&v65);
            if ( !v66 )
              goto LABEL_46;
          }
        }
        if ( *((_BYTE *)v65 + 14) != 4 || *((_WORD *)v65 + 6) != WORD1(Next) )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v65);
        if ( !v66 )
        {
LABEL_46:
          if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)ListEntry) )
          {
            REGION::vDeleteREGION(ListEntry[0]);
            ListEntry[0] = 0LL;
            if ( v6 )
              HmgFreeObjectAttr(v6);
            goto LABEL_49;
          }
LABEL_102:
          v10 = 0;
LABEL_49:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)ListEntry);
          return v10;
        }
        v19 = ListEntry[0];
        v20 = gpHandleManager;
        v21 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)gpHandleManager,
                (unsigned __int16)ListEntry[0]->Next | ((unsigned __int64)ListEntry[0]->Next >> 8) & 0xFF0000);
        v22 = *((_QWORD *)v20 + 2);
        v23 = v21;
        v24 = *(unsigned __int16 *)(v22 + 2);
        v25 = *(_DWORD *)(v22 + 2056);
        if ( v21 >= v25 + ((v24 + 0xFFFF) << 16) )
        {
          v27 = 0LL;
        }
        else
        {
          if ( v21 >= v25 )
          {
            v26 = *(_QWORD *)(v22 + 8LL * (((v21 - v25) >> 16) + 1) + 8);
            v21 += -65536 * ((v21 - v25) >> 16) - v25;
          }
          else
          {
            v26 = *(_QWORD *)(v22 + 8);
          }
          v27 = 0LL;
          if ( v21 < *(_DWORD *)(v26 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                         + 16LL * (unsigned __int8)v21
                         + 8) )
          {
            v27 = *(_QWORD *)v26 + 24LL * v21;
          }
          LOWORD(v24) = *(_WORD *)(v22 + 2);
        }
        v28 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v20, v23);
        v31 = v28;
        v32 = v25 + (((unsigned __int16)v24 + 0xFFFF) << 16);
        if ( v28 >= (unsigned int)v32
          || (v28 >= v25
            ? (v32 = ((v28 - v25) >> 16) + 1,
               v29 = *(_QWORD *)(v22 + 8 * v32 + 8),
               v31 = -65536 * ((v28 - v25) >> 16) - v25 + v28)
            : (v29 = *(_QWORD *)(v22 + 8)),
              (unsigned int)v31 >= *(_DWORD *)(v29 + 20)) )
        {
          v33 = 0LL;
        }
        else
        {
          v32 = 2LL * (unsigned __int8)v31;
          v33 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v31 >> 8))
                                        + 16LL * (unsigned __int8)v31
                                        + 8);
        }
        if ( v33 != v19 )
          v27 = 0LL;
        v34 = *(_QWORD *)(v27 + 16);
        if ( v34 )
        {
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v32, v33, v29, v30);
          v54 = CurrentProcessWin32Process;
          if ( !CurrentProcessWin32Process )
            KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
          ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
          v63 = *((_DWORD *)v54 + 73);
          if ( ProcessWow64Process )
            v64 = (unsigned int)__ROR4__(v34, 32 - (v63 & 0x1F));
          else
            v64 = __ROR8__(v34, 64 - (v63 & 0x3Fu));
          v6 = (_DWORD *)(*((unsigned int *)v54 + 73) ^ v64);
          if ( v6 && (unsigned int)bPEBCacheHandle(2LL, v6, (_DWORD *)v27, (_DWORD **)&v65, (__int64)ListEntry) )
          {
            if ( v66 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v65);
            goto LABEL_49;
          }
        }
        else
        {
          v6 = 0LL;
        }
        v35 = gpHandleManager;
        v36 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v65 & 0xFFFFFF);
        v37 = *((_QWORD *)v35 + 2);
        v38 = v36;
        v39 = *(_DWORD *)(v37 + 2056);
        if ( v36 >= v39 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16)
          || (v36 >= v39
            ? (v40 = *(_QWORD *)(v37 + 8LL * (((v36 - v39) >> 16) + 1) + 8),
               v38 = -65536 * ((v36 - v39) >> 16) - v39 + v36)
            : (v40 = *(_QWORD *)(v37 + 8)),
              (unsigned int)v38 >= *(_DWORD *)(v40 + 20)) )
        {
          v41 = 0LL;
        }
        else
        {
          v41 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * (v38 >> 8)) + 16LL * (unsigned __int8)v38 + 8);
        }
        v42 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)v35,
                (unsigned __int16)*v41 | (*v41 >> 8) & 0xFF0000u);
        v43 = *((_QWORD *)v35 + 2);
        v44 = v42;
        v45 = *(_DWORD *)(v43 + 2056);
        if ( v42 < v45 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
        {
          if ( v42 >= v45 )
          {
            v46 = *(GdiHandleEntryTable **)(v43 + 8LL * (((v42 - v45) >> 16) + 1) + 8);
            v44 = -65536 * ((v42 - v45) >> 16) - v45 + v42;
          }
          else
          {
            v46 = *(GdiHandleEntryTable **)(v43 + 8);
          }
          GdiHandleEntryTable::ReleaseEntryLock(v46, v44);
        }
      }
    }
    KeLeaveCriticalRegion();
    goto LABEL_46;
  }
  v48 = v2 - 1;
  if ( !v48 )
    return 0LL;
  v49 = v48 - 4;
  if ( !v49 )
    return bDeleteSurface((__int64)a1);
  v50 = v49 - 3;
  if ( !v50 )
    return bDeletePalette((HPALETTE)a1);
  v51 = v50 - 2;
  if ( v51 )
  {
    if ( v51 == 6 )
      return bDeleteBrush((HBRUSH)a1);
    return 0LL;
  }
  if ( qword_1C029AFD8 && (int)qword_1C029AFD8() >= 0 && qword_1C029AFE0 )
    return (unsigned int)qword_1C029AFE0(a1, 0LL);
  else
    return 0;
}
