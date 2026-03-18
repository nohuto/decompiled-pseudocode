/*
 * XREFs of GreUnlockVisRgn @ 0x1C002E140
 * Callers:
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
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
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreUnlockVisRgn(int a1, __int64 a2, int a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               a1,
               (unsigned int)&LockRelease,
               a3,
               (_DWORD)ghsemDCVisRgn,
               (__int64)L"ghsemDCVisRgn");
  v3 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v3,
               (unsigned int)&LockRelease,
               a3,
               (_DWORD)ghsemGreLock,
               (__int64)L"ghsemGreLock");
  v5 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v5,
               (unsigned int)&LockRelease,
               a3,
               (_DWORD)ghsemDynamicModeChange,
               (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
