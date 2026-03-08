/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680
 * Callers:
 *     HmgUnlock @ 0x1C0009E98 (HmgUnlock.c)
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     HmgMarkUndeletable @ 0x1C003EA00 (HmgMarkUndeletable.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     EngUnlockSurface @ 0x1C00449E0 (EngUnlockSurface.c)
 *     EngLockSurface @ 0x1C0044C20 (EngLockSurface.c)
 *     HmgRemoveObject @ 0x1C0045C70 (HmgRemoveObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C0047B70 (INC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0048AE0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0049850 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00499E0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     HmgLock @ 0x1C0049C00 (HmgLock.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetBounds @ 0x1C004D5B0 (GreGetBounds.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004E8F0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     bDeleteRegion @ 0x1C0053FA0 (bDeleteRegion.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C00577F0 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     HmgFree @ 0x1C0059850 (HmgFree.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0059910 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0093290 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C009B410 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgShareLock @ 0x1C00A3060 (HmgShareLock.c)
 *     GreSetBitmapOwner @ 0x1C00A5460 (GreSetBitmapOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00A7AF0 (HmgShareUnlockRemoveObject.c)
 *     HmgLockIgnoreOwner @ 0x1C00A93E0 (HmgLockIgnoreOwner.c)
 *     HmgMarkDeletable @ 0x1C00AD0E0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00BC754 (HmgShareLockIgnoreStockBit.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEB84 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEC7C (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DED6C (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0185B1C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgMarkUnXferable @ 0x1C0186000 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C01860C0 (HmgMarkXferable.c)
 *     HmgSwapLockedHandleContents @ 0x1C0186370 (HmgSwapLockedHandleContents.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198EC0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198FBC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
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
