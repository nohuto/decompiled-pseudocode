/*
 * XREFs of GreUnlockVisRgn @ 0x1C00795D0
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001F834 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C003BFDC (UserGetMonitorDC.c)
 *     DelayedDestroyCacheDC @ 0x1C003D924 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     NtUserGetDC @ 0x1C003EFA0 (NtUserGetDC.c)
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C007944C (DestroyCacheDCEntries.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     DestroyMonitorDCs @ 0x1C00D0790 (DestroyMonitorDCs.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreUnlockVisRgn(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // r8d
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // r8d
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 result; // rax
  int v17; // r8d
  __int64 v18; // rcx
  struct _ERESOURCE *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v2 = v1[11];
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v4, (unsigned int)&LockRelease, v5, v2, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  v6 = (struct _ERESOURCE *)v1[11];
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion(v8, v7);
  }
  v9 = v1[15];
  v10 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  if ( *(_DWORD *)(v10 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v10, (unsigned int)&LockRelease, v11, v9, (__int64)L"GreBaseGlobals.hsemGreLock");
  v12 = (struct _ERESOURCE *)v1[15];
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v14, v13);
  }
  v15 = v1[10];
  result = SGDGetSessionState(v12);
  v18 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v18 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v18,
               (unsigned int)&LockRelease,
               v17,
               v15,
               (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v19 = (struct _ERESOURCE *)v1[10];
  if ( v19 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v19);
    return PsLeavePriorityRegion(v21, v20);
  }
  return result;
}
