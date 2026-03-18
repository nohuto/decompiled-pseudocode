/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0019110 (bDeleteSurface.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C0044F30 (GreDeleteSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     ldevUnloadImage @ 0x1C0075120 (ldevUnloadImage.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0087050 (--1RFONTOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     bDeleteFont @ 0x1C00BE158 (bDeleteFont.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C11F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C00C1998 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00C19C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C00C1CDC (IsUMPD_ldevUnloadImageSupported.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C00C2564 (PDEVOBJ_bDisableHalftoneWrap.c)
 *     UMPD_ldevUnloadImageWrap @ 0x1C00C2620 (UMPD_ldevUnloadImageWrap.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00CB9C0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00CE0D0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C023DAC8 (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C023DB18 (PFTOBJ_bUnloadWorkhorseWrap.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r12d
  unsigned int v3; // r14d
  int v4; // r15d
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 (*v9)(void); // rax
  __int64 v10; // rdi
  char *v11; // rsi
  char *v12; // rcx
  char *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _ERESOURCE *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned int *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 *Objt; // rax
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v33[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v36; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  v34 = v1;
  memset(v33, 0, sizeof(v33));
  PushThreadGuardedObject(v33, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v1 + 1520);
    if ( !v6 )
      break;
    v35 = *(_QWORD *)(v1 + 1520);
    v32 = *(_QWORD *)(v6 + 128);
    if ( qword_1C029B540 && (int)qword_1C029B540() >= 0 && qword_1C029B548 )
      qword_1C029B548(&v35, &v34, &v32, v2);
    v35 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
  }
  PopThreadGuardedObject(v33);
  if ( *(_DWORD *)(v1 + 2072) && (*(_DWORD *)(v34 + 40) & 0x40) != 0 )
  {
    v8 = 0LL;
    v35 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    if ( qword_1C029B550 && (int)qword_1C029B550() >= 0 )
    {
      v9 = qword_1C029B558;
      if ( qword_1C029B558 )
        v9 = (__int64 (*)(void))qword_1C029B558();
      v36 = *(_QWORD *)v9;
    }
    if ( qword_1C029B560 && (int)qword_1C029B560() >= 0 && qword_1C029B568 )
      v8 = qword_1C029B568(&v36, v34, &v35);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v36, v8, v35, 0LL);
  }
  v10 = *(_QWORD *)(v1 + 1680);
  while ( v10 )
  {
    *(_DWORD *)(v10 + 228) = 1;
    v11 = (char *)v10;
    if ( qword_1C029B580 && (int)qword_1C029B580() >= 0 && qword_1C029B588 )
      qword_1C029B588(v10 + 128);
    v10 = *(_QWORD *)(v10 + 248);
    Win32FreePool(v11);
  }
  if ( qword_1C029B590 && (int)qword_1C029B590() >= 0 && qword_1C029B598 )
    qword_1C029B598(v1, v3);
  v12 = *(char **)(v1 + 2568);
  if ( v12 )
    Win32FreePool(v12);
  v13 = *(char **)(v1 + 3536);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(v1 + 3536) = 0LL;
  }
  if ( (*(_DWORD *)(v34 + 40) & 0x80000) == 0 )
  {
    v14 = *(void **)(v1 + 1424);
    if ( v14 != gahStockObjects[13] )
      bDeleteFont(v14, 1LL);
    v15 = *(void **)(v1 + 1432);
    if ( v15 != gahStockObjects[13] )
      bDeleteFont(v15, 1LL);
    v16 = *(void **)(v1 + 1440);
    if ( v16 != gahStockObjects[16] )
      bDeleteFont(v16, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v17 = (__int64 *)(v1 + 1448);
      v18 = 6LL;
      do
      {
        bDeleteSurface(*v17++);
        --v18;
      }
      while ( v18 );
    }
  }
  LOBYTE(v7) = 1;
  PDEVOBJ::vDisableSurface(&v34, v3, v7);
  if ( *(_QWORD *)(v1 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported(v19) >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v34);
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v34);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v34 + 1536));
  v23 = v34;
  if ( (*(_DWORD *)(v34 + 40) & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v24 = *(unsigned int **)(v1 + 1776);
      if ( v24 )
        DEC_SHARE_REF_CNT(v24);
      v25 = *(_QWORD *)(v1 + 1784);
      if ( v25 )
      {
        DEC_SHARE_REF_CNT(*(unsigned int **)(v1 + 1784));
        v25 = *(_QWORD *)(v1 + 1784);
      }
      v35 = v25;
      XEPALOBJ::bDeletePalette(&v35, 1LL);
      v23 = v34;
    }
    if ( *(_QWORD *)(v23 + 2680) != *(_QWORD *)(v23 + 2664) )
    {
      if ( v5 && v3 )
      {
LABEL_65:
        if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
          UMPD_ldevUnloadImageWrap(*(_QWORD *)(v1 + 1760));
        goto LABEL_67;
      }
      if ( v2 )
        (*(void (__fastcall **)(_QWORD))(v23 + 2680))(*(_QWORD *)(v1 + 1768));
    }
    if ( !v5 )
    {
      ldevUnloadImage(*(void **)(v1 + 1760));
      goto LABEL_67;
    }
    goto LABEL_65;
  }
LABEL_67:
  v26 = *(_DWORD *)(v1 + 40);
  if ( (v26 & 0x10000) == 0 )
  {
    v21 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v21 )
    {
      GreDeleteSemaphore(v21);
      v26 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v26 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 56));
  GreAcquireHmgrSemaphore((__int64)v21, v20, v22);
  LODWORD(v27) = 0;
  while ( 1 )
  {
    Objt = (__int64 *)HmgSafeNextObjt(v27, 5);
    if ( !Objt )
      break;
    v27 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v30, v29, v31);
  PDEV::Free((struct PDEV *)v1, v5);
}
