/*
 * XREFs of ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158
 * Callers:
 *     GdiProcessCallout @ 0x1C006FD60 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     HmgSetLock @ 0x1C0019CE0 (HmgSetLock.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006C084 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C006DC30 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C006DCE4 (-vCleanupSurfaces@@YAXK@Z.c)
 *     HmgNextOwned @ 0x1C006DD80 (HmgNextOwned.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     bDeletePalette @ 0x1C00CB0A0 (bDeletePalette.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x1C00CE504 (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DEF60 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     EngDeleteDriverObj @ 0x1C0197F40 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C0198060 (EngLockDriverObj.c)
 */

__int64 GrepCloseCurrentProcess(void)
{
  unsigned int v0; // r15d
  unsigned __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 i; // rax
  PDEV *v5; // rdi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  HDRVOBJ v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 CurrentProcessWin32Process; // rax
  HDRVOBJ hdo; // [rsp+60h] [rbp+40h] BYREF
  void **v16; // [rsp+68h] [rbp+48h] BYREF
  void *v17; // [rsp+70h] [rbp+50h] BYREF

  v0 = 1;
  v1 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  for ( i = hdevEnumerate<0>(0LL); ; i = hdevEnumerate<0>(v5) )
  {
    v5 = (PDEV *)i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 40) & 0x8000) != 0 )
    {
      v12 = *(_QWORD *)(i + 1760);
      v13 = *(_QWORD *)(v12 + 48);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( v13 == CurrentProcessWin32Process )
        *(_QWORD *)(*((_QWORD *)v5 + 220) + 48LL) = 0LL;
    }
  }
  if ( *(_DWORD *)(v3 + 3192) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( qword_1C02D5ED8 )
    {
      if ( (int)qword_1C02D5ED8() >= 0 && qword_1C02D5EE0 )
        qword_1C02D5EE0();
    }
  }
  vCleanupDCs(v1);
  MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  if ( qword_1C02D5EE8 && (int)qword_1C02D5EE8() >= 0 && qword_1C02D5EF0 )
    qword_1C02D5EF0((unsigned int)v1);
  MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  hdo = 0LL;
  v6 = 0;
  while ( 1 )
  {
    v6 = HmgNextOwned(v6, (unsigned int)v1, &hdo);
    if ( !v6 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 0x10 )
      bDeleteBrush((struct HOBJ__ *)hdo);
  }
  DxLddmCleanupAtProcessDestroy(v1);
  if ( qword_1C02D5EF8 && (int)qword_1C02D5EF8() >= 0 && qword_1C02D5F00 )
    qword_1C02D5F00((unsigned int)v1);
  if ( *(_DWORD *)(v3 + 3192) )
  {
    vReleaseCurrentpMapProcForSurfaces();
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    *(_QWORD *)(v3 + 6000) = 0LL;
    *(_QWORD *)(v3 + 6032) = 0LL;
    *(_QWORD *)(v3 + 6024) = 0LL;
  }
  MultiUserGreCleanupHmgRemoveAllLocks(5u);
  vCleanupSurfaces(v1);
  vGarbageCollectObjects();
  if ( *(_DWORD *)(v3 + 3192) )
  {
    *(_QWORD *)(v3 + 6392) = 0LL;
    *(_QWORD *)(v3 + 6400) = 0LL;
  }
  MultiUserGreCleanupHmgRemoveAllLocks(4u);
  vCleanupRegions(v1);
  if ( *(_DWORD *)(v3 + 3192) )
    *(_QWORD *)(v3 + 2400) = 0LL;
  MultiUserGreCleanupHmgRemoveAllLocks(9u);
  hdo = 0LL;
  v7 = 0;
  while ( 1 )
  {
    v7 = HmgNextOwned(v7, (unsigned int)v1, &hdo);
    if ( !v7 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace(hdo, 0LL);
  }
  if ( *(_DWORD *)(v3 + 3192) )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( qword_1C02D5F08 )
    {
      if ( (int)qword_1C02D5F08() >= 0 && qword_1C02D5F10 )
        qword_1C02D5F10((unsigned int)v1);
    }
  }
  MultiUserGreCleanupHmgRemoveAllLocks(0);
  if ( *(_DWORD *)(v3 + 3192) )
    goto LABEL_48;
  if ( qword_1C02D5F18 && (int)qword_1C02D5F18() >= 0 && qword_1C02D5F20 )
    qword_1C02D5F20();
  if ( *(_DWORD *)(v3 + 3192) )
  {
LABEL_48:
    hdo = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    if ( qword_1C02D5F28 && (int)qword_1C02D5F28() >= 0 )
    {
      if ( qword_1C02D5F30 )
        qword_1C02D5F30(&hdo, &v16, &v17);
      if ( *(_QWORD *)hdo )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)hdo);
      if ( *v16 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v16);
      if ( v17 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
    }
    if ( qword_1C02D5BF0 )
      qword_1C02D5BF0();
  }
  vRemoveRefPalettes(v1);
  hdo = 0LL;
  v8 = 0;
  while ( 1 )
  {
    v8 = HmgNextOwned(v8, (unsigned int)v1, &hdo);
    if ( !v8 )
      break;
    v10 = hdo;
    v11 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v0 = bDeletePalette(hdo);
    }
    else if ( v11 == 6 )
    {
      if ( qword_1C02D5F38 && (int)qword_1C02D5F38() >= 0 && qword_1C02D5F40 )
        qword_1C02D5F40(v10);
    }
    else if ( v11 == 28 )
    {
      HmgSetLock((__int64)hdo);
      EngLockDriverObj(v10);
      EngDeleteDriverObj(v10, 1, 1);
    }
    else
    {
      v0 = 0;
    }
  }
  return v0;
}
