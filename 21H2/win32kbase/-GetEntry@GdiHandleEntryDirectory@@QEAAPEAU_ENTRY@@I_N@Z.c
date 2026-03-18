/*
 * XREFs of ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E010 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     GreGetObjectOwner @ 0x1C001F0C0 (GreGetObjectOwner.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C001F710 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C001F890 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001FE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     EngUnlockSurface @ 0x1C00205F0 (EngUnlockSurface.c)
 *     HmgShareLockEx @ 0x1C0020870 (HmgShareLockEx.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0021550 (HmgDecrementExclusiveReferenceCountEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C00220F0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0052470 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     MultiUserCleanupDCs @ 0x1C0061624 (MultiUserCleanupDCs.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     HmgModifyHandleType @ 0x1C0064660 (HmgModifyHandleType.c)
 *     HmgValidHandle @ 0x1C006EEE0 (HmgValidHandle.c)
 *     HmgSetLock @ 0x1C00B0344 (HmgSetLock.c)
 *     HmgReferenceCheckLock @ 0x1C00B17B0 (HmgReferenceCheckLock.c)
 *     NtGdiGetEntry @ 0x1C00CFD80 (NtGdiGetEntry.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::GetEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v8; // rdx

  v3 = a2;
  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  if ( a2 >= v4 )
  {
    v8 = ((a2 - v4) >> 16) + 1;
    v5 = *((_QWORD *)this + v8 + 1);
    v3 += ((1 - (_DWORD)v8) << 16) - v4;
  }
  else
  {
    v5 = *((_QWORD *)this + 1);
  }
  v6 = 0LL;
  if ( !a3 )
  {
    if ( v3 >= *(_DWORD *)(v5 + 20)
      || !*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v5 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                    + 16LL * (unsigned __int8)v3
                    + 8) )
    {
      return (struct _ENTRY *)v6;
    }
    return (struct _ENTRY *)(*(_QWORD *)v5 + 24LL * v3);
  }
  if ( v3 < *(_DWORD *)(v5 + 20) )
    return (struct _ENTRY *)(*(_QWORD *)v5 + 24LL * v3);
  return 0LL;
}
