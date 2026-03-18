/*
 * XREFs of DpiIndirectCbOpmSetSrmList @ 0x1C0064FB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0015C20 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01F59A8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01F59C8 (DxgkAcquireAdapterDdiSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C02067B0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C022EB94 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C022EC6E (DxgkReleaseAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiIndirectCbOpmSetSrmList(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 RenderAdapterForSession; // rbx
  unsigned int v7; // esi

  AcquireMiniportListMutex();
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( RenderAdapterForSession )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    _InterlockedExchange64(&qword_1C01404D8, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( *(_DWORD *)(RenderAdapterForSession + 3032) >= 4u )
    {
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3912));
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3912), 1LL);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(RenderAdapterForSession + 3152))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             a2,
             a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3912));
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3912));
    }
    else
    {
      WdLogSingleEntry1(2LL, RenderAdapterForSession);
      v7 = -1073741637;
    }
    if ( *(_BYTE *)(RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    return v7;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    _InterlockedExchange64(&qword_1C01404D8, 0LL);
    KeReleaseMutex(Mutex, 0);
    return 3221226021LL;
  }
}
