/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01708D4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0061A80 (HmgSafeNextObjtByIndex.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077CD4 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D3B90 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C016F53C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // eax
  unsigned int i; // esi
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rsi
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct SURFACE *v23; // [rsp+50h] [rbp+8h] BYREF
  struct PDEV *v24; // [rsp+60h] [rbp+18h] BYREF

  WdLogSingleEntry1(4LL, a1);
  v4 = *((_DWORD *)a1 + 5);
  for ( i = 0; i < v4; ++i )
  {
    v6 = 0;
    v7 = 56LL * i;
    v23 = 0LL;
    v8 = *(_QWORD *)((char *)a1 + v7 + 40);
    v24 = (struct PDEV *)v8;
    while ( 1 )
    {
      GreAcquireHmgrSemaphore(v7, v2, v3);
      v6 = HmgSafeNextObjtByIndex((GdiHandleManager *)v6, 5, &v23);
      if ( !v6 )
        break;
      GreReleaseHmgrSemaphore(v10, v9, v11);
      v7 = (__int64)v23;
      if ( *((_QWORD *)v23 + 5) == *(_QWORD *)(v8 + 1768) && (*((_DWORD *)v23 + 29) & 1) != 0 )
        vCleanupRedirectionSurface((HSURF *)v23, 1);
    }
    GreReleaseHmgrSemaphore(v10, v9, v11);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( *(_DWORD *)(v8 + 12) == 1 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v12);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v13);
      }
      DrvDisableDisplay((HSEMAPHORE *)v8, 0);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v12);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v14);
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    --*(_DWORD *)(v8 + 12);
    PDEVOBJ::vUnreferencePdev(&v24, 0, v15);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v16);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v17);
    }
    v4 = *((_DWORD *)a1 + 5);
  }
  v18 = 0;
  if ( v4 )
  {
    do
    {
      v19 = *((_QWORD *)a1 + 7 * v18 + 6);
      if ( v19 )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        if ( *(_DWORD *)(v19 + 12) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v20);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion(v21);
          }
          DrvEnableDisplay((HSEMAPHORE *)v19);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v20);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion(v22);
        }
      }
      ++v18;
    }
    while ( v18 < *((_DWORD *)a1 + 5) );
  }
}
