/*
 * XREFs of GreLockVisRgn @ 0x1C0051080
 * Callers:
 *     DestroyMonitorDCs @ 0x1C00122F0 (DestroyMonitorDCs.c)
 *     GreSuspendDirectDraw @ 0x1C001C510 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001CB24 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     NtUserGetDC @ 0x1C004D400 (NtUserGetDC.c)
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C0050FE8 (DestroyCacheDCEntries.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     DelayedDestroyCacheDC @ 0x1C00A065C (DelayedDestroyCacheDC.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C016A640 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BC08 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  struct _ERESOURCE *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  struct _ERESOURCE *v12; // rdi
  __int64 v13; // rbx
  __int64 result; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v2 = v1[10];
  if ( v2 )
    ExEnterPriorityRegionAndAcquireResourceShared(v2);
  v3 = v1[10];
  v5 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  if ( *(_DWORD *)(v5 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v5,
      (unsigned int)&LockAcquireShared,
      v6,
      v3,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v7 = (struct _ERESOURCE *)v1[15];
  if ( v7 )
  {
    PsEnterPriorityRegion(v5, v4);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = v1[15];
  v10 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  if ( *(_DWORD *)(v10 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v10, v9, v11, v8, 2, (__int64)L"GreBaseGlobals.hsemGreLock");
  v12 = (struct _ERESOURCE *)v1[11];
  if ( v12 )
  {
    PsEnterPriorityRegion(v10, v9);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v12);
  }
  v13 = v1[11];
  result = SGDGetSessionState(v10);
  v17 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v17 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v17, v15, v16, v13, 3, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  }
  return result;
}
