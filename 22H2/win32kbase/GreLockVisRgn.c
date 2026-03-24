/*
 * XREFs of GreLockVisRgn @ 0x1C003A140
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C00087FC (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C00088C8 (DestroyCacheDCEntries.c)
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0011B48 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0011C00 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0012198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     UserGetMonitorDC @ 0x1C0022638 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C0036B40 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C003A2F0 (GreLockVisRgnSharedOrExclusive.c)
 *     xxxUserProcessCallout @ 0x1C003D2A0 (xxxUserProcessCallout.c)
 *     InitUserScreen @ 0x1C006B23C (InitUserScreen.c)
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 *     DestroyMonitorDCs @ 0x1C00C34E0 (DestroyMonitorDCs.c)
 *     GreRestoreDCInternal @ 0x1C00CC1F0 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014CC98 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CD50 (McTemplateK0pz_EtwWriteTransfer.c)
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
