/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C00D8D30
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 * Callees:
 *     DrvGetDisplayDriverNames @ 0x1C0024700 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     HDXDrvEscape @ 0x1C00D8F50 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int *DisplayDriverNames; // rax
  char *v14; // rdi
  int v15; // r15d
  unsigned __int16 *v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  int v19; // eax
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+30h] [rbp-38h]

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
    v11 = *(_QWORD *)(SGDGetSessionState(65533LL) + 24);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v11 + 80));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v11 + 80), 1);
    v12 = 0LL;
    v24 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v26 = 56 * v12;
        v25 = *(_QWORD *)(*(_QWORD *)(56 * v12 + a1 + 40) + 2552LL);
        DisplayDriverNames = DrvGetDisplayDriverNames(v25);
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
              if ( !v19 && (*(_DWORD *)(v25 + 160) & 0x4000000) != 0 )
              {
                v6 = *(_QWORD *)(v26 + a1 + 40);
                v8 = HDXDrvEscape(v6, (unsigned int)v7, a5, a6);
                if ( v8 != 1 )
                  goto LABEL_22;
              }
            }
            while ( (unsigned int)++v15 < *(_DWORD *)v14 );
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
          v14 = 0LL;
        }
        v12 = (unsigned int)(v24 + 1);
        v24 = v12;
      }
      while ( (unsigned int)v12 < *(_DWORD *)(a1 + 20) );
      if ( !v14 )
        goto LABEL_17;
LABEL_22:
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    }
LABEL_17:
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v11 + 80));
    v20 = *(struct _ERESOURCE **)(v11 + 80);
    if ( v20 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v20);
      PsLeavePriorityRegion(v22, v21);
    }
    WdLogSingleEntry1(5LL, v6);
    return v8;
  }
  else
  {
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), (unsigned int)v7, a5, a6);
  }
}
