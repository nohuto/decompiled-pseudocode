/*
 * XREFs of ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001E898
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0174FC4 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02D4C70 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02D5228 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D5F90 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall AUTO_REMOVE_LOCK::Release(PVOID *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*this + 2, *this, 0x20u);
    *((_BYTE *)this + 8) = 0;
  }
}
