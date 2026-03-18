/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C00D4750
 * Callers:
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     DrvGetDisplayDriverNames @ 0x1C007A970 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     HDXDrvEscape @ 0x1C00D4960 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  unsigned int v8; // r14d
  int v11; // r8d
  unsigned int v12; // r13d
  unsigned int *DisplayDriverNames; // rax
  char *v14; // rdi
  int v15; // r15d
  unsigned __int16 *v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+28h] [rbp-30h]

  v6 = 0LL;
  v7 = a4;
  v8 = 0;
  WdLogSingleEntry1(4LL, a1);
  if ( gRemoteSessionUseWddm )
  {
    WdLogSingleEntry1(5LL, v7);
    return 1LL;
  }
  else if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu && a3 )
  {
    EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
    v12 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v23 = 56LL * v12;
        v22 = *(_QWORD *)(*(_QWORD *)(v23 + a1 + 40) + 2552LL);
        DisplayDriverNames = DrvGetDisplayDriverNames(v22);
        v14 = (char *)DisplayDriverNames;
        if ( DisplayDriverNames )
        {
          v15 = 0;
          if ( *DisplayDriverNames )
          {
            do
            {
              v16 = *(unsigned __int16 **)&v14[16 * v15 + 16];
              v17 = a3 - (_QWORD)v16;
              do
              {
                v18 = *(unsigned __int16 *)((char *)v16 + v17);
                v19 = *v16 - v18;
                if ( v19 )
                  break;
                ++v16;
              }
              while ( v18 );
              if ( !v19 && (*(_DWORD *)(v22 + 160) & 0x4000000) != 0 )
              {
                v6 = *(_QWORD *)(v23 + a1 + 40);
                v8 = HDXDrvEscape(v6, (unsigned int)v7, a5, a6);
                if ( v8 != 1 )
                  goto LABEL_22;
              }
            }
            while ( (unsigned int)++v15 < *(_DWORD *)v14 );
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v14);
          v14 = 0LL;
        }
        ++v12;
      }
      while ( v12 < *(_DWORD *)(a1 + 20) );
      if ( !v14 )
        goto LABEL_17;
LABEL_22:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v14);
    }
LABEL_17:
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v11);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v20);
    }
    WdLogSingleEntry1(5LL, v6);
    return v8;
  }
  else
  {
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), (unsigned int)v7, a5, a6);
  }
}
