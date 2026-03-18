/*
 * XREFs of GreUnlockVisRgn @ 0x1C0051170
 * Callers:
 *     DestroyMonitorDCs @ 0x1C00122F0 (DestroyMonitorDCs.c)
 *     GreSuspendDirectDraw @ 0x1C001C510 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001CB24 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 *     NtUserGetDC @ 0x1C004D400 (NtUserGetDC.c)
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C0050FE8 (DestroyCacheDCEntries.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     DelayedDestroyCacheDC @ 0x1C00A065C (DelayedDestroyCacheDC.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreUnlockVisRgn(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // r8d
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r8d
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rdi
  __int64 result; // rax
  int v13; // r8d
  __int64 v14; // rcx
  struct _ERESOURCE *v15; // rcx

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v2 = v1[11];
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v4, (unsigned int)&LockRelease, v5, v2, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  v6 = (struct _ERESOURCE *)v1[11];
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion();
  }
  v7 = v1[15];
  v8 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  if ( *(_DWORD *)(v8 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v8, (unsigned int)&LockRelease, v9, v7, (__int64)L"GreBaseGlobals.hsemGreLock");
  v10 = (struct _ERESOURCE *)v1[15];
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion();
  }
  v11 = v1[10];
  result = SGDGetSessionState(v10);
  v14 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v14 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v14,
               (unsigned int)&LockRelease,
               v13,
               v11,
               (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v15 = (struct _ERESOURCE *)v1[10];
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    return PsLeavePriorityRegion();
  }
  return result;
}
