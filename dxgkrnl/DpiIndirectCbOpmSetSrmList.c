/*
 * XREFs of DpiIndirectCbOpmSetSrmList @ 0x1C0064390
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01E7088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01E70A8 (DxgkAcquireAdapterDdiSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C01F7F00 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C02205EE (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C02206C8 (DxgkReleaseAdapterOpmI2CSync.c)
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
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
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
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
    return 3221226021LL;
  }
}
