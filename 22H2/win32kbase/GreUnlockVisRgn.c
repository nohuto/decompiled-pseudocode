/*
 * XREFs of GreUnlockVisRgn @ 0x1C0039F20
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C00087FC (DelayedDestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C00088C8 (DestroyCacheDCEntries.c)
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0011B48 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0011C00 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0012198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     UserGetMonitorDC @ 0x1C0022638 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C0036B40 (NtUserGetDC.c)
 *     ReleaseCacheDC @ 0x1C0037B20 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     xxxUserProcessCallout @ 0x1C003D2A0 (xxxUserProcessCallout.c)
 *     InitUserScreen @ 0x1C006B23C (InitUserScreen.c)
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 *     DestroyMonitorDCs @ 0x1C00C34E0 (DestroyMonitorDCs.c)
 *     GreRestoreDCInternal @ 0x1C00CC1F0 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CD50 (McTemplateK0pz_EtwWriteTransfer.c)
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
