/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     PALLOCNOZ @ 0x1C0027CFC (PALLOCNOZ.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002E950 (GreReleaseSemaphoreInternal.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ldevUnloadImage @ 0x1C0075120 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C0075290 (ldevLoadDriver.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077CD4 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C007865C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C007FCA0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C008DCA0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C008DD40 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ldevLoadInternal @ 0x1C00C1F50 (ldevLoadInternal.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00C2588 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00C41BC (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D3B90 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DAF28 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00DAF80 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     memcmp @ 0x1C00DD6E0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 */

struct PDEV *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct tagGRAPHICS_DEVICE *v11; // r14
  HDEV v12; // rbx
  BOOL v13; // r12d
  struct PDEV *v14; // rdi
  unsigned int v15; // r15d
  struct tagGRAPHICS_DEVICE *v16; // rcx
  HDEV v17; // rsi
  const struct _devicemodeW *v18; // rdx
  int v19; // ecx
  int v20; // eax
  int v21; // r8d
  int v22; // r8d
  __int64 v24; // rdi
  struct _DRV_NAMES *v25; // rdx
  unsigned int v26; // esi
  unsigned int v27; // r8d
  char *v28; // rbx
  int v29; // edx
  struct _LDEV *Internal; // rax
  __int64 *v31; // r14
  int v32; // r8d
  struct PDEV *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  struct HOBJ__ **v37; // rbx
  bool v38; // zf
  void *v39; // rcx
  void *v40; // rcx
  int v41; // r8d
  struct PDEV *v42; // [rsp+78h] [rbp-39h] BYREF
  struct PDEV *v43; // [rsp+80h] [rbp-31h] BYREF
  _QWORD v44[12]; // [rsp+88h] [rbp-29h] BYREF
  struct tagGRAPHICS_DEVICE *v45; // [rsp+F8h] [rbp+47h] BYREF
  struct _DRV_NAMES *v46; // [rsp+100h] [rbp+4Fh]
  void *v47; // [rsp+110h] [rbp+5Fh]

  v47 = a4;
  v46 = a2;
  v45 = a1;
  v11 = a1;
  WdLogSingleEntry5(4LL, a1, a4, a5, a6, a9);
  v12 = 0LL;
  v13 = 0;
  *a10 = 0LL;
  if ( v11 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
    {
      WdLogSingleEntry0(5LL);
      return 0LL;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    v14 = gppdevList;
    if ( gppdevList )
    {
      v15 = a6;
      while ( 1 )
      {
        v16 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v14 + 319);
        v42 = v14;
        if ( (((unsigned __int64)v16 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && v11 == v16 )
          break;
        v14 = *(struct PDEV **)v14;
LABEL_37:
        if ( !v14 )
          goto LABEL_38;
      }
      PDEV::IncrementClientReferenceCount(v14);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v14 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v14 + 6), 11LL);
      v17 = 0LL;
      v43 = 0LL;
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v42) )
        v19 = DevmodeEqualEx(a3, v18);
      else
        v19 = memcmp(a3, v18, 0xDCuLL) == 0;
      v20 = *((_DWORD *)v14 + 10);
      if ( (v20 & 0x80000) != 0
        || *((void **)v14 + 318) != v47
        || *((_DWORD *)v14 + 646) != a5
        || *((_DWORD *)v14 + 647) != v15
        || !v19
        || a8 )
      {
        if ( a7 == 1 )
          v13 = 1;
        else
          v17 = (HDEV)v14;
        goto LABEL_25;
      }
      if ( v12 )
      {
        if ( (v20 & 0x400) != 0 )
        {
LABEL_21:
          v43 = (struct PDEV *)v17;
LABEL_25:
          EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v14 + 6));
          GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v14 + 6));
          if ( v17 )
          {
            if ( gbDeferredInvalidateDualView )
            {
              gbDeferredInvalidateDualView = 0;
              v13 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
            }
            EngAcquireSemaphore(*((HSEMAPHORE *)v17 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v17 + 6), 11LL);
            if ( ((_DWORD)v17[10] & 0x400) == 0 )
            {
              if ( (unsigned int)DrvDisableDisplay(v17, 0) )
                *a10 = v17;
              else
                v13 = 1;
            }
            EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v17 + 6));
            GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v17 + 6));
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          if ( v43 )
            PDEVOBJ::vUnreferencePdev(&v43, 0, v21);
          v14 = *(struct PDEV **)v14;
          PDEVOBJ::vUnreferencePdev(&v42, 0, v21);
          goto LABEL_37;
        }
        v17 = v12;
      }
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v42);
      v12 = (HDEV)v14;
      goto LABEL_21;
    }
