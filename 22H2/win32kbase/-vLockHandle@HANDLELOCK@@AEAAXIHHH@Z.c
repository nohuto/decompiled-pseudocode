/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570
 * Callers:
 *     HmgUnlock @ 0x1C000B4A8 (HmgUnlock.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreSetBitmapOwner @ 0x1C003AA60 (GreSetBitmapOwner.c)
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00404E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00417D0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00425D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0042940 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     HmgLock @ 0x1C0042980 (HmgLock.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     HmgLockIgnoreOwner @ 0x1C005C9F0 (HmgLockIgnoreOwner.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     HmgMarkUndeletable @ 0x1C0060900 (HmgMarkUndeletable.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C0088BA0 (HmgFree.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C008B660 (HmgShareLockCheckIgnoreStockBit.c)
 *     EngUnlockSurface @ 0x1C0091EE0 (EngUnlockSurface.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0099840 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkDeletable @ 0x1C009DCF0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AC70C (HmgShareLockIgnoreStockBit.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2E48 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2F40 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3054 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3170 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0158E5C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgMarkUnXferable @ 0x1C0159310 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C01593D0 (HmgMarkXferable.c)
 *     HmgSwapLockedHandleContents @ 0x1C0159680 (HmgSwapLockedHandleContents.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C170 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // r15
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // ebx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rax
  int v29; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v31; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+70h] [rbp+8h]

  v6 = 0LL;
  v31 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v31);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v29 = *(_DWORD *)SGDGetUserSessionState(v12, v11, v13, v14),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v29 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v15 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v15 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v16 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v12) + 24) + 8008LL);
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)v16 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v16 + 16),
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
  v17 = *(_QWORD *)(v16 + 16);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( a2 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    *(_QWORD *)this = 0LL;
LABEL_39:
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
    return;
  }
  if ( a2 >= v18 )
  {
    v19 = *(_QWORD *)(v17 + 8LL * (((a2 - v18) >> 16) + 1) + 8);
    a2 += -65536 * ((a2 - v18) >> 16) - v18;
  }
  else
  {
    v19 = *(_QWORD *)(v17 + 8);
  }
  v20 = 0LL;
  if ( a2 < *(_DWORD *)(v19 + 20) )
  {
    v33 = 16LL * (unsigned __int8)a2;
    v21 = *(_QWORD **)(v19 + 24);
    v32 = 8 * ((unsigned __int64)a2 >> 8);
    v34 = v33 + *(_QWORD *)(*v21 + v32);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v34, 0LL);
    if ( a2 < *(_DWORD *)(v19 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + v32) + v33 + 8) )
    {
      v22 = 24LL * a2;
      *(_DWORD *)(v22 + *(_QWORD *)v19 + 8) |= 1u;
      v20 = v22 + *(_QWORD *)v19;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v34, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  *(_QWORD *)this = v20;
  if ( !v20 )
    goto LABEL_39;
  _m_prefetchw((const void *)(v20 + 8));
  v23 = *(unsigned int *)(v20 + 8);
  *((_DWORD *)this + 3) = v23;
  if ( !a4 )
  {
    if ( a3 )
    {
      v23 = (unsigned int)v23 & 0xFFFFFFFE;
      if ( (_DWORD)v23 != (v31 & 0xFFFFFFFC) && (_DWORD)v23 && (!v15 || (_DWORD)v23 != *(_DWORD *)(v15 + 8)) )
        goto LABEL_47;
    }
    if ( (*(_BYTE *)(v20 + 15) & 0x20) != 0 )
      goto LABEL_47;
  }
  if ( !a5 && (*(_BYTE *)(v20 + 15) & 0x40) != 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v23) + 24) + 8008LL);
    v25 = **(_DWORD **)this & 0xFFFFFF;
    if ( v25 >= 0x10000 )
    {
      if ( *(_DWORD *)v24 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v24 + 16),
                                    **(unsigned __int16 **)this,
                                    1)
             + 13) == HIWORD(v25) )
          v25 = (unsigned __int16)v25;
      }
      else
      {
        v25 = **(unsigned __int16 **)this;
      }
    }
    v26 = *(_QWORD *)(v24 + 16);
    v27 = *(_DWORD *)(v26 + 2056);
    if ( v25 < v27 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
    {
      if ( v25 >= v27 )
      {
        v28 = *(_QWORD *)(v26 + 8LL * (((v25 - v27) >> 16) + 1) + 8);
        v25 += -65536 * ((v25 - v27) >> 16) - v27;
      }
      else
      {
        v28 = *(_QWORD *)(v26 + 8);
      }
      if ( v25 < *(_DWORD *)(v28 + 20) )
        v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                       + 16LL * (unsigned __int8)v25
                       + 8);
    }
    if ( !*(_WORD *)(v6 + 12) || *(struct _KTHREAD **)(v6 + 16) != KeGetCurrentThread() )
LABEL_47:
      HANDLELOCK::vUnlock(this);
  }
}
