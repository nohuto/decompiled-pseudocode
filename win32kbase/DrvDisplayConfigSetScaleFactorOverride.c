__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 *v8; // rcx
  struct _LUID *v9; // rdx
  DWORD LowPart; // eax
  struct _DPI_INFORMATION *v11; // r9
  int v12; // eax
  struct _LUID *v13; // r10
  __int64 v14; // rdx
  struct _LUID *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // [rsp+50h] [rbp+18h] BYREF

  v4 = -1073741811;
  v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v5 + 8), 16);
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v6) + 24) + 6080LL); i; i = *v8 )
  {
    v8 = (__int64 *)i;
    if ( (*(_DWORD *)(i + 40) & 0x401) == 1 )
    {
      v9 = *(struct _LUID **)(i + 2552);
      if ( v9 )
      {
        if ( v9 != (struct _LUID *)-4LL )
        {
          LowPart = v9[20].LowPart;
          if ( (LowPart & 0x800000) != 0 )
          {
            v11 = (struct _DPI_INFORMATION *)(i + 2424);
            if ( a2 )
            {
              if ( *a2 )
              {
                v12 = SetScaleFactorOverride(v9 + 30, v9[31].LowPart, a1[5], v11);
                v4 = v12;
                if ( v12 < 0 )
                  WdLogSingleEntry5(
                    2LL,
                    v12,
                    (int)a1[5],
                    *(int *)(*(_QWORD *)(i + 2552) + 244LL),
                    *(unsigned int *)(*(_QWORD *)(i + 2552) + 240LL),
                    *(unsigned int *)(*(_QWORD *)(i + 2552) + 248LL));
              }
              else if ( (LowPart & 4) != 0 )
              {
                v15 = v9 + 30;
                v14 = v9[31].LowPart;
LABEL_20:
                v4 = SetScaleFactorOverride(v15, v14, a1[5], v11);
                break;
              }
              v8 = (__int64 *)i;
            }
            else
            {
              v13 = v9 + 30;
              if ( a1[2] == v9[30].LowPart && a1[3] == v9[30].HighPart )
              {
                v14 = v9[31].LowPart;
                if ( a1[4] == (_DWORD)v14 )
                {
                  v15 = v13;
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
  }
  DRIVERMANAGEMENTSHARELOCK::~DRIVERMANAGEMENTSHARELOCK((DRIVERMANAGEMENTSHARELOCK *)&v21);
  if ( v4 >= 0 )
    UserNotifyUniversalScaleFactorChanged(v17, v16, v18, v19);
  return (unsigned int)v4;
}