LABEL_38:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    if ( v13 )
    {
      if ( v12 )
      {
        v45 = (struct tagGRAPHICS_DEVICE *)v12;
        PDEVOBJ::vUnreferencePdev(&v45, 0, v22);
      }
      goto LABEL_67;
    }
    if ( v12 )
    {
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      *((_QWORD *)v12 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v12 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v12 + 6), 11LL);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      ++*((_DWORD *)v12 + 3);
      if ( ((_DWORD)v12[10] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        DrvEnableDisplay(v12);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v12 + 6));
      GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v12 + 6));
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      WdLogSingleEntry1(5LL, v12);
      return (struct PDEV *)v12;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v13 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( v13 )
        goto LABEL_65;
    }
  }
  v24 = PALLOCMEM(2144LL, 1886221383LL);
  if ( !v24 )
    goto LABEL_65;
  v25 = v46;
  v26 = 0;
  if ( !*(_DWORD *)v46 )
    goto LABEL_64;
  while ( a9 != 1 )
  {
    if ( a9 == 2 )
    {
      v28 = (char *)v25 + 16 * v26;
      Internal = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v28 + 2), 3LL);
      goto LABEL_56;
    }
    if ( a9 == 4 )
    {
      v27 = 1;
      v28 = (char *)v25 + 16 * v26;
      v29 = 4;
      goto LABEL_55;
    }
LABEL_58:
    WdLogSingleEntry0(5LL);
LABEL_63:
    v25 = v46;
    if ( ++v26 >= *(_DWORD *)v46 )
      goto LABEL_64;
  }
  v28 = (char *)v25 + 16 * v26;
  v29 = 1;
  v27 = (*((_DWORD *)v11 + 40) & 0x4000000 | 0x2000000u) >> 25;
LABEL_55:
  Internal = ldevLoadDriver(*((PCWSTR *)v28 + 2), v29, v27);
LABEL_56:
  v31 = (__int64 *)Internal;
  if ( !Internal )
  {
    v11 = v45;
    goto LABEL_58;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v42,
    Internal,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v28 + 2),
    *((void **)v28 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v42 )
  {
    WdLogSingleEntry0(5LL);
    ldevUnloadImage(v31);
    v11 = v45;
    goto LABEL_63;
  }
  v11 = v45;
  *((_QWORD *)v42 + 319) = v45;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v42, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v42, 0, v32);
    goto LABEL_63;
  }
  v33 = v42;
  *((_QWORD *)v42 + 196) = 0LL;
  *((_QWORD *)v33 + 193) = 0LL;
  *((_DWORD *)v33 + 388) = 0;
  v34 = v24 + 544;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
  {
    v35 = HmgShareLockCheck(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
    HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v44, v35);
    *(_QWORD *)(v24 + 976) = v34;
    *(_DWORD *)(v24 + 728) = 0;
    *(_DWORD *)(*(_QWORD *)(v24 + 976) + 176LL) = 0xFFFFFF;
    *(_DWORD *)(v24 + 120) = 0;
    *(_QWORD *)(*(_QWORD *)(v24 + 976) + 248LL) = 0LL;
    EBRUSHOBJ::vInitBrush(
      (char *)v42 + 1536,
      v24,
      v44[0],
      ppalDefault,
      *(_QWORD *)(*((_QWORD *)v42 + 316) + 128LL),
      *((_QWORD *)v42 + 316),
      1);
    HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v44);
  }
  else
  {
    v36 = HmgShareLockCheck(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
    *(_QWORD *)(v24 + 976) = v34;
    v37 = (struct HOBJ__ **)v36;
    *(_DWORD *)(v24 + 728) = 0;
    *(_DWORD *)(*(_QWORD *)(v24 + 976) + 176LL) = 0xFFFFFF;
    *(_DWORD *)(v24 + 120) = 0;
    *(_QWORD *)(*(_QWORD *)(v24 + 976) + 248LL) = 0LL;
    EBRUSHOBJ::vInitBrush(
      (char *)v42 + 1536,
      v24,
      v36,
      ppalDefault,
      *(_QWORD *)(*((_QWORD *)v42 + 316) + 128LL),
      *((_QWORD *)v42 + 316),
      1);
    DEC_SHARE_REF_CNT_LAZY0(v37);
  }
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v42;
  v38 = a9 == 2;
  v39 = v47;
  *((_QWORD *)v42 + 319) = v11;
  *((_QWORD *)v42 + 318) = v39;
  if ( !v38 )
  {
    *((_QWORD *)v42 + 321) = PALLOCNOZ(a3->dmSize + (unsigned int)a3->dmDriverExtra, 0x76656447u);
    v40 = (void *)*((_QWORD *)v42 + 321);
    if ( v40 )
    {
      memmove(v40, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v42 + 321) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v11, 1u);
    }
    else
    {
      v13 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v42, 0);
  if ( (*((_DWORD *)v42 + 10) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v42 + 319) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v42 + 11) |= 4u;
    }
    else if ( qword_1C029B120 && (int)qword_1C029B120() >= 0 && qword_1C029B128 )
    {
      qword_1C029B128(&v42);
    }
  }
  if ( v13 )
  {
    PDEVOBJ::vUnreferencePdev(&v42, 0, v41);
LABEL_64:
    Win32FreePool((char *)v24);
LABEL_65:
    if ( *a10 )
      DrvEnableDisplay(*a10);
LABEL_67:
    WdLogSingleEntry0(5LL);
    return 0LL;
  }
  else
  {
    Win32FreePool((char *)v24);
    WdLogSingleEntry1(5LL, v42);
    return v42;
  }
}
