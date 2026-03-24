/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C007BDB8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C011B880 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C000DD60 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C007B630 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C007C440 (Win32FreePagedLookasideList.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C007C8F0 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C007CA1C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     DrvNotifySessionStateChange @ 0x1C007D1D0 (DrvNotifySessionStateChange.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C007D304 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C007D514 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C007D560 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00B0CF8 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00B0D38 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00B1174 (-Destroy@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00B7600 (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00C8548 (--$FreeIsolatedType@V-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00CB158 (-Destroy@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     GreDeleteFastMutex @ 0x1C00CB2D0 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1C014DD08 (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  unsigned int v2; // ebx
  int v3; // edi
  unsigned int i; // edx
  unsigned int NextEntryIndex; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 *v10; // rbx
  int v11; // eax
  __int64 *v12; // rbx
  int v13; // eax
  __int64 *v14; // rbx
  int v15; // eax
  struct _ENTRY *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  int v20; // eax
  __int64 *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rbx
  int v24; // eax
  __int64 *v25; // rbx
  void *v26; // rcx
  int v27; // eax
  _QWORD *v28; // rbx
  int v29; // eax
  _QWORD *v30; // rbx
  struct tagREMOTE_CONTEXT *v31; // rcx
  unsigned __int8 **v32; // rbx
  unsigned __int8 *v33; // rcx
  unsigned __int8 *v34; // rcx
  unsigned __int8 *v35; // rcx
  unsigned __int8 *v36; // rcx
  unsigned __int8 *v37; // rcx
  PVOID *v38; // rbx
  __int64 v39; // rsi
  int v40; // eax
  struct GdiHandleManager *v41; // rcx
  void * near **v42; // rbx
  __int64 v43; // rsi
  int v44; // eax
  struct _ENTRY *v46; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v46 = 0LL;
  v2 = CurrentProcessId & 0xFFFFFFFC;
  v3 = 0;
  if ( gpHandleManager )
  {
    for ( i = 0; ; i = NextEntryIndex )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, i, &v46);
      if ( !NextEntryIndex )
        break;
      LOBYTE(v1) = *((_BYTE *)v46 + 14) - 1;
      if ( (unsigned __int8)v1 <= 0x1Du )
      {
        v1 = (GdiHandleManager *)(v2 | *((_DWORD *)v46 + 2) & 1);
        *((_DWORD *)v46 + 2) = (_DWORD)v1;
        ++v3;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v3;
  }
  v7 = -1073741637;
  if ( qword_1C0256440 )
    v8 = qword_1C0256440();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C0256448 )
    qword_1C0256448();
  if ( gpHandleManager )
    NtGdiCloseProcess(v2, 2LL);
  if ( qword_1C0256450 )
    v9 = qword_1C0256450();
  else
    v9 = -1073741637;
  if ( v9 >= 0 )
  {
    v10 = qword_1C0256458 ? (__int64 *)qword_1C0256458() : 0LL;
    if ( *v10 )
    {
      Win32FreePool(*v10);
      *v10 = 0LL;
    }
  }
  if ( qword_1C0256460 )
    v11 = qword_1C0256460();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v12 = qword_1C0256468 ? (__int64 *)qword_1C0256468() : 0LL;
    if ( *v12 )
    {
      Win32FreePool(*v12);
      *v12 = 0LL;
    }
  }
  if ( qword_1C0256470 )
    v13 = qword_1C0256470();
  else
    v13 = -1073741637;
  if ( v13 >= 0 )
  {
    v14 = qword_1C0256478 ? (__int64 *)qword_1C0256478() : 0LL;
    if ( *v14 )
    {
      Win32FreePool(*v14);
      *v14 = 0LL;
    }
  }
  if ( qword_1C0256480 )
    v15 = qword_1C0256480();
  else
    v15 = -1073741637;
  if ( v15 >= 0 )
  {
    v16 = 0LL;
    v46 = 0LL;
    if ( qword_1C0256488 )
    {
      v17 = qword_1C0256488(&v46);
      v16 = v46;
      v18 = v17;
    }
    else
    {
      v18 = 0LL;
    }
    v19 = 0LL;
    if ( v16 )
    {
      do
      {
        if ( *(_QWORD *)(v18 + 8 * v19) )
        {
          Win32FreePool(*(_QWORD *)(v18 + 8 * v19));
          *(_QWORD *)(v18 + 8 * v19) = 0LL;
          v16 = v46;
        }
        ++v19;
      }
      while ( v19 < (unsigned __int64)v16 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool(LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( qword_1C0256490 )
    v20 = qword_1C0256490();
  else
    v20 = -1073741637;
  if ( v20 >= 0 && qword_1C0256498 )
    qword_1C0256498();
  v21 = (__int64 *)&unk_1C0255328;
  v22 = 8LL;
  do
  {
    v23 = *v21;
    if ( *v21 )
    {
      PopThreadGuardedObject((_QWORD *)(v23 - 32));
      Win32FreePool(v23 - 32);
    }
    v21 += 4;
    --v22;
  }
  while ( v22 );
  if ( gpCachedEngbrush )
    Win32FreePool((__int64)gpCachedEngbrush);
  if ( gpCachedDbrush )
    Win32FreePool((__int64)gpCachedDbrush);
  if ( gpRGBXlate )
  {
    Win32FreePool((__int64)gpRGBXlate);
    gpRGBXlate = 0LL;
  }
  if ( qword_1C02564A0 )
    v24 = qword_1C02564A0();
  else
    v24 = -1073741637;
  if ( v24 >= 0 )
  {
    v25 = qword_1C02564A8 ? (__int64 *)qword_1C02564A8() : 0LL;
    if ( *v25 )
    {
      Win32FreePool(*v25);
      *v25 = 0LL;
    }
  }
  v26 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v26 )
    ZwClose(v26);
  if ( qword_1C02564B0 )
    v27 = qword_1C02564B0();
  else
    v27 = -1073741637;
  if ( v27 >= 0 )
  {
    v28 = qword_1C02564B8 ? (_QWORD *)qword_1C02564B8() : 0LL;
    if ( *v28 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<917504,3584>>();
      *v28 = 0LL;
    }
  }
  if ( qword_1C02564C0 )
    v29 = qword_1C02564C0();
  else
    v29 = -1073741637;
  if ( v29 >= 0 )
  {
    v30 = qword_1C02564C8 ? (_QWORD *)qword_1C02564C8() : 0LL;
    if ( *v30 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<917504,3584>>();
      *v30 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C0252288 )
  {
    Win32FreePool((__int64)qword_1C0252288);
    qword_1C0252288 = 0LL;
  }
  v31 = (struct tagREMOTE_CONTEXT *)qword_1C0252298;
  if ( qword_1C0252298 )
  {
    Win32FreePool(qword_1C0252298);
    qword_1C0252298 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v31);
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool((__int64)gpLockShortDelay);
    gpLockShortDelay = 0LL;
  }
  if ( gpTmpGlobal )
  {
    Win32FreePool((__int64)gpTmpGlobal);
    gpTmpGlobal = 0LL;
  }
  if ( gpTmpGlobalFree )
  {
    Win32FreePool((__int64)gpTmpGlobalFree);
    gpTmpGlobalFree = 0LL;
  }
  v32 = gpTypeIsolation;
  if ( gpTypeIsolation )
  {
    if ( *gpTypeIsolation )
      NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(*gpTypeIsolation);
    v33 = v32[2];
    if ( v33 )
      NSInstrumentation::CTypeIsolation<81920,320>::Destroy(v33);
    v34 = v32[3];
    if ( v34 )
      NSInstrumentation::CTypeIsolation<81920,320>::Destroy(v34);
    v35 = v32[1];
    if ( v35 )
      NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(v35);
    v36 = v32[4];
    if ( v36 )
      NSInstrumentation::CTypeIsolation<81920,320>::Destroy(v36);
    v37 = v32[6];
    if ( v37 )
      NSInstrumentation::CTypeIsolation<917504,3584>::Destroy(v37);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(v32);
    Win32FreePool((__int64)gpTypeIsolation);
    gpTypeIsolation = 0LL;
  }
  if ( gpReferenceTracker )
  {
    v38 = (PVOID *)&qword_1C024C3F8;
    v39 = 3LL;
    do
    {
      if ( *v38 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(*v38);
      v38 += 2;
      --v39;
    }
    while ( v39 );
    ExFreePoolWithTag(gpReferenceTracker, 0);
    gpReferenceTracker = 0LL;
  }
  if ( gpAdapterLuids )
  {
    Win32FreePool((__int64)gpAdapterLuids);
    gpAdapterLuids = 0LL;
  }
  if ( gpDevicesPerLuid )
  {
    Win32FreePool((__int64)gpDevicesPerLuid);
    gpDevicesPerLuid = 0LL;
  }
  if ( qword_1C02564E0 )
    v40 = qword_1C02564E0();
  else
    v40 = -1073741637;
  if ( v40 >= 0 && qword_1C02564E8 )
    qword_1C02564E8();
  MultiUserGreCleanupEngResources();
  GreDeleteFastMutex(ghfmMemory);
  ghfmMemory = 0LL;
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v41);
    gpHandleManager = 0LL;
  }
  if ( gpGdiSharedMemory )
  {
    MmUnmapViewInSessionSpace(gpGdiSharedMemory);
    gpGdiSharedMemory = 0LL;
  }
  if ( gpHmgrSharedHandleSection )
  {
    ObfDereferenceObject(gpHmgrSharedHandleSection);
    gpHmgrSharedHandleSection = 0LL;
  }
  RGNMEMOBJ::vDestroyScanLookAsideList();
  v42 = &pHmgLookAsideList;
  v43 = 31LL;
  do
  {
    if ( *v42 )
    {
      Win32FreePagedLookasideList();
      *v42 = 0LL;
    }
    ++v42;
    --v43;
  }
  while ( v43 );
  if ( qword_1C02564F0 )
    v44 = qword_1C02564F0();
  else
    v44 = -1073741637;
  if ( v44 >= 0 && qword_1C02564F8 )
    qword_1C02564F8();
  if ( qword_1C0256360 )
    v7 = qword_1C0256360();
  if ( v7 >= 0 && qword_1C0256368 )
    qword_1C0256368();
  return 1LL;
}
