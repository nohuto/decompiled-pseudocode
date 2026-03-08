/*
 * XREFs of ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C001D6F8
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C01F7F50 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C039F688 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C03A0354 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AUTO_REMOVE_LOCK::Acquire(struct _IO_REMOVE_LOCK **this)
{
  NTSTATUS result; // eax

  if ( *((_BYTE *)this + 8) )
    return 0;
  result = IoAcquireRemoveLockEx(*this + 2, *this, File, 1u, 0x20u);
  if ( result >= 0 )
    *((_BYTE *)this + 8) = 1;
  return result;
}
