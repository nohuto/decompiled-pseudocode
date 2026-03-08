/*
 * XREFs of HmgCreate @ 0x1C002CDD0
 * Callers:
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C002B04C (GreCreateSemaphoreInternal.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C002D210 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     GreCreateFastMutex @ 0x1C002D2A8 (GreCreateFastMutex.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C002D2F0 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     Win32CreateSection @ 0x1C002D5F4 (Win32CreateSection.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0051F60 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C008AD04 (-HmgrStacksInit@@YAXXZ.c)
 *     bLoadProcessHandleQuota @ 0x1C008AE98 (bLoadProcessHandleQuota.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C009FC10 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x1C00C4C8C (-InitializeTypeIsolation@@YA_NXZ.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C00CF19C (-InitializeReferenceTracker@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall HmgCreate(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 (*v5)(void); // rax
  char *SemaphoreInternal; // rax
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  __int64 FastMutex; // rax
  int v15; // r8d
  _QWORD *v16; // rsi
  void *v17; // rcx
  struct _ENTRY **v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 CurrentProcess; // r15
  struct _ENTRY *v24; // rdx
  unsigned int v25; // ecx
  struct GdiHandleManager *v26; // rax
  int v27; // edi
  GdiHandleManager *v28; // rcx
  struct _ENTRY *v29; // rcx
  _DWORD *v30; // rax
  NSInstrumentation::CLeakTrackingAllocator *v31; // rcx
  void *v32; // rax
  NSInstrumentation::CLeakTrackingAllocator *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-28h] BYREF
  __int64 v38; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v39[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v40; // [rsp+B0h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp+48h] BYREF
  int v43; // [rsp+C8h] [rbp+50h] BYREF
  int v44; // [rsp+CCh] [rbp+54h]

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v2 = (int)qword_1C02D5A58;
  if ( qword_1C02D5A58 )
    v2 = qword_1C02D5A58();
  *(_DWORD *)(v1 + 1904) = v2;
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    *(_DWORD *)(v1 + 2376) = 10000;
  v3 = *(_DWORD *)(v1 + 1904);
  v4 = 0x10000LL;
  if ( v3 < 0x10000 )
    v4 = v3;
  v5 = qword_1C02D5C90;
  if ( qword_1C02D5C90 )
    v5 = (__int64 (*)(void))qword_1C02D5C90();
  *(_QWORD *)(v1 + 1896) = v5;
  SemaphoreInternal = GreCreateSemaphoreInternal(0);
  *(_QWORD *)(v1 + 1912) = SemaphoreInternal;
  if ( !SemaphoreInternal )
    return 0LL;
  memset((void *)(v1 + 2200), 0, 0x7CuLL);
  if ( !HmgInitializeLookAsideList(1u, 0x888u, v7, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(4u, 0x78u, v8, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(5u, 0x458u, v9, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(8u, 0xC8u, v10, 0xCu) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0x10u, 0xB8u, v11, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xAu, 0x278u, v12, 0x40u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xBu, 0x390u, v13, 0x37u) )
    return 0LL;
  FastMutex = GreCreateFastMutex();
  *(_QWORD *)(v1 + 144) = FastMutex;
  if ( !FastMutex )
    return 0LL;
  *(_QWORD *)(v1 + 2328) = 0LL;
  v16 = (_QWORD *)(v1 + 2344);
  *(_QWORD *)(v1 + 2336) = 0LL;
  v44 = 0;
  v43 = 1573528;
  if ( (int)Win32CreateSection((int)v1 + 2344, 6, v15, (unsigned int)&v43) < 0 )
    return 0LL;
  v17 = (void *)*v16;
  v18 = (struct _ENTRY **)(v1 + 1928);
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(v17, (PVOID *)(v1 + 1928), &ViewSize) < 0 )
    return 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v39[0] = 0LL;
  CurrentProcess = PsGetCurrentProcess(v20, v19, v21, v22);
  if ( (int)MmMapViewOfSection(*v16, CurrentProcess, &v40, 0LL, 4096LL, v39, &v38, 2, 0x400000, 4) < 0 )
    return 0LL;
  RegionSize = 24 * v4;
  BaseAddress = (PVOID)v40;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v40 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  v24 = *v18;
  v25 = *(_DWORD *)(v1 + 1904);
  *(_QWORD *)(v1 + 1936) = *v18;
  *(_QWORD *)(v1 + 1920) = (char *)v24 + 1572864;
  v26 = GdiHandleManager::Create(v25, v24, v4);
  *(_QWORD *)(v1 + 8008) = v26;
  if ( v26 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = *(GdiHandleManager **)(v1 + 8008);
      LODWORD(v40) = 0;
      if ( !GdiHandleManager::AcquireEntryIndex(v28, (unsigned int *)&v40) )
        break;
      if ( (unsigned int)++v27 >= 0xA )
        goto LABEL_27;
    }
    GdiHandleManager::Destroy(*(struct GdiHandleManager **)(v1 + 8008));
    *(_QWORD *)(v1 + 8008) = 0LL;
  }
LABEL_27:
  if ( !*(_QWORD *)(v1 + 8008) )
    return 0LL;
  v29 = *v18;
  *(_QWORD *)(v1 + 3168) = (char *)*v18 + 1573040;
  *(_QWORD *)(v1 + 3176) = (char *)v29 + 1573216;
  *(_QWORD *)(v1 + 3184) = (char *)v29 + 1573392;
  HmgrStacksInit();
  v30 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x44uLL, 8uLL, 0x6C6D6847u);
  *(_QWORD *)(v1 + 2352) = v30;
  if ( !v30 )
    return 0LL;
  v31 = gpLeakTrackingAllocator;
  *v30 = -100000;
  *(_DWORD *)(*(_QWORD *)(v1 + 2352) + 4LL) = -1;
  v32 = NSInstrumentation::CLeakTrackingAllocator::Allocate(v31, 0x104uLL, 0x1000uLL, 0x6D746847u);
  v33 = gpLeakTrackingAllocator;
  *(_QWORD *)(v1 + 2368) = v32;
  v34 = NSInstrumentation::CLeakTrackingAllocator::Allocate(v33, 0x44uLL, 8uLL, 0x6D746847u);
  v35 = *(_QWORD *)(v1 + 2368);
  *(_QWORD *)(v1 + 2360) = v34;
  if ( !v35 )
    return 0LL;
  if ( v34 && (*v34 = v35, InitializeReferenceTracker()) && InitializeTypeIsolation() )
    return 1LL;
  else
    return 0LL;
}
