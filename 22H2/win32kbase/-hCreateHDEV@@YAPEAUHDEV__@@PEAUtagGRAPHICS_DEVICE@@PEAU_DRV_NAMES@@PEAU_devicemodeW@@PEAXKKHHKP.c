/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ldevLoadInternal @ 0x1C0016680 (ldevLoadInternal.c)
 *     ldevLoadDriver @ 0x1C0017300 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C0017800 (ldevUnloadImage.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00182FC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C001845C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001CAB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerateDisplayOnly @ 0x1C00355C0 (hdevEnumerateDisplayOnly.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0044440 (GreReleaseSemaphoreInternal.c)
 *     PALLOCMEM @ 0x1C004F000 (PALLOCMEM.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0062100 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0088CC0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     PALLOCNOZ @ 0x1C008AF78 (PALLOCNOZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0097060 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00C083C (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00D29DC (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00D2A30 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     memcmp @ 0x1C00D6840 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154FD0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C0160A54 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 */

HDEV __fastcall hCreateHDEV(
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
  __int64 v12; // rcx
  HDEV v13; // rdi
  BOOL v14; // r13d
  __int64 v15; // rbx
  __int64 *v16; // rsi
  void *v17; // r12
  struct tagGRAPHICS_DEVICE *v18; // rcx
  HDEV v19; // r14
  const struct _devicemodeW *v20; // rdx
  int v21; // ecx
  int v22; // eax
  struct _MDEV *v23; // rcx
  HSEMAPHORE v25; // rcx
  __int64 v26; // r14
  struct _DRV_NAMES *v27; // rdx
  unsigned int v28; // esi
  unsigned int v29; // r8d
  PCWSTR *v30; // rdi
  unsigned int v31; // edx
  __int64 Driver; // rax
  _QWORD *v33; // r15
  struct _LDEV *v34; // rdx
  unsigned __int16 *v35; // rax
  unsigned __int16 *v36; // rdi
  struct tagGRAPHICS_DEVICE *v37; // r15
  HDEV v38; // rax
  __int64 v39; // rax
  bool v40; // zf
  void *v41; // rcx
  void *v42; // rcx
  WCHAR *v43; // [rsp+38h] [rbp-81h]
  HDEV v44; // [rsp+78h] [rbp-41h] BYREF
  struct PDEV *v45; // [rsp+80h] [rbp-39h] BYREF
  __int64 v46[14]; // [rsp+88h] [rbp-31h] BYREF
  struct tagGRAPHICS_DEVICE *v47; // [rsp+108h] [rbp+4Fh] BYREF
  struct _DRV_NAMES *v48; // [rsp+110h] [rbp+57h]
  void *Src; // [rsp+118h] [rbp+5Fh]
  void *v50; // [rsp+120h] [rbp+67h]

  v50 = a4;
  Src = a3;
  v48 = a2;
  v47 = a1;
  v11 = a1;
  WdLogSingleEntry5(4LL, a1, a4, a5, a6, a9);
  v13 = 0LL;
  v14 = 0;
  v15 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  *a10 = 0LL;
  if ( v11 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_46;
  if ( !a3 )
  {
    WdLogSingleEntry0(5LL);
    return 0LL;
  }
  v16 = hdevEnumerateDisplayOnly(0LL);
  if ( !v16 )
    goto LABEL_44;
  v17 = v50;
  do
  {
    v18 = (struct tagGRAPHICS_DEVICE *)v16[319];
    v44 = (HDEV)v16;
    if ( (((unsigned __int64)v18 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || v11 != v18 )
      goto LABEL_36;
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 80));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80), 1);
    EngAcquireSemaphore((HSEMAPHORE)v16[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", v16[6], 11);
    v19 = 0LL;
    v45 = 0LL;
    if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v44) )
      v21 = DevmodeEqualEx(a3, v20);
    else
      v21 = memcmp(a3, v20, 0xDCuLL) == 0;
    v22 = *((_DWORD *)v16 + 10);
    if ( (v22 & 0x80000) != 0
      || (void *)v16[318] != v17
      || *((_DWORD *)v16 + 646) != a5
      || *((_DWORD *)v16 + 647) != a6
      || !v21
      || a8 )
    {
      if ( a7 == 1 )
        v14 = 1;
      else
        v19 = (HDEV)v16;
      goto LABEL_25;
    }
    if ( !v13 )
      goto LABEL_20;
    if ( (v22 & 0x400) == 0 )
    {
      v19 = v13;
LABEL_20:
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v44);
      v13 = (HDEV)v16;
    }
    v45 = (struct PDEV *)v19;
LABEL_25:
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", v16[6]);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)v16[6]);
    if ( v19 )
    {
      if ( *(_DWORD *)(v15 + 1236) )
      {
        v23 = *(struct _MDEV **)(v15 + 1240);
        *(_DWORD *)(v15 + 1236) = 0;
        v14 = DrvDisableMDEVChildren(v23, 0, 0) == 0;
      }
      EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v19 + 6), 11);
      if ( ((_DWORD)v19[10] & 0x400) == 0 )
      {
        if ( (unsigned int)DrvDisableDisplay((HSEMAPHORE *)v19, 0) )
          *a10 = v19;
        else
          v14 = 1;
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v19 + 6));
      GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v19 + 6));
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80));
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v15 + 80));
    if ( v45 )
      PDEVOBJ::vUnreferencePdev(&v45);
    v11 = v47;
