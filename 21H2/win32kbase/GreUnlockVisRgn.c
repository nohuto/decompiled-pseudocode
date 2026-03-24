/*
 * XREFs of GreUnlockVisRgn @ 0x1C0038AB0
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C000737C (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0007448 (DestroyCacheDCEntries.c)
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00106D8 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0010790 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0010D28 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     UserGetMonitorDC @ 0x1C00211C8 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C00356D0 (NtUserGetDC.c)
 *     ReleaseCacheDC @ 0x1C00366B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     xxxUserProcessCallout @ 0x1C003BE30 (xxxUserProcessCallout.c)
 *     InitUserScreen @ 0x1C006A78C (InitUserScreen.c)
 *     xxxEnumDisplayMonitors @ 0x1C006FE90 (xxxEnumDisplayMonitors.c)
 *     DestroyMonitorDCs @ 0x1C00C3150 (DestroyMonitorDCs.c)
 *     GreRestoreDCInternal @ 0x1C00CC090 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CA60 (McTemplateK0pz_EtwWriteTransfer.c)
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
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
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
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
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
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
