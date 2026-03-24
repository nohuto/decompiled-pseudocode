/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007BDB8 (MultiUserNtGreCleanup.c)
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C000AAF0 (-vCleanupDCs@@YAXK@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C000D5E8 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C000D64C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0010D28 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C001C150 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001C1E0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextOwned @ 0x1C001C270 (HmgNextOwned.c)
 *     bDeleteBrush @ 0x1C001C340 (bDeleteBrush.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C002827C (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002A5A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0038B54 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     bDeletePalette @ 0x1C0082990 (bDeletePalette.c)
 *     HmgSetLock @ 0x1C009E244 (HmgSetLock.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00B344C (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CAF18 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CBF38 (-vGarbageCollectObjects@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C013F4DC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     EngDeleteDriverObj @ 0x1C014C130 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C014C260 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(GdiHandleManager *a1, unsigned int a2)
{
  unsigned int v3; // r14d
  unsigned int v4; // r12d
  int v5; // eax
  GdiHandleManager *v6; // rcx
  int v7; // eax
  unsigned int i; // ecx
  unsigned int Owned; // edi
  int v10; // eax
  GdiHandleManager *v11; // rcx
  GdiHandleManager *v12; // rcx
  GdiHandleManager *v13; // rcx
  unsigned int j; // ecx
  GdiHandleManager *v15; // rcx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  void (*v19)(void); // rax
  int v20; // eax
  unsigned int k; // ecx
  unsigned int v22; // edi
  int v23; // edi
  unsigned int m; // ecx
  HDRVOBJ v25; // rsi
  char v26; // al
  int v27; // eax
  unsigned int v28; // r15d
  PERESOURCE v30[2]; // [rsp+20h] [rbp-10h] BYREF
  HDRVOBJ hdo; // [rsp+80h] [rbp+50h] BYREF
  __int64 *v32; // [rsp+88h] [rbp+58h] BYREF

  v3 = (unsigned int)a1;
  v4 = 1;
  if ( a2 == 2 )
  {
    LOBYTE(a1) = 18;
    MultiUserGreCleanupHmgRemoveAllLocks(a1);
    v5 = qword_1C0256960 ? qword_1C0256960() : -1073741637;
    if ( v5 >= 0 && qword_1C0256968 )
      qword_1C0256968(2LL);
  }
  vCleanupDCs(v3);
  if ( a2 == 2 )
  {
    LOBYTE(v6) = 10;
    MultiUserGreCleanupHmgRemoveAllLocks(v6);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0xAu);
  }
  if ( qword_1C0256970 )
    v7 = qword_1C0256970();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0256978 )
    qword_1C0256978(v3);
  if ( a2 == 2 )
  {
    LOBYTE(v6) = 16;
    MultiUserGreCleanupHmgRemoveAllLocks(v6);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0x10u);
  }
  hdo = 0LL;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, v3, (unsigned __int64 *)&hdo);
    if ( !Owned )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 0x10 )
      bDeleteBrush((struct HOBJ__ *)hdo, 1, 0);
  }
  DxLddmCleanupAtProcessDestroy(v3);
  if ( qword_1C0256980 )
    v10 = qword_1C0256980();
  else
    v10 = -1073741637;
  if ( v10 >= 0 && qword_1C0256988 )
    qword_1C0256988(v3);
  if ( a2 == 2 )
  {
    vReleaseCurrentpMapProcForSurfaces(2LL);
    LOBYTE(v11) = 5;
    SURFACE::pdibDefault = 0LL;
    ppalDefault = 0LL;
    ppalMono = 0LL;
    hpalMono = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(v11);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(5u);
  }
  vCleanupSurfaces(v3, a2);
  vGarbageCollectObjects();
  if ( a2 == 2 )
  {
    LOBYTE(v12) = 4;
    hrgnDefault = 0LL;
    prgnDefault = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(v12);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(4u);
  }
  vCleanupRegions(v3);
  if ( a2 == 2 )
  {
    LOBYTE(v13) = 9;
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(v13);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  hdo = 0LL;
  for ( j = 0; ; j = v16 )
  {
    v16 = HmgNextOwned(j, v3, (unsigned __int64 *)&hdo);
    if ( !v16 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace(hdo, 0LL);
  }
  if ( a2 == 2 )
  {
    LOBYTE(v15) = 21;
    MultiUserGreCleanupHmgRemoveAllLocks(v15);
    if ( qword_1C0256990 )
      v17 = qword_1C0256990();
    else
      v17 = -1073741637;
    if ( v17 >= 0 && qword_1C0256998 )
      qword_1C0256998(v3);
    MultiUserGreCleanupHmgRemoveAllLocks(0LL);
    hdo = 0LL;
    v32 = 0LL;
    v30[0] = 0LL;
    if ( qword_1C02569B0 )
      v18 = qword_1C02569B0();
    else
      v18 = -1073741637;
    if ( v18 >= 0 )
    {
      if ( qword_1C02569B8 )
        qword_1C02569B8(&hdo, &v32, v30);
      if ( *(_QWORD *)hdo )
        Win32FreePool(*(_QWORD *)hdo);
      if ( *v32 )
        Win32FreePool(*v32);
      if ( v30[0] )
        Win32FreePool((__int64)v30[0]);
    }
    v19 = (void (*)(void))qword_1C0256668;
  }
  else
  {
    if ( a2 != 1 )
      goto LABEL_78;
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    v20 = qword_1C02569A0 ? qword_1C02569A0() : -1073741637;
    if ( v20 < 0 )
      goto LABEL_78;
    v19 = (void (*)(void))qword_1C02569A8;
  }
  if ( v19 )
    v19();
LABEL_78:
  hdo = 0LL;
  for ( k = 0; ; k = v22 )
  {
    v22 = HmgNextOwned(k, v3, (unsigned __int64 *)&hdo);
    if ( !v22 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v30[0] = (PERESOURCE)ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v32, (HPALETTE)hdo);
      if ( v32 )
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v32);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v32);
      SEMOBJ::vUnlock(v30);
    }
  }
  v23 = 0;
  hdo = 0LL;
  for ( m = 0; ; m = v28 )
  {
    v28 = HmgNextOwned(m, v3, (unsigned __int64 *)&hdo);
    if ( !v28 )
      break;
    v25 = hdo;
    v26 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( qword_1C02569C0 )
        v27 = qword_1C02569C0();
      else
        v27 = -1073741637;
      if ( v27 >= 0 && qword_1C02569C8 )
        qword_1C02569C8(v25);
    }
    else if ( v26 == 8 )
    {
      v4 = bDeletePalette(hdo, 1LL, a2);
      if ( !v4 && !v23 )
        v23 = 1;
    }
    else if ( v26 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(v25);
      EngDeleteDriverObj(v25, 1, 1);
    }
    else
    {
      v4 = 0;
      if ( !v23 )
        v23 = 1;
    }
  }
  return v4;
}
