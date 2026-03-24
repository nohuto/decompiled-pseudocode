/*
 * XREFs of GreLockVisRgn @ 0x1C0038CD0
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C000737C (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0007448 (DestroyCacheDCEntries.c)
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00106D8 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0010790 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0010D28 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     UserGetMonitorDC @ 0x1C00211C8 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C00356D0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0038E80 (GreLockVisRgnSharedOrExclusive.c)
 *     xxxUserProcessCallout @ 0x1C003BE30 (xxxUserProcessCallout.c)
 *     InitUserScreen @ 0x1C006A78C (InitUserScreen.c)
 *     xxxEnumDisplayMonitors @ 0x1C006FE90 (xxxEnumDisplayMonitors.c)
 *     DestroyMonitorDCs @ 0x1C00C3150 (DestroyMonitorDCs.c)
 *     GreRestoreDCInternal @ 0x1C00CC090 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014C9A8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CA60 (McTemplateK0pz_EtwWriteTransfer.c)
 */

PVOID __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  HSEMAPHORE v3; // rcx
  PVOID result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = (PVOID)ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pz_EtwWriteTransfer(
                      (_DWORD)v3,
                      (unsigned int)&LockAcquireShared,
                      a3,
                      (_DWORD)ghsemDynamicModeChange,
                      (__int64)L"ghsemDynamicModeChange");
  v5 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v3);
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pqz_EtwWriteTransfer(
                      (_DWORD)v3,
                      a2,
                      a3,
                      (_DWORD)ghsemGreLock,
                      2,
                      (__int64)L"ghsemGreLock");
  v6 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v3);
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return (PVOID)McTemplateK0pqz_EtwWriteTransfer(
                      (_DWORD)v3,
                      a2,
                      a3,
                      (_DWORD)ghsemDCVisRgn,
                      3,
                      (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
