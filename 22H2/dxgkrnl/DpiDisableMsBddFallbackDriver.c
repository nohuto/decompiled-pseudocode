/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C039A610
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C02185F0 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0173DFC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0197F10 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01984C8 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02B7564 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C02C263C (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02C32C8 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  void (__fastcall *v8)(__int64, __int128 *); // rax
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // r8
  __int64 v12; // r9

  if ( qword_1C0140748 )
  {
    v3 = *(_QWORD *)(qword_1C0140748 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 3912), 1);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 3912), 2, v4);
    DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v3 + 3912), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 3912), 2u, v5);
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 3912), 1);
    v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2744), 0);
    if ( v6 < 0 )
      WdLogSingleEntry1(2LL, v6);
    if ( *(_QWORD *)(v3 + 2768) )
    {
      v7 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2760), 0);
      if ( v7 < 0 )
        WdLogSingleEntry1(2LL, v7);
    }
    v8 = *(void (__fastcall **)(__int64, __int128 *))(v3 + 992);
    v9 = *(_QWORD *)(v3 + 48);
    *(_QWORD *)(v3 + 5648) = a1;
    v8(v9, &xmmword_1C0140750);
    *(_QWORD *)(v3 + 5648) = 0LL;
    if ( qword_1C0140740 == qword_1C0140748 )
      qword_1C0140740 = 0LL;
    dword_1C01407F0 = 2;
    Global = DXGGLOBAL::GetGlobal();
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v11, v12);
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
}
