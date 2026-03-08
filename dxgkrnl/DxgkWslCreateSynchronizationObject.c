/*
 * XREFs of DxgkWslCreateSynchronizationObject @ 0x1C034FCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C018768C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

__int64 __fastcall DxgkWslCreateSynchronizationObject(ULONG64 a1, UINT64 a2)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 1u, 1LL, 0LL, a2);
}
