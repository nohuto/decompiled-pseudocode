/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C02C846C
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0187BE8 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CABB0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001FC54 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C012E510 (DxgkAcquireAdapterCoreSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C020D72C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C0217D40 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C0218260 (DxgkReleaseAdapterStopResetSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall *v8)(__int64, __int128 *, __int64, __int64); // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax

  if ( qword_1C00B2DC0 )
  {
    v5 = *(_QWORD *)(qword_1C00B2DC0 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
    if ( *(_QWORD *)(v5 + 3896) )
    {
      v8 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(v5 + 984);
      v9 = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v5 + 5704) = a1;
      LOBYTE(v7) = byte_1C00B2B1C;
      LOBYTE(v6) = dword_1C00B2E68 == 1;
      v8(v9, &xmmword_1C00B2DC8, v6, v7);
      *(_QWORD *)(v5 + 5704) = 0LL;
      byte_1C00B2B1C = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v5 + 3896), v10);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3896), 2, v11);
      LOBYTE(v12) = 1;
      DXGADAPTER::EnableMsBddFallback(*(PERESOURCE ****)(v5 + 3896), v12);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3896), 2u, v13);
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v5 + 3896), v14);
      v15 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2744), 1u);
      v18 = v15;
      if ( v15 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v19 + 24) = v18;
        WdLogEvent5_WdError(v19);
      }
      xmmword_1C00B2DD8 = 0LL;
      DWORD2(xmmword_1C00B2DD8) = -1;
      xmmword_1C00B2DC8 = 0LL;
      memset(&xmmword_1C00B2DE8, 0, 0x80uLL);
      qword_1C00B2DB8 = qword_1C00B2DC0;
      dword_1C00B2E68 = 4;
      Global = DXGGLOBAL::GetGlobal(v21, v20);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL);
    }
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v3);
    return 3221225659LL;
  }
}
