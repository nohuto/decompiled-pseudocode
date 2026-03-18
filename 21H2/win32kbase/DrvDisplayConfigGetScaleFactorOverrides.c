/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0173850
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  int v5; // r8d
  struct PDEV *i; // rcx
  _DWORD *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx

  v4 = a2;
  if ( ghsemDriverMgmt )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDriverMgmt, a2);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, a3);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    if ( (*((_DWORD *)i + 10) & 0x401) == 1 )
    {
      v7 = (_DWORD *)*((_QWORD *)i + 319);
      if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v8 = v7[40];
        if ( (v8 & 0x800000) != 0 )
        {
          if ( v4 )
          {
            if ( (v8 & 4) != 0 )
              goto LABEL_9;
          }
          else if ( *(_DWORD *)(a1 + 8) == v7[62] && *(_DWORD *)(a1 + 12) == v7[63] && *(_DWORD *)(a1 + 16) == v7[64] )
          {
LABEL_9:
            *(_QWORD *)(a1 + 20) = *((_QWORD *)i + 313);
            *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 628);
            break;
          }
        }
      }
    }
  }
  v9 = i != 0LL ? 0 : 0xC000000D;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v5);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v10);
  }
  return v9;
}
