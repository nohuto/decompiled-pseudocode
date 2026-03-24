/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C002E210
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C000D7B0 (vDynamicConvertNewSurfaceDCs.c)
 *     GreDCSelectPen @ 0x1C0020D90 (GreDCSelectPen.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0021EE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0028144 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C002827C (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002A988 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002D268 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C002D890 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00306C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C009F904 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00A8750 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00B344C (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00BCB40 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DBB4 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C01415E0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C01427C0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0144690 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002F7F0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00302CC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  GdiHandleManager *v7; // rdi
  unsigned int v8; // eax
  struct _ENTRY *v9; // rax
  struct _ENTRY *v10; // rbx
  bool v11; // zf
  char v12; // al
  unsigned int v13; // edi
  unsigned int v14; // ebx
  GdiHandleManager *v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r9
  _DWORD *v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentProcess; // rax
  __int64 CurrentThreadProcess; // rax
  struct _ENTRY *v31; // [rsp+20h] [rbp-48h] BYREF
  int v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+2Ch] [rbp-3Ch]
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0;
  v4 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v34 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v34);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v7 = gpHandleManager;
  v32 = 1;
  v8 = GdiHandleManager::DecodeIndex(gpHandleManager, v4);
  v9 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v7 + 2), v8, 0);
  v31 = v9;
  v10 = v9;
  if ( !v9 )
  {
    KeLeaveCriticalRegion();
    return 0LL;
  }
  _m_prefetchw((char *)v9 + 8);
  v11 = (*((_BYTE *)v9 + 15) & 0x20) == 0;
  v33 = *((_DWORD *)v9 + 2);
  if ( v11 )
    goto LABEL_7;
  HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
  if ( !v32 )
    return 0LL;
  v10 = v31;
LABEL_7:
  if ( a2 )
    *a2 = (*((_BYTE *)v10 + 15) & 8) != 0;
  v12 = *((_BYTE *)v10 + 14);
  v13 = *(_DWORD *)(a1 + 8);
  if ( v12 == 5 )
  {
    v27 = *(_QWORD *)(a1 + 680);
    v28 = 0LL;
LABEL_34:
    TrackObjectReferenceDecrement(v28, v27);
    goto LABEL_11;
  }
  if ( v12 == 16 )
  {
    v27 = *(_QWORD *)(a1 + 136);
    v28 = 2LL;
    goto LABEL_34;
  }
LABEL_11:
  --*(_DWORD *)(a1 + 8);
  v14 = *(_DWORD *)v10 & 0xFFFFFF;
  if ( v14 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v14,
                                  1)
           + 13) == HIWORD(v14) )
        v14 = (unsigned __int16)v14;
    }
    else
    {
      v14 = (unsigned __int16)v14;
    }
  }
  v15 = gpHandleManager;
  v16 = *((_QWORD *)gpHandleManager + 2);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( v14 >= v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
    goto LABEL_41;
  v18 = ((v14 - v17) >> 16) + 1;
  if ( v14 < v17 )
    v18 = 0LL;
  v19 = *(_QWORD *)(v16 + 8 * v18 + 8);
  if ( (_DWORD)v18 )
    v14 += ((1 - (_DWORD)v18) << 16) - v17;
  if ( v14 >= *(_DWORD *)(v19 + 20) )
LABEL_41:
    v20 = 0LL;
  else
    v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                     + 16LL * (unsigned __int8)v14
                     + 8);
  v21 = (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000;
  if ( v21 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v20,
                                  1)
           + 13) == HIWORD(v21) )
        v21 = (unsigned __int16)v21;
    }
    else
    {
      v21 = (unsigned __int16)*v20;
    }
  }
  v22 = *((_QWORD *)v15 + 2);
  v23 = *(_DWORD *)(v22 + 2056);
  if ( v21 < v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
  {
    v24 = ((v21 - v23) >> 16) + 1;
    if ( v21 < v23 )
      v24 = 0LL;
    v25 = *(_QWORD *)(v22 + 8 * v24 + 8);
    if ( (_DWORD)v24 )
      v21 += ((1 - (_DWORD)v24) << 16) - v23;
    *(_DWORD *)(*(_QWORD *)v25 + 24LL * v21 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v21 >> 8)) + 16LL * (unsigned __int8)v21,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v13;
}