LABEL_36:
    v16 = hdevEnumerateDisplayOnly(v16);
  }
  while ( v16 );
  if ( v14 )
  {
    if ( v13 )
    {
      v47 = (struct tagGRAPHICS_DEVICE *)v13;
      PDEVOBJ::vUnreferencePdev(&v47);
    }
    goto LABEL_65;
  }
  if ( v13 )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8), 16);
    *((_QWORD *)v13 + 4) = 0LL;
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8));
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v15 + 8));
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 80));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80), 1);
    EngAcquireSemaphore(*((HSEMAPHORE *)v13 + 6));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v13 + 6), 11);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8), 16);
    ++*((_DWORD *)v13 + 3);
    if ( ((_DWORD)v13[10] & 0x400) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8));
      GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v15 + 8));
      DrvEnableDisplay(v13);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8), 16);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8));
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v15 + 8));
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v13 + 6));
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v13 + 6));
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80));
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v15 + 80));
    WdLogSingleEntry1(5LL, v13);
    return v13;
  }
LABEL_44:
  if ( *(_DWORD *)(v15 + 1236) )
  {
    v25 = *(HSEMAPHORE *)(v15 + 80);
    *(_DWORD *)(v15 + 1236) = 0;
    EngAcquireSemaphore(v25);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80), 1);
    v14 = DrvDisableMDEVChildren(*(struct _MDEV **)(v15 + 1240), 0, 0) == 0;
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80));
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v15 + 80));
    if ( v14 )
      goto LABEL_63;
  }
LABEL_46:
  v26 = PALLOCMEM(0x888u, 0x706D7447u);
  if ( !v26 )
    goto LABEL_63;
  v27 = v48;
  v28 = 0;
  if ( !*(_DWORD *)v48 )
    goto LABEL_62;
  while ( 2 )
  {
    switch ( a9 )
    {
      case 1u:
        v30 = (PCWSTR *)((char *)v27 + 16 * v28);
        v31 = 1;
        v29 = (*((_DWORD *)v47 + 40) & 0x4000000 | 0x2000000u) >> 25;
LABEL_54:
        Driver = (__int64)ldevLoadDriver(v30[2], v31, v29);
        break;
      case 2u:
        v30 = (PCWSTR *)((char *)v27 + 16 * v28);
        Driver = ldevLoadInternal((unsigned int (__fastcall *)(__int64, __int64, __int128 *))v30[2], 3);
        break;
      case 4u:
        v29 = 1;
        v30 = (PCWSTR *)((char *)v27 + 16 * v28);
        v31 = 4;
        goto LABEL_54;
      default:
LABEL_56:
        WdLogSingleEntry0(5LL);
LABEL_61:
        v27 = v48;
        if ( ++v28 >= *(_DWORD *)v48 )
          goto LABEL_62;
        continue;
    }
    break;
  }
  v33 = (_QWORD *)Driver;
  if ( !Driver )
    goto LABEL_56;
  v34 = (struct _LDEV *)Driver;
  v43 = (WCHAR *)v30[1];
  v35 = (unsigned __int16 *)v30[2];
  v36 = (unsigned __int16 *)Src;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v44, v34, (struct _devicemodeW *)Src, 0LL, 0LL, v35, v43, 0LL, 0LL, 0LL, 0, a5, a6);
  if ( !v44 )
  {
    WdLogSingleEntry0(5LL);
    ldevUnloadImage(v33);
    goto LABEL_61;
  }
  v37 = v47;
  *((_QWORD *)v44 + 319) = v47;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v44, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev((struct PDEV **)&v44);
    goto LABEL_61;
  }
  v38 = v44;
  *((_QWORD *)v44 + 196) = 0LL;
  *((_QWORD *)v38 + 193) = 0LL;
  *((_DWORD *)v38 + 388) = 0;
  v39 = HmgShareLockCheck(*(_QWORD *)(v15 + 224), 16);
  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v46, v39);
  *(_QWORD *)(v26 + 976) = v26 + 544;
  *(_DWORD *)(v26 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v26 + 976) + 176LL) = 0xFFFFFF;
  *(_DWORD *)(v26 + 120) = 0;
  *(_QWORD *)(*(_QWORD *)(v26 + 976) + 248LL) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (int *)v44 + 384,
    v26,
    v46[0],
    *(_QWORD *)(v15 + 6000),
    *(_QWORD *)(*((_QWORD *)v44 + 316) + 128LL),
    *((_QWORD *)v44 + 316),
    1u);
  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v46);
  if ( !WPP_MAIN_CB.Queue.ListEntry.Blink[3].Flink )
    SURFACE::hdev((SURFACE *)WPP_MAIN_CB.Queue.ListEntry.Blink, v44);
  v40 = a9 == 2;
  v41 = v50;
  *((_QWORD *)v44 + 319) = v37;
  *((_QWORD *)v44 + 318) = v41;
  if ( !v40 )
  {
    *((_QWORD *)v44 + 321) = PALLOCNOZ(v36[34] + (unsigned int)v36[35], 0x76656447u);
    v42 = (void *)*((_QWORD *)v44 + 321);
    if ( v42 )
    {
      memmove(v42, v36, v36[35] + (unsigned __int64)v36[34]);
      *(_DWORD *)(*((_QWORD *)v44 + 321) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v37, 1);
    }
    else
    {
      v14 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v44, 0);
  if ( ((_DWORD)v44[10] & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v44 + 319) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v44 + 11) |= 4u;
    }
    else if ( qword_1C02947B0 && (int)qword_1C02947B0() >= 0 && qword_1C02947B8 )
    {
      qword_1C02947B8(&v44);
    }
  }
  if ( v14 )
  {
    PDEVOBJ::vUnreferencePdev((struct PDEV **)&v44);
LABEL_62:
    Win32FreePool((char *)v26);
LABEL_63:
    if ( *a10 )
      DrvEnableDisplay(*a10);
LABEL_65:
    WdLogSingleEntry0(5LL);
    return 0LL;
  }
  else
  {
    Win32FreePool((char *)v26);
    WdLogSingleEntry1(5LL, v44);
    return v44;
  }
}
