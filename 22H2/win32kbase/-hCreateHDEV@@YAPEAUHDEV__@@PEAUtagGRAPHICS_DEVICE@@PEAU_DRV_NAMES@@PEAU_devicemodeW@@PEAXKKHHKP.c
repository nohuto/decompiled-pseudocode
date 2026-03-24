/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014AC8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00128E8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013A90 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C000ED74 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0012124 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00123D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0012470 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015974 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C001635C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ldevUnloadImage @ 0x1C0016820 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C0016970 (ldevLoadDriver.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0022D50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     HmgShareLockCheck @ 0x1C002F050 (HmgShareLockCheck.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003A0E0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00679D0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ldevLoadInternal @ 0x1C00A79C0 (ldevLoadInternal.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00B3B44 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00B456C (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00B9020 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00C4698 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CAD48 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00CAD8C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     memcmp @ 0x1C00CE910 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C013E1D0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 */

struct PDEV *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        HDEV a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct _DRV_NAMES *v12; // r14
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rdx
  HDEV v18; // rcx
  unsigned int v19; // edi
  HDEV v20; // rbx
  BOOL v21; // r15d
  struct PDEV *v22; // rdi
  struct tagGRAPHICS_DEVICE *v23; // rcx
  HDEV v24; // rsi
  const struct _devicemodeW *v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r14d
  HDEV v29; // rax
  HDEV v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // rsi
  __int64 v36; // rcx
  char *v37; // rbx
  struct _LDEV *Internal; // rax
  struct _LDEV *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  struct PDEV *v46; // rax
  PVOID DeviceObject; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  bool v50; // zf
  HDEV v51; // rcx
  void *v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  HDEV v57; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v58[11]; // [rsp+80h] [rbp-21h] BYREF
  struct PDEV *v59; // [rsp+E8h] [rbp+47h] BYREF
  struct _DRV_NAMES *v60; // [rsp+F0h] [rbp+4Fh]
  HDEV v61; // [rsp+100h] [rbp+5Fh] BYREF

  v61 = a4;
  v60 = a2;
  v12 = a2;
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v15 = a5;
  v16 = a6;
  v14[7] = a9;
  v14[3] = a1;
  v14[4] = a4;
  v14[5] = v15;
  v14[6] = v16;
  WdLogEvent5_WdEvent(v14);
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  *a10 = 0LL;
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_69;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    v22 = gppdevList;
    if ( gppdevList )
    {
      while ( 1 )
      {
        v23 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v22 + 322);
        v59 = v22;
        if ( (((unsigned __int64)v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && a1 == v23 )
          break;
        v22 = *(struct PDEV **)v22;
LABEL_38:
        if ( !v22 )
        {
          v12 = v60;
          goto LABEL_40;
        }
      }
      PDEV::IncrementClientReferenceCount(v22);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      EngAcquireSemaphore(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v22 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v22 + 6), 11LL);
      v24 = 0LL;
      v57 = 0LL;
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v59) )
        v26 = DevmodeEqualEx(a3, v25);
      else
        v26 = memcmp(a3, v25, 0xDCuLL) == 0;
      if ( (*((_DWORD *)v22 + 10) & 0x80000) == 0
        && *((HDEV *)v22 + 321) == v61
        && *((_DWORD *)v22 + 652) == a5
        && *((_DWORD *)v22 + 653) == a6
        && v26
        && !a8 )
      {
        if ( v20 )
        {
          v28 = *((_DWORD *)v22 + 10) & 0x400;
          if ( !v28 )
            PDEVOBJ::vReferencePdev((PDEVOBJ *)&v59, 0LL, v27);
          v24 = v20;
          v29 = (HDEV)v22;
          if ( v28 )
          {
            v29 = v20;
            v24 = 0LL;
          }
          v20 = v29;
        }
        else
        {
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v59, 0LL, v27);
          v20 = (HDEV)v22;
        }
      }
      else
      {
        if ( a7 != 1 )
        {
          v30 = v57;
          v24 = (HDEV)v22;
          goto LABEL_26;
        }
        v21 = 1;
      }
      v30 = v24;
LABEL_26:
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v22 + 6));
      GreReleaseSemaphoreInternal(*((_QWORD *)v22 + 6));
      if ( v24 )
      {
        if ( gbDeferredInvalidateDualView )
        {
          gbDeferredInvalidateDualView = 0;
          v21 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
        }
        EngAcquireSemaphore(*((HSEMAPHORE *)v24 + 6));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v24 + 6), 11LL);
        if ( ((_DWORD)v24[10] & 0x400) == 0 )
        {
          if ( (unsigned int)DrvDisableDisplay(v24, 0) )
            *a10 = v24;
          else
            v21 = 1;
        }
        EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v24 + 6));
        GreReleaseSemaphoreInternal(*((_QWORD *)v24 + 6));
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      if ( v30 )
      {
        v57 = v30;
        PDEVOBJ::vUnreferencePdev(&v57, 0LL);
      }
      v22 = *(struct PDEV **)v22;
      PDEVOBJ::vUnreferencePdev(&v59, 0LL);
      goto LABEL_38;
    }
