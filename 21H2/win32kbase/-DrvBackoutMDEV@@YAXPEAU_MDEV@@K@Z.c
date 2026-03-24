/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0143930
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011478 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgSafeNextObjtByIndex @ 0x1C000DCBC (HmgSafeNextObjtByIndex.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0014504 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00218E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00C4308 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C013F758 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // r8d
  unsigned int v5; // eax
  unsigned int i; // edi
  unsigned int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdi
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct SURFACE *v24; // [rsp+50h] [rbp+8h] BYREF
  struct PDEV *v25; // [rsp+60h] [rbp+18h] BYREF

  v2 = WdLogNewEntry5_WdEvent(a1);
  *(_QWORD *)(v2 + 24) = a1;
  WdLogEvent5_WdEvent(v2);
  v5 = *((_DWORD *)a1 + 5);
  for ( i = 0; i < v5; ++i )
  {
    v7 = 0;
    v8 = 56LL * i;
    v24 = 0LL;
    v9 = *(_QWORD *)((char *)a1 + v8 + 40);
    v25 = (struct PDEV *)v9;
    while ( 1 )
    {
      GreAcquireHmgrSemaphore(v8, v3, v4);
      v7 = HmgSafeNextObjtByIndex((GdiHandleManager *)v7, 5, &v24);
      if ( !v7 )
        break;
      GreReleaseHmgrSemaphore(v11, v10, v12);
      v8 = (__int64)v24;
      if ( *((_QWORD *)v24 + 5) == *(_QWORD *)(v9 + 1800) && (*((_DWORD *)v24 + 29) & 1) != 0 )
        vCleanupRedirectionSurface((HSURF *)v24, 1);
    }
    GreReleaseHmgrSemaphore(v11, v10, v12);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( *(_DWORD *)(v9 + 12) == 1 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v13);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v14);
      }
      DrvDisableDisplay((HSEMAPHORE *)v9, 0);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v13);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v15);
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    --*(_DWORD *)(v9 + 12);
    PDEVOBJ::vUnreferencePdev(&v25, 0, v16);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v17);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v18);
    }
    v5 = *((_DWORD *)a1 + 5);
  }
  v19 = 0;
  if ( v5 )
  {
    do
    {
      v20 = *((_QWORD *)a1 + 7 * v19 + 6);
      if ( v20 )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        if ( *(_DWORD *)(v20 + 12) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v21);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion(v22);
          }
          DrvEnableDisplay((HSEMAPHORE *)v20);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v21);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion(v23);
        }
      }
      ++v19;
    }
    while ( v19 < *((_DWORD *)a1 + 5) );
  }
}
