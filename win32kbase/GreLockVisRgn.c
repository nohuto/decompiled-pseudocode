/*
 * XREFs of GreLockVisRgn @ 0x1C00794E0
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001F834 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C003BFDC (UserGetMonitorDC.c)
 *     DelayedDestroyCacheDC @ 0x1C003D924 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     NtUserGetDC @ 0x1C003EFA0 (NtUserGetDC.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C007944C (DestroyCacheDCEntries.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     DestroyMonitorDCs @ 0x1C00D0790 (DestroyMonitorDCs.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0197440 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // r8d
  struct _ERESOURCE *v6; // rdi
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  struct _ERESOURCE *v11; // rdi
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rcx

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v2 = v1[10];
  if ( v2 )
    ExEnterPriorityRegionAndAcquireResourceShared(v2);
  v3 = v1[10];
  v4 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v4,
      (unsigned int)&LockAcquireShared,
      v5,
      v3,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v6 = (struct _ERESOURCE *)v1[15];
  if ( v6 )
  {
    PsEnterPriorityRegion(v4);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  v7 = v1[15];
  v9 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  if ( *(_DWORD *)(v9 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v9, v8, v10, v7, 2, (__int64)L"GreBaseGlobals.hsemGreLock");
  v11 = (struct _ERESOURCE *)v1[11];
  if ( v11 )
  {
    PsEnterPriorityRegion(v9);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v11);
  }
  v12 = v1[11];
  result = SGDGetSessionState(v9);
  v16 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v16 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v16, v14, v15, v12, 3, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  }
  return result;
}
