/*
 * XREFs of DpiIndicateConnectorChangeWorkItem @ 0x1C01E6B80
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0352264 (DxgkWaitForPnPTransitionDone.c)
 */

void __fastcall DpiIndicateConnectorChangeWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  NTSTATUS v6; // eax
  unsigned int v7; // ebx

  v3 = IoObject[8];
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, File, 1u, 0x20u);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
  }
  else
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_BYTE *)(v3 + 1159) )
    {
      if ( !*(_BYTE *)(v3 + 2743) )
      {
        v7 = *(_DWORD *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 118) + 144LL);
        if ( v7 != -1 )
        {
          if ( *(_BYTE *)(v3 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
          KeLeaveCriticalRegion();
          DxgkWaitForPnPTransitionDone(0LL, 0LL, v7, 1LL);
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v3 + 484) )
            DpiCheckForOutstandingD3Requests(v3);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
        }
      }
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3320), 1u);
    DxgkQueryConnectionChanges((__int64)IoObject, 0, 0, 0, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 3320));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
  }
  IoFreeWorkItem(IoWorkItem);
}
