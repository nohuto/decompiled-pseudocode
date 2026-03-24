/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0030A00
 * Callers:
 *     HmgMarkUndeletable @ 0x1C001CDB0 (HmgMarkUndeletable.c)
 *     GreSetBrushOwner @ 0x1C001DDE0 (GreSetBrushOwner.c)
 *     INC_SHARE_REF_CNT @ 0x1C002E2E0 (INC_SHARE_REF_CNT.c)
 *     EngUnlockSurface @ 0x1C002E4A0 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C002E710 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockEx @ 0x1C002EA50 (HmgShareLockEx.c)
 *     HmgLock @ 0x1C002EE50 (HmgLock.c)
 *     HmgShareLockCheck @ 0x1C002F050 (HmgShareLockCheck.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C002F320 (HmgDecrementExclusiveReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C002FBA0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     HmgShareLock @ 0x1C002FC10 (HmgShareLock.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0031B30 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgRemoveObject @ 0x1C0032640 (HmgRemoveObject.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0032E40 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgSetOwner @ 0x1C00368E0 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     HmgFree @ 0x1C007C860 (HmgFree.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0080BC8 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C00816D0 (HmgLockIgnoreOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0086470 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkDeletable @ 0x1C0087350 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C009A4B8 (HmgShareLockIgnoreStockBit.c)
 *     HmgMarkUnXferable @ 0x1C009B810 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C009C350 (HmgMarkXferable.c)
 *     HmgUnlock @ 0x1C00A2804 (HmgUnlock.c)
 *     HmgSwapLockedHandleContents @ 0x1C00BE150 (HmgSwapLockedHandleContents.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBB58 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBC44 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBD5C (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBE68 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBF54 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C013F100 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030700 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0031220 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // rbp
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  GdiHandleManager *v14; // rdi
  __int64 v15; // rdi
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v27; // edx
  GdiHandleManager *v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]
  __int64 v37; // [rsp+30h] [rbp-38h]
  __int64 v38; // [rsp+70h] [rbp+8h]

  v6 = 0LL;
  v35 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v35);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v12, v11),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v13 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v13 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v14 = gpHandleManager;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a2,
                                  1)
           + 13) == HIWORD(a2) )
        a2 = (unsigned __int16)a2;
    }
    else
    {
      a2 = (unsigned __int16)a2;
    }
  }
  v15 = *((_QWORD *)v14 + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( a2 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    *(_QWORD *)this = 0LL;
LABEL_34:
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
    return;
  }
  v17 = ((a2 - v16) >> 16) + 1;
  if ( a2 < v16 )
    v17 = 0LL;
  v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
  if ( (_DWORD)v17 )
    a2 += ((1 - (_DWORD)v17) << 16) - v16;
  v19 = 0LL;
  if ( a2 < *(_DWORD *)(v18 + 20) )
  {
    v37 = 16LL * (unsigned __int8)a2;
    v20 = *(_QWORD **)(v18 + 24);
    v36 = 8 * ((unsigned __int64)a2 >> 8);
    v38 = v37 + *(_QWORD *)(*v20 + v36);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v38, 0LL);
    if ( a2 < *(_DWORD *)(v18 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + v36) + v37 + 8) )
    {
      v21 = 24LL * a2;
      *(_DWORD *)(*(_QWORD *)v18 + v21 + 8) |= 1u;
      v19 = v21 + *(_QWORD *)v18;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v38, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  *(_QWORD *)this = v19;
  if ( !v19 )
    goto LABEL_34;
  _m_prefetchw((const void *)(v19 + 8));
  v22 = *(_DWORD *)(v19 + 8);
  *((_DWORD *)this + 3) = v22;
  if ( !a4 )
  {
    if ( a3 )
    {
      v23 = v22 & 0xFFFFFFFE;
      if ( v23 != (v35 & 0xFFFFFFFC) && v23 && (!v13 || v23 != *(_DWORD *)(v13 + 8)) )
        goto LABEL_29;
    }
    if ( (*(_BYTE *)(v19 + 15) & 0x20) != 0 )
      goto LABEL_29;
  }
  if ( !a5 && (*(_BYTE *)(v19 + 15) & 0x40) != 0 )
  {
    v27 = *(_DWORD *)v19;
    v28 = gpHandleManager;
    v29 = GdiHandleManager::DecodeIndex(gpHandleManager, v27 & 0xFFFFFF);
    v30 = *((_QWORD *)v28 + 2);
    v31 = v29;
    v32 = *(_DWORD *)(v30 + 2056);
    if ( v29 < v32 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
    {
      v33 = ((v29 - v32) >> 16) + 1;
      if ( v29 < v32 )
        v33 = 0LL;
      v34 = *(_QWORD *)(v30 + 8 * v33 + 8);
      if ( (_DWORD)v33 )
        v31 = ((1 - (_DWORD)v33) << 16) - v32 + v29;
      if ( (unsigned int)v31 < *(_DWORD *)(v34 + 20) )
        v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * (v31 >> 8)) + 16LL * (unsigned __int8)v31 + 8);
    }
    if ( !*(_WORD *)(v6 + 12) || *(struct _KTHREAD **)(v6 + 16) != KeGetCurrentThread() )
LABEL_29:
      HANDLELOCK::vUnlock(this);
  }
}
