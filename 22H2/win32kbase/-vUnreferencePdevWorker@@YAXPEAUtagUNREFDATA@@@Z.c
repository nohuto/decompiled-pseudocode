/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0022D50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C000C1A8 (PDEVOBJ_bDisableHalftoneWrap.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C000CD00 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     HmgSafeNextObjt @ 0x1C000EF80 (HmgSafeNextObjt.c)
 *     ldevUnloadImage @ 0x1C0016820 (ldevUnloadImage.c)
 *     bDeleteSurface @ 0x1C001CE70 (bDeleteSurface.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x1C002E110 (PushThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C005C290 (GreDeleteSemaphore.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007C830 (--1RFONTOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00A8C50 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeleteFont @ 0x1C00AC93C (bDeleteFont.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00B05F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00B1CD4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C00B20BC (IsUMPD_ldevUnloadImageSupported.c)
 *     UMPD_ldevUnloadImageWrap @ 0x1C00B2ED8 (UMPD_ldevUnloadImageWrap.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00BCD10 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C013D468 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C013E8C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01FBC3C (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C01FBC68 (PFTOBJ_bUnloadWorkhorseWrap.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r13d
  unsigned int v3; // r15d
  int v4; // r12d
  int v5; // r12d
  int v6; // esi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rsi
  int v24; // edx
  int v25; // r8d
  _DWORD *v26; // rax
  unsigned int *v27; // rcx
  __int64 v28; // rax
  struct _ERESOURCE *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 *Objt; // rax
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37; // [rsp+38h] [rbp-40h] BYREF
  _OWORD v38[3]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD *v39; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+58h] BYREF
  char v42; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  v39 = (_DWORD *)v1;
  memset(v38, 0, 32);
  PushThreadGuardedObject(v38, (__int64)a1, (__int64)vUnreferencePdevWorker);
  v6 = -1073741637;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v1 + 1528);
    if ( !v8 )
      break;
    v40 = *(_QWORD *)(v1 + 1528);
    v37 = *(_QWORD *)(v8 + 128);
    if ( qword_1C02557D0 )
      v7 = qword_1C02557D0();
    else
      v7 = -1073741637;
    if ( v7 >= 0 && qword_1C02557D8 )
      qword_1C02557D8(&v40, &v39, &v37, v2);
    v40 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
  }
  PopThreadGuardedObject(v38);
  if ( v39[892] )
  {
    v9 = 0LL;
    v41 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)&v42);
    if ( qword_1C02557F0 )
      v10 = qword_1C02557F0();
    else
      v10 = -1073741637;
    if ( v10 >= 0 && qword_1C02557F8 )
      v9 = qword_1C02557F8(&v42, v39, &v41);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v42, v9, v41, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 1712);
  while ( v11 )
  {
    *(_DWORD *)(v11 + 228) = 1;
    v12 = v11;
    if ( qword_1C0255810 )
      v13 = qword_1C0255810();
    else
      v13 = -1073741637;
    if ( v13 >= 0 && qword_1C0255818 )
      qword_1C0255818(v11 + 128);
    v11 = *(_QWORD *)(v11 + 248);
    Win32FreePool(v12);
  }
  if ( qword_1C0255820 )
    v6 = qword_1C0255820();
  if ( v6 >= 0 && qword_1C0255828 )
    qword_1C0255828(v1, v3);
  v14 = *(_QWORD *)(v1 + 1688);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(v1 + 1688) = 0LL;
  }
  v15 = *(_QWORD *)(v1 + 1696);
  if ( v15 )
  {
    Win32FreePool(v15);
    *(_QWORD *)(v1 + 1696) = 0LL;
  }
  v16 = *(_QWORD *)(v1 + 1704);
  if ( v16 )
  {
    Win32FreePool(v16);
    *(_QWORD *)(v1 + 1704) = 0LL;
  }
  v17 = *(_QWORD *)(v1 + 2592);
  if ( v17 )
    Win32FreePool(v17);
  v18 = *(_QWORD *)(v1 + 3560);
  if ( v18 )
  {
    Win32FreePool(v18);
    *(_QWORD *)(v1 + 3560) = 0LL;
  }
  if ( (v39[10] & 0x80000) == 0 )
  {
    v19 = *(void **)(v1 + 1432);
    if ( v19 != gahStockObjects[13] )
      bDeleteFont((__int64)v19, 1LL);
    v20 = *(void **)(v1 + 1440);
    if ( v20 != gahStockObjects[13] )
      bDeleteFont((__int64)v20, 1LL);
    v21 = *(void **)(v1 + 1448);
    if ( v21 != gahStockObjects[16] )
      bDeleteFont((__int64)v21, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v22 = (__int64 *)(v1 + 1456);
      v23 = 6LL;
      do
      {
        bDeleteSurface(*v22++);
        --v23;
      }
      while ( v23 );
    }
  }
  PDEVOBJ::vDisableSurface(&v39, v3, 1);
  if ( *(_QWORD *)(v1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap();
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v39);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v39 + 386));
  v26 = v39;
  if ( (v39[10] & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v27 = *(unsigned int **)(v1 + 1808);
      if ( v27 )
        DEC_SHARE_REF_CNT(v27);
      v28 = *(_QWORD *)(v1 + 1816);
      if ( v28 )
      {
        DEC_SHARE_REF_CNT(*(unsigned int **)(v1 + 1816));
        v28 = *(_QWORD *)(v1 + 1816);
      }
      v36 = v28;
      XEPALOBJ::bDeletePalette(&v36, 1LL, 0LL);
      v26 = v39;
    }
    if ( *((_QWORD *)v26 + 338) != *((_QWORD *)v26 + 336) && (!v5 || !v3) && v2 )
      (*((void (__fastcall **)(_QWORD))v26 + 338))(*(_QWORD *)(v1 + 1800));
    if ( v5 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
        UMPD_ldevUnloadImageWrap(*(_QWORD *)(v1 + 1792));
    }
    else
    {
      ldevUnloadImage(*(__int64 **)(v1 + 1792));
    }
  }
  v29 = *(struct _ERESOURCE **)(v1 + 56);
  if ( v29 )
    GreDeleteSemaphore(v29);
  v30 = *(_DWORD *)(v1 + 40);
  if ( (v30 & 0x10000) == 0 )
  {
    v29 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v29 )
    {
      GreDeleteSemaphore(v29);
      v30 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v30 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 64));
  GreAcquireHmgrSemaphore((__int64)v29, v24, v25);
  LODWORD(v31) = 0;
  while ( 1 )
  {
    Objt = (__int64 *)HmgSafeNextObjt(v31, 5);
    if ( !Objt )
      break;
    v31 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v34, v33, v35);
  PDEV::Free((struct PDEV *)v1);
}
