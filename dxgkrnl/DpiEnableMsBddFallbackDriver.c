/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C0395EF8
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0209A10 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C017586C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01801F4 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0180708 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02B26A4 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C02BD71C (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02BE3A8 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  void (__fastcall *v6)(__int64, __int128 *, __int64, __int64); // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // r8
  __int64 v14; // r9

  if ( qword_1C013B748 )
  {
    v3 = *(_QWORD *)(qword_1C013B748 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_QWORD *)(v3 + 3912) )
    {
      v6 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(v3 + 984);
      v7 = *(_QWORD *)(v3 + 48);
      *(_QWORD *)(v3 + 5648) = a1;
      LOBYTE(v5) = byte_1C013B49B;
      LOBYTE(v4) = dword_1C013B7F0 == 1;
      v6(v7, &xmmword_1C013B750, v4, v5);
      *(_QWORD *)(v3 + 5648) = 0LL;
      byte_1C013B49B = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 3912), 1);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 3912), 2, v8);
      DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v3 + 3912), 1);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 3912), 2u, v9);
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 3912), 1);
      v10 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2744), 1u);
      if ( v10 < 0 )
        WdLogSingleEntry1(2LL, v10);
      if ( *(_QWORD *)(v3 + 2768) )
      {
        v11 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2760), 1u);
        if ( v11 < 0 )
          WdLogSingleEntry1(2LL, v11);
      }
      xmmword_1C013B760 = 0LL;
      DWORD2(xmmword_1C013B760) = -1;
      xmmword_1C013B750 = 0LL;
      memset(&xmmword_1C013B770, 0, 0x80uLL);
      qword_1C013B740 = qword_1C013B748;
      dword_1C013B7F0 = 4;
      Global = DXGGLOBAL::GetGlobal();
      QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v13, v14);
    }
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
