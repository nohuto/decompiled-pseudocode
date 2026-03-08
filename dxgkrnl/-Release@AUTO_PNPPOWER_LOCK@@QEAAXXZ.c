/*
 * XREFs of ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0024094
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C01F7F50 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C039F110 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C039F688 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C03A0354 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 */

void __fastcall AUTO_PNPPOWER_LOCK::Release(AUTO_PNPPOWER_LOCK *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 10) )
  {
    v2 = *(_QWORD *)this;
    if ( *(_BYTE *)(v2 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)this + 168LL));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 10) = 0;
  }
}
