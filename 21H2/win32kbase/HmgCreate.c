/*
 * XREFs of HmgCreate @ 0x1C0055348
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C001F710 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C0045014 (GreCreateSemaphoreInternal.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0055768 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C00557D4 (-InitializeTypeIsolation@@YA_NXZ.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C0055840 (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C00558B4 (-HmgrStacksInit@@YAXXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C0055A2C (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     Win32CreateSection @ 0x1C0055E80 (Win32CreateSection.c)
 *     GreCreateFastMutex @ 0x1C0056738 (GreCreateFastMutex.c)
 *     bLoadProcessHandleQuota @ 0x1C0056780 (bLoadProcessHandleQuota.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C008FEEC (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 HmgCreate()
{
  unsigned int v0; // eax
  __int64 v1; // rbx
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rdi
  struct _ENTRY *v15; // rdx
  unsigned int v16; // ecx
  GdiHandleManager *v17; // rcx
  int v18; // ebx
  union _LARGE_INTEGER *v19; // rax
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  _QWORD *v21; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+28h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+38h] BYREF
  int v29; // [rsp+B8h] [rbp+40h] BYREF
  int v30; // [rsp+BCh] [rbp+44h]

  v0 = (unsigned int)qword_1C029B258;
  if ( qword_1C029B258 )
    v0 = qword_1C029B258();
  gMaxGdiHandleCount = v0;
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  v1 = 0x10000LL;
  if ( gMaxGdiHandleCount < 0x10000 )
    v1 = gMaxGdiHandleCount;
  if ( qword_1C029B488 )
    qword_1C029B488();
  ghsemHmgr = (PERESOURCE)GreCreateSemaphoreInternal(0);
  if ( !ghsemHmgr )
    return 0LL;
  memset(&laSize, 0, 0x7CuLL);
  if ( !HmgInitializeLookAsideList(1u, 0x860u, v2, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(4u, 0x70u, v3, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(5u, SURFACE::tSize + 256, v4, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(8u, 0xC8u, v5, 0xCu) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0x10u, 0xB8u, v6, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xAu, 0x278u, v7, 0x40u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xBu, 0x390u, v8, 0x37u) )
    return 0LL;
  ghfmMemory = (PKGUARDED_MUTEX)GreCreateFastMutex();
  if ( !ghfmMemory )
    return 0LL;
  gDpiDepDefaultGuiFontsPushLock = 0LL;
  gDCOwnershipChangeLock = 0LL;
  v30 = 0;
  v29 = 1573528;
  if ( (int)Win32CreateSection((unsigned int)&gpHmgrSharedHandleSection, 6, v9, (unsigned int)&v29) < 0 )
    return 0LL;
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(gpHmgrSharedHandleSection, &gpGdiSharedMemory, &ViewSize) < 0 )
    return 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v25[0] = 0LL;
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
  if ( (int)MmMapViewOfSection(
              gpHmgrSharedHandleSection,
              CurrentProcess,
              &v26,
              0LL,
              4096LL,
              v25,
              &v24,
              2,
              0x400000,
              4,
              ViewSize) < 0 )
    return 0LL;
  RegionSize = 24 * v1;
  BaseAddress = (PVOID)v26;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v26 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  gpentHmgr = (struct _ENTRY *)gpGdiSharedMemory;
  gpGdiDevCaps = (struct _DEVCAPS *)((char *)gpGdiSharedMemory + 1572864);
  gpHandleManager = GdiHandleManager::Create(v16, v15, v1);
  if ( !gpHandleManager )
    return 0LL;
  v18 = 0;
  while ( 1 )
  {
    LODWORD(v26) = 0;
    if ( !GdiHandleManager::AcquireEntryIndex(v17, (unsigned int *)&v26) )
      break;
    if ( (unsigned int)++v18 >= 0xA )
      goto LABEL_27;
  }
  GdiHandleManager::Destroy(v17);
  gpHandleManager = 0LL;
LABEL_27:
  if ( !gpHandleManager )
    return 0LL;
  gahStockObjects = (void **)((char *)gpGdiSharedMemory + 1573040);
  gahStockObjects96 = (void **)((char *)gpGdiSharedMemory + 1573216);
  gahDpiDepDefaultGuiFonts = (void **)((char *)gpGdiSharedMemory + 1573392);
  HmgrStacksInit();
  v19 = (union _LARGE_INTEGER *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                  68LL,
                                  8uLL,
                                  1819109447);
  gpLockShortDelay = v19;
  if ( !v19 )
    return 0LL;
  v20 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  v19->LowPart = -100000;
  gpLockShortDelay->HighPart = -1;
  gpTmpGlobal = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(v20, 260LL, 0x1000uLL, 1836345415);
  v21 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                    68LL,
                    8uLL,
                    1836345415);
  gpTmpGlobalFree = v21;
  if ( gpTmpGlobal && v21 && (*v21 = gpTmpGlobal, InitializeReferenceTracker()) && InitializeTypeIsolation() )
    return 1LL;
  else
    return 0LL;
}
