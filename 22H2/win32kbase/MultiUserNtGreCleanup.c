/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C00A8AE8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0077CD4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C41C (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C00A92D0 (DrvNotifySessionStateChange.c)
 *     ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x1C00A95E0 (-IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ.c)
 *     ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x1C00A9604 (-FreeSessionGlobalsArea@Base@Gre@@YAXXZ.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C00A9640 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C00A9680 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     ?UninitializeTypeIsolation@@YAXXZ @ 0x1C00A9868 (-UninitializeTypeIsolation@@YAXXZ.c)
 *     ?MultiUserGreDeleteXLATE@@YAXXZ @ 0x1C00A98BC (-MultiUserGreDeleteXLATE@@YAXXZ.c)
 *     ?UninitializeReferenceTracker@@YAXXZ @ 0x1C00A9930 (-UninitializeReferenceTracker@@YAXXZ.c)
 *     ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x1C00A99B8 (-MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ.c)
 *     ?MultiUserGreHmgOwnAll@@YAXXZ @ 0x1C00A9A88 (-MultiUserGreHmgOwnAll@@YAXXZ.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00A9B3C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C4260 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MultiUserNtGreCleanup(Gre::Base *a1)
{
  __int64 v1; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v2; // rcx
  __int64 v3; // rbx
  char **v4; // rdi
  char **v5; // rdi
  char **v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 i; // rdi
  char *v11; // rdx
  char *v12; // rdx
  char *v13; // rdx
  char *v14; // rdx
  char *v15; // rdx
  char **v16; // rdi
  void *v17; // rcx
  struct PDEV **v18; // rdi
  struct PDEV **v19; // rdi
  char *v20; // rdx
  char *v21; // rdx
  char *v22; // rdx
  __int64 v23; // rcx
  char *v24; // rdx
  char *v25; // rdx
  char *v26; // rdx
  struct GdiHandleManager *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  char **v30; // rbx
  __int64 v31; // rdi
  unsigned __int64 v33; // [rsp+30h] [rbp+8h] BYREF

  if ( Gre::Base::IsSessionGlobalsAreaAllocated(a1) )
  {
    v3 = *(_QWORD *)(SGDGetSessionState(v1) + 24);
    if ( *(_BYTE *)v3 )
    {
      *(_DWORD *)(v3 + 3192) = 1;
      MultiUserGreHmgOwnAll();
      if ( qword_1C0294850 && (int)qword_1C0294850() >= 0 && qword_1C0294858 )
        qword_1C0294858();
      if ( *(_QWORD *)(v3 + 8008) )
        GrepCloseCurrentProcess();
      if ( qword_1C0294860 && (int)qword_1C0294860() >= 0 )
      {
        v4 = qword_1C0294868 ? (char **)qword_1C0294868() : 0LL;
        if ( *v4 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v4);
          *v4 = 0LL;
        }
      }
      if ( qword_1C0294870 && (int)qword_1C0294870() >= 0 )
      {
        v5 = qword_1C0294878 ? (char **)qword_1C0294878() : 0LL;
        if ( *v5 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v5);
          *v5 = 0LL;
        }
      }
      if ( qword_1C0294880 && (int)qword_1C0294880() >= 0 )
      {
        v6 = qword_1C0294888 ? (char **)qword_1C0294888() : 0LL;
        if ( *v6 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v6);
          *v6 = 0LL;
        }
      }
      if ( qword_1C0294890 && (int)qword_1C0294890() >= 0 )
      {
        v7 = 0LL;
        v33 = 0LL;
        if ( qword_1C0294898 )
        {
          v8 = qword_1C0294898(&v33);
          v7 = v33;
          v9 = v8;
        }
        else
        {
          v9 = 0LL;
        }
        for ( i = 0LL; i < v7; ++i )
        {
          v11 = *(char **)(v9 + 8 * i);
          if ( v11 )
          {
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
            *(_QWORD *)(v9 + 8 * i) = 0LL;
            v7 = v33;
          }
        }
      }
      v12 = *(char **)(v3 + 3000);
      if ( v12 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v12);
        *(_QWORD *)(v3 + 3000) = 0LL;
      }
      if ( qword_1C02948A0 && (int)qword_1C02948A0() >= 0 && qword_1C02948A8 )
        qword_1C02948A8();
      MultiUserGreDeleteXLATE();
      v13 = *(char **)(v3 + 200);
      if ( v13 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
      v14 = *(char **)(v3 + 192);
      if ( v14 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
      v15 = *(char **)(v3 + 3936);
      if ( v15 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
        *(_QWORD *)(v3 + 3936) = 0LL;
      }
      if ( qword_1C02948B0 && (int)qword_1C02948B0() >= 0 )
      {
        v16 = qword_1C02948B8 ? (char **)qword_1C02948B8() : 0LL;
        if ( *v16 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v16);
          *v16 = 0LL;
        }
      }
      v17 = *(void **)(*(_QWORD *)(v3 + 6472) + 24LL);
      if ( v17 )
        ZwClose(v17);
      if ( qword_1C02948C0 && (int)qword_1C02948C0() >= 0 )
      {
        v18 = qword_1C02948C8 ? (struct PDEV **)qword_1C02948C8() : 0LL;
        if ( *v18 )
        {
          PDEV::Free(*v18, 0);
          *v18 = 0LL;
        }
      }
      if ( qword_1C02948D0 && (int)qword_1C02948D0() >= 0 )
      {
        v19 = qword_1C02948D8 ? (struct PDEV **)qword_1C02948D8() : 0LL;
        if ( *v19 )
        {
          PDEV::Free(*v19, 0);
          *v19 = 0LL;
        }
      }
      MultiUserGreCleanupDrivers();
      MultiUserDrvCleanupGraphicsDeviceList();
      DrvNotifySessionStateChange(1LL);
      v20 = *(char **)(v3 + 2352);
      if ( v20 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v20);
        *(_QWORD *)(v3 + 2352) = 0LL;
      }
      v21 = *(char **)(v3 + 2368);
      if ( v21 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v21);
        *(_QWORD *)(v3 + 2368) = 0LL;
      }
      v22 = *(char **)(v3 + 2360);
      if ( v22 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v22);
        *(_QWORD *)(v3 + 2360) = 0LL;
      }
      UninitializeTypeIsolation();
      UninitializeReferenceTracker();
      v24 = *(char **)(v3 + 1304);
      if ( v24 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v24);
        *(_QWORD *)(v3 + 1304) = 0LL;
      }
      v25 = *(char **)(v3 + 1312);
      if ( v25 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v25);
        *(_QWORD *)(v3 + 1312) = 0LL;
      }
      if ( qword_1C02948F0 && (int)qword_1C02948F0() >= 0 && qword_1C02948F8 )
        qword_1C02948F8();
      MultiUserGreCleanupEngResources(v23);
      v26 = *(char **)(v3 + 144);
      if ( v26 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v26);
      v27 = *(struct GdiHandleManager **)(v3 + 8008);
      *(_QWORD *)(v3 + 144) = 0LL;
      if ( v27 )
      {
        GdiHandleManager::Destroy(v27);
        *(_QWORD *)(v3 + 8008) = 0LL;
      }
      v28 = *(void **)(v3 + 1928);
      if ( v28 )
      {
        MmUnmapViewInSessionSpace(v28);
        *(_QWORD *)(v3 + 1928) = 0LL;
      }
      v29 = *(void **)(v3 + 2344);
      if ( v29 )
      {
        ObfDereferenceObject(v29);
        *(_QWORD *)(v3 + 2344) = 0LL;
      }
      RGNMEMOBJ::vDestroyScanLookAsideList();
      v30 = (char **)(v3 + 1952);
      v31 = 31LL;
      do
      {
        if ( *v30 )
        {
          NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v2, *v30);
          *v30 = 0LL;
        }
        ++v30;
        --v31;
      }
      while ( v31 );
      if ( qword_1C0294900 && (int)qword_1C0294900() >= 0 && qword_1C0294908 )
        qword_1C0294908();
      if ( qword_1C0294770 && (int)qword_1C0294770() >= 0 && qword_1C0294778 )
        qword_1C0294778();
      if ( qword_1C0294F18 && (int)qword_1C0294F18() >= 0 && qword_1C0294F20 )
        qword_1C0294F20();
    }
    Gre::Base::FreeSessionGlobalsArea(v2);
  }
  return 1LL;
}
