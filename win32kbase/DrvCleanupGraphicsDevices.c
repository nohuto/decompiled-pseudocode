/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C0192A24
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015B374 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00A0200 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00A02D4 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C00AFF24 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

__int64 __fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // r14d
  unsigned int v4; // edx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rcx
  _QWORD *i; // rax
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  struct _KMUTANT *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = (*(_QWORD *)(v2 + 1264) != *(_QWORD *)(v2 + 1352)) + 1;
  v4 = (*(_QWORD *)(v2 + 1264) != *(_QWORD *)(v2 + 1352)) + 3;
  v19 = v4;
  do
  {
    v5 = 0LL;
    if ( (v3 & 1) != 0 )
    {
      v6 = *(_QWORD *)(v2 + 1360);
      v7 = *(_QWORD *)(v2 + 1344);
    }
    else
    {
      v6 = *(_QWORD *)(v2 + 1368);
      v7 = *(_QWORD *)(v2 + 1352);
    }
    *(_QWORD *)(v2 + 1264) = v7;
    *(_QWORD *)(v2 + 1272) = v6;
    if ( v7 )
    {
      do
      {
        v8 = *(_QWORD *)(v7 + 128);
        if ( v1 && v1 == *(_QWORD *)(v7 + 144) )
        {
          EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 8));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
          for ( i = *(_QWORD **)(*(_QWORD *)(SGDGetSessionState(v9) + 24) + 6080LL); i; i = (_QWORD *)*i )
          {
            if ( i[319] == v7 )
              i[319] = 0LL;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
          v11 = *(struct _ERESOURCE **)(v2 + 8);
          if ( v11 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v11);
            PsLeavePriorityRegion(v13, v12);
          }
          if ( v7 == *(_QWORD *)(v2 + 1264) )
          {
            *(_QWORD *)(v2 + 1264) = v8;
          }
          else if ( v5 )
          {
            *(_QWORD *)(v5 + 128) = v8;
          }
          if ( v7 == *(_QWORD *)(v2 + 1272) )
            *(_QWORD *)(v2 + 1272) = v5;
          if ( (*(_DWORD *)(v7 + 160) & 0x800000) != 0 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v11) + 24) + 3824LL);
            OPM::CMutex::Lock((void **)(v14 + 56));
            OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
              v14 + 24,
              (_DWORD *)(v7 + 240),
              v14 + 48);
            v15 = *(struct _KMUTANT **)(v14 + 56);
            if ( v15 )
              KeReleaseMutex(v15, 0);
            DrvRemoveAdapterLuid(*(struct _LUID *)(v7 + 240));
            v1 = a1;
          }
          DrvCleanupOneGraphicsDevice(v7);
          v7 = v5;
        }
        v5 = v7;
        v7 = v8;
      }
      while ( v8 );
      v4 = v19;
    }
    result = *(_QWORD *)(v2 + 1264);
    v17 = *(_QWORD *)(v2 + 1272);
    if ( (v3 & 1) != 0 )
    {
      *(_QWORD *)(v2 + 1344) = result;
      *(_QWORD *)(v2 + 1360) = v17;
    }
    else
    {
      *(_QWORD *)(v2 + 1352) = result;
      *(_QWORD *)(v2 + 1368) = v17;
    }
    ++v3;
  }
  while ( v3 < v4 );
  return result;
}
