/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C01735B0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0069DB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0069E9C (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C009AA74 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // edx
  struct tagGRAPHICS_DEVICE *v3; // r14
  struct tagGRAPHICS_DEVICE *v4; // rsi
  struct tagGRAPHICS_DEVICE *v5; // rax
  wchar_t *v6; // r15
  int v7; // r8d
  struct PDEV *i; // rax
  __int64 v9; // rcx
  OPM *v10; // rdi
  struct _KMUTANT *v11; // rcx
  struct tagGRAPHICS_DEVICE *result; // rax
  __int64 v13; // [rsp+60h] [rbp+8h]
  unsigned int v14; // [rsp+68h] [rbp+10h]

  v13 = a1;
  v1 = (gpGraphicsDeviceList != (wchar_t *)gpLocalGraphicsDeviceList) + 1;
  v2 = (gpGraphicsDeviceList != (wchar_t *)gpLocalGraphicsDeviceList) + 3;
  v14 = v2;
  do
  {
    v3 = 0LL;
    if ( (v1 & 1) != 0 )
    {
      v4 = gpRemoteGraphicsDeviceList;
      v5 = gpRemoteGraphicsDeviceListLast;
    }
    else
    {
      v4 = gpLocalGraphicsDeviceList;
      v5 = gpLocalGraphicsDeviceListLast;
    }
    gpGraphicsDeviceListLast = v5;
    gpGraphicsDeviceList = (wchar_t *)v4;
    if ( v4 )
    {
      do
      {
        v6 = (wchar_t *)*((_QWORD *)v4 + 16);
        if ( a1 && a1 == *((_QWORD *)v4 + 18) )
        {
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          for ( i = gppdevList; i; i = *(struct PDEV **)i )
          {
            if ( *((struct tagGRAPHICS_DEVICE **)i + 319) == v4 )
              *((_QWORD *)i + 319) = 0LL;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v7);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion(v9);
          }
          if ( v4 == (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList )
          {
            gpGraphicsDeviceList = v6;
          }
          else if ( v3 )
          {
            *((_QWORD *)v3 + 16) = v6;
          }
          if ( v4 == gpGraphicsDeviceListLast )
            gpGraphicsDeviceListLast = v3;
          if ( (*((_DWORD *)v4 + 40) & 0x800000) != 0 )
          {
            v10 = qword_1C0296A08;
            OPM::CMutex::Lock((void **)qword_1C0296A08 + 7);
            OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
              (__int64)v10 + 24,
              (_DWORD *)v4 + 62,
              (__int64)v10 + 48);
            v11 = (struct _KMUTANT *)*((_QWORD *)v10 + 7);
            if ( v11 )
              KeReleaseMutex(v11, 0);
            DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v4 + 248));
          }
          DrvCleanupOneGraphicsDevice(v4);
          a1 = v13;
          v4 = v3;
        }
        v3 = v4;
        v4 = (struct tagGRAPHICS_DEVICE *)v6;
      }
      while ( v6 );
      v2 = v14;
    }
    if ( (v1 & 1) != 0 )
    {
      gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
      result = gpGraphicsDeviceListLast;
      gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    }
    else
    {
      gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
      result = gpGraphicsDeviceListLast;
      gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    }
    ++v1;
  }
  while ( v1 < v2 );
  return result;
}
