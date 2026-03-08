/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0193370
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C002834C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0047AF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ??1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ @ 0x1C018C7B0 (--1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *i; // rdx
  _DWORD *v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
    ExEnterPriorityRegionAndAcquireResourceShared(v5);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
  for ( i = *(__int64 **)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 6080LL); i; i = (__int64 *)*i )
  {
    if ( (i[5] & 0x401) == 1 )
    {
      v8 = (_DWORD *)i[319];
      if ( v8 )
      {
        if ( v8 != (_DWORD *)-4LL )
        {
          v9 = v8[40];
          if ( (v9 & 0x800000) != 0 )
          {
            if ( a2 )
            {
              if ( (v9 & 4) != 0 )
                goto LABEL_10;
            }
            else if ( *(_DWORD *)(a1 + 8) == v8[60] && *(_DWORD *)(a1 + 12) == v8[61] && *(_DWORD *)(a1 + 16) == v8[62] )
            {
LABEL_10:
              *(_QWORD *)(a1 + 20) = i[313];
              *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 628);
              break;
            }
          }
        }
      }
    }
  }
  v10 = i == 0LL ? 0xC000000D : 0;
  DRIVERMANAGEMENTSHARELOCK::~DRIVERMANAGEMENTSHARELOCK((DRIVERMANAGEMENTSHARELOCK *)&v12);
  return v10;
}
