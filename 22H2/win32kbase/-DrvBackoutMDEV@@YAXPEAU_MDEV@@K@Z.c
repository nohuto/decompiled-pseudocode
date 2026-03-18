/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160B38
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0159DF4 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rcx
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rsi
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rcx
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rcx
  struct SURFACE *v22; // [rsp+50h] [rbp+8h] BYREF
  struct PDEV *v23; // [rsp+60h] [rbp+18h] BYREF

  WdLogSingleEntry1(4LL, a1);
  v3 = 0;
  v4 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  v5 = *((_DWORD *)a1 + 5);
  if ( v5 )
  {
    do
    {
      v6 = 0;
      v7 = 56LL * v3;
      v22 = 0LL;
      v8 = *(_QWORD *)((char *)a1 + v7 + 40);
      v23 = (struct PDEV *)v8;
      while ( 1 )
      {
        GreAcquireHmgrSemaphore(v7);
        v6 = HmgSafeNextObjt(v6, 5, &v22);
        if ( !v6 )
          break;
        GreReleaseHmgrSemaphore(v9);
        v7 = (__int64)v22;
        if ( *((_QWORD *)v22 + 5) == *(_QWORD *)(v8 + 1768) && (*((_DWORD *)v22 + 29) & 1) != 0 )
          vCleanupRedirectionSurface((HSURF *)v22, 1);
      }
      GreReleaseHmgrSemaphore(v9);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
      if ( *(_DWORD *)(v8 + 12) == 1 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
        v10 = *(struct _ERESOURCE **)(v4 + 8);
        if ( v10 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v10);
          PsLeavePriorityRegion(v11);
        }
        DrvDisableDisplay((HSEMAPHORE *)v8, 0);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
      v12 = *(struct _ERESOURCE **)(v4 + 8);
      if ( v12 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v12);
        PsLeavePriorityRegion(v13);
      }
      EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
      --*(_DWORD *)(v8 + 12);
      EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
      v14 = *(struct _ERESOURCE **)(v4 + 8);
      if ( v14 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v14);
        PsLeavePriorityRegion(v15);
      }
      PDEVOBJ::vUnreferencePdev(&v23);
      v5 = *((_DWORD *)a1 + 5);
      ++v3;
    }
    while ( v3 < v5 );
  }
  v16 = 0;
  if ( v5 )
  {
    do
    {
      v17 = *((_QWORD *)a1 + 7 * v16 + 6);
      if ( v17 )
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
        if ( *(_DWORD *)(v17 + 12) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
          v18 = *(struct _ERESOURCE **)(v4 + 8);
          if ( v18 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v18);
            PsLeavePriorityRegion(v19);
          }
          DrvEnableDisplay((HSEMAPHORE *)v17);
          EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
        v20 = *(struct _ERESOURCE **)(v4 + 8);
        if ( v20 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v20);
          PsLeavePriorityRegion(v21);
        }
      }
      ++v16;
    }
    while ( v16 < *((_DWORD *)a1 + 5) );
  }
}
