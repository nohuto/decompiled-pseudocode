/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ldevUnloadImage @ 0x1C0017800 (ldevUnloadImage.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z @ 0x1C0035A9C (-vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 *     GreDeleteSemaphore @ 0x1C0077EE0 (GreDeleteSemaphore.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C0088990 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088B74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C00BBAF0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEAAHXZ @ 0x1C00BBC20 (-bAllowDDICall@PDEVOBJ@@QEAAHXZ.c)
 *     bDeleteFont @ 0x1C00C2308 (bDeleteFont.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00C4230 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C4260 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C00C4D00 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C00C5420 (PDEVOBJ_bDisableHalftoneWrap.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C0232718 (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C02327C8 (IsUMPD_ldevUnloadImageSupported.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C0232820 (PFTOBJ_bUnloadWorkhorseWrap.c)
 *     UMPD_ldevUnloadImageWrap @ 0x1C0232844 (UMPD_ldevUnloadImageWrap.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // r12d
  int v4; // r15d
  __int64 v5; // r14
  __int64 v6; // rax
  HSEMAPHORE v7; // rcx
  __int64 v8; // rbx
  __int64 (*v9)(void); // rax
  __int64 v10; // rbx
  char *v11; // rsi
  char *v12; // rcx
  char *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rcx
  struct OBJECT *v20; // rcx
  struct OBJECT *v21; // rcx
  _QWORD *v22; // rcx
  struct _ERESOURCE *v23; // rcx
  _QWORD v24[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000;
  v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  *((_DWORD *)a1 + 2) = 0;
  v26 = v1;
  memset(v25, 0, sizeof(v25));
  PushThreadGuardedObject(v25, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v1 + 1520);
    if ( !v6 )
      break;
    v27 = *(_QWORD *)(v1 + 1520);
    v24[0] = *(_QWORD *)(v6 + 128);
    if ( qword_1C0294BD8 && (int)qword_1C0294BD8() >= 0 && qword_1C0294BE0 )
      qword_1C0294BE0(&v27, &v26, v24, v3);
    v27 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
  }
  PopThreadGuardedObject(v25);
  if ( *(_DWORD *)(v26 + 3568) )
  {
    v7 = *(HSEMAPHORE *)(v5 + 48);
    v8 = 0LL;
    v27 = 0LL;
    EngAcquireSemaphore(v7);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v5 + 48), 14);
    if ( qword_1C0294BE8 && (int)qword_1C0294BE8() >= 0 )
    {
      v9 = qword_1C0294BF0;
      if ( qword_1C0294BF0 )
        v9 = (__int64 (*)(void))qword_1C0294BF0();
      v24[0] = *(_QWORD *)v9;
    }
    if ( qword_1C0294BF8 && (int)qword_1C0294BF8() >= 0 && qword_1C0294C00 )
      v8 = qword_1C0294C00(v24, v26, &v27);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(v24, v8, v27, 0LL);
  }
  v10 = *(_QWORD *)(v1 + 1680);
  while ( v10 )
  {
    *(_DWORD *)(v10 + 228) = 1;
    v11 = (char *)v10;
    if ( qword_1C0294C18 && (int)qword_1C0294C18() >= 0 && qword_1C0294C20 )
      qword_1C0294C20(v10 + 128);
    v10 = *(_QWORD *)(v10 + 248);
    Win32FreePool(v11);
  }
  if ( qword_1C0294C28 && (int)qword_1C0294C28() >= 0 && qword_1C0294C30 )
    qword_1C0294C30(v1);
  v12 = *(char **)(v1 + 2568);
  if ( v12 )
    Win32FreePool(v12);
  v13 = *(char **)(v1 + 3560);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(v1 + 3560) = 0LL;
  }
  if ( (*(_DWORD *)(v26 + 40) & 0x80000) == 0 )
  {
    v14 = *(_QWORD *)(v1 + 1424);
    if ( v14 != *(_QWORD *)(*(_QWORD *)(v5 + 3168) + 104LL) )
      bDeleteFont(v14, 1LL);
    v15 = *(_QWORD *)(v1 + 1432);
    if ( v15 != *(_QWORD *)(*(_QWORD *)(v5 + 3168) + 104LL) )
      bDeleteFont(v15, 1LL);
    v16 = *(_QWORD *)(v1 + 1440);
    if ( v16 != *(_QWORD *)(*(_QWORD *)(v5 + 3168) + 128LL) )
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
  PDEVOBJ::vDisableSurface((PDEVOBJ *)&v26, 1);
  if ( *(_QWORD *)(v1 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap((__int64)&v26);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v26);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v26 + 1536));
  if ( (*(_DWORD *)(v26 + 40) & 0x80000) == 0 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v19) + 24) + 3192LL) )
    {
      v20 = *(struct OBJECT **)(v1 + 1776);
      if ( v20 )
        DEC_SHARE_REF_CNT(v20);
      v21 = *(struct OBJECT **)(v1 + 1784);
      if ( v21 )
        DEC_SHARE_REF_CNT(v21);
      v27 = *(_QWORD *)(v1 + 1784);
      if ( v27 )
        XEPALOBJ::bDeletePalette(&v27, 0LL);
    }
    if ( *(_QWORD *)(v26 + 2680) != *(_QWORD *)(v26 + 2664)
      && (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v26)
      && v3 )
    {
      (*(void (__fastcall **)(_QWORD))(v26 + 2680))(*(_QWORD *)(v1 + 1768));
    }
    if ( v4 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
        UMPD_ldevUnloadImageWrap(*(_QWORD *)(v1 + 1760));
    }
    else
    {
      v22 = *(_QWORD **)(v1 + 1760);
      if ( v22 )
        ldevUnloadImage(v22);
    }
  }
  if ( (*(_DWORD *)(v1 + 40) & 0x10000) == 0 )
  {
    v23 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v23 )
      GreDeleteSemaphore(v23);
  }
  if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 56));
  vMarkSurfacesWithHDEV((struct PDEV *)v1);
  PDEV::Free((struct PDEV *)v1);
}
