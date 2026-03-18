/*
 * XREFs of GreLockVisRgn @ 0x1C002DE80
 * Callers:
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00302D0 (GreLockVisRgnSharedOrExclusive.c)
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 *     DelayedDestroyCacheDC @ 0x1C005197C (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0051A48 (DestroyCacheDCEntries.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     DestroyMonitorDCs @ 0x1C005D530 (DestroyMonitorDCs.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     UserGetMonitorDC @ 0x1C0071A64 (UserGetMonitorDC.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0075534 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

PVOID __fastcall GreLockVisRgn(__int64 a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rcx
  PVOID result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = (PVOID)ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pz_EtwWriteTransfer(
                      (_DWORD)v3,
                      (unsigned int)&LockAcquireShared,
                      a3,
                      (_DWORD)ghsemDynamicModeChange,
                      (__int64)L"ghsemDynamicModeChange");
  v5 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v3, a2, a3);
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
  v6 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v3, a2, a3);
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
