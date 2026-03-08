/*
 * XREFs of ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01DB1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C018768C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

__int64 __fastcall DxgkCddCreateSynchronizationObject(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1)
{
  if ( a1->Info.Type == D3DDDI_MONITORED_FENCE )
    a1->Info.Flags.Value |= 0x80u;
  return DxgkCreateSynchronizationObjectImpl((ULONG64)a1, 0xFu, 0LL, 0LL, 0LL);
}