LABEL_40:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    v19 = 0;
    if ( v21 )
    {
      if ( v20 )
      {
        v61 = v20;
        PDEVOBJ::vUnreferencePdev(&v61, 0LL);
      }
      goto LABEL_69;
    }
    if ( v20 )
    {
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      *((_QWORD *)v20 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      EngAcquireSemaphore(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v20 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v20 + 6), 11LL);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      ++*((_DWORD *)v20 + 3);
      if ( ((_DWORD)v20[10] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        DrvEnableDisplay(v20);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v20 + 6));
      GreReleaseSemaphoreInternal(*((_QWORD *)v20 + 6));
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v33 = WdLogNewEntry5_WdTrace(v32, v31);
      *(_QWORD *)(v33 + 24) = v20;
      WdLogEvent5_WdTrace(v33);
      return (struct PDEV *)v20;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v21 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( v21 )
        goto LABEL_67;
    }
  }
  v35 = PALLOCMEM2(0x868uLL);
  if ( !v35 )
    goto LABEL_67;
  if ( !*(_DWORD *)v12 )
    goto LABEL_66;
  while ( a9 != 1 )
  {
    if ( a9 == 2 )
    {
      v37 = (char *)v12 + 16 * v19;
      Internal = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v37 + 2), 3LL);
      goto LABEL_57;
    }
    v36 = a9 - 3;
    if ( a9 == 4 )
      break;
LABEL_59:
    v40 = WdLogNewEntry5_WdTrace(v36, v17);
    WdLogEvent5_WdTrace(v40);
LABEL_65:
    if ( ++v19 >= *(_DWORD *)v12 )
      goto LABEL_66;
  }
  v37 = (char *)v12 + 16 * v19;
  Internal = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v37 + 2));
LABEL_57:
  v36 = 0LL;
  v39 = Internal;
  if ( !Internal )
  {
    v12 = v60;
    goto LABEL_59;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v59,
    Internal,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v37 + 2),
    *((void **)v37 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v59 )
  {
    v43 = WdLogNewEntry5_WdTrace(v42, v41);
    WdLogEvent5_WdTrace(v43);
    ldevUnloadImage(v39);
LABEL_64:
    v12 = v60;
    goto LABEL_65;
  }
  *((_QWORD *)v59 + 322) = a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v59, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v59, 0LL);
    goto LABEL_64;
  }
  v46 = v59;
  DeviceObject = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  LOBYTE(v44) = 16;
  *((_QWORD *)v59 + 197) = 0LL;
  *((_QWORD *)v46 + 194) = 0LL;
  *((_DWORD *)v46 + 390) = 0;
  v48 = HmgShareLockCheck(DeviceObject, v44);
  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v58, v48);
  *(_QWORD *)(v35 + 976) = v35 + 544;
  *(_DWORD *)(v35 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v35 + 976) + 176LL) = 0xFFFFFF;
  v49 = *(_QWORD *)(v35 + 976);
  *(_DWORD *)(v35 + 120) = 0;
  *(_QWORD *)(v49 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (char *)v59 + 1544,
    v35,
    v58[0],
    ppalDefault,
    *(_QWORD *)(*((_QWORD *)v59 + 319) + 128LL),
    *((_QWORD *)v59 + 319),
    1);
  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v58);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v59;
  v50 = a9 == 2;
  v51 = v61;
  *((_QWORD *)v59 + 322) = a1;
  *((_QWORD *)v59 + 321) = v51;
  if ( !v50 )
  {
    *((_QWORD *)v59 + 324) = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra);
    v52 = (void *)*((_QWORD *)v59 + 324);
    if ( v52 )
    {
      memmove(v52, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v59 + 324) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1u);
    }
    else
    {
      v21 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v59, 0);
  if ( (*((_DWORD *)v59 + 10) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v59 + 322) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v59 + 11) |= 4u;
    }
    else
    {
      if ( qword_1C02553A0 )
        v53 = qword_1C02553A0();
      else
        v53 = -1073741637;
      if ( v53 >= 0 && qword_1C02553A8 )
        qword_1C02553A8(&v59);
    }
  }
  if ( v21 )
  {
    PDEVOBJ::vUnreferencePdev(&v59, 0LL);
LABEL_66:
    Win32FreePool(v35);
LABEL_67:
    v18 = *a10;
    if ( *a10 )
      DrvEnableDisplay(v18);
LABEL_69:
    v45 = WdLogNewEntry5_WdTrace(v18, v17);
    WdLogEvent5_WdTrace(v45);
    return 0LL;
  }
  else
  {
    Win32FreePool(v35);
    v56 = WdLogNewEntry5_WdTrace(v55, v54);
    *(_QWORD *)(v56 + 24) = v59;
    WdLogEvent5_WdTrace(v56);
    return v59;
  }
}
