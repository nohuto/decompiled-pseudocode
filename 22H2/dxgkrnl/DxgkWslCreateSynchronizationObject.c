/*
 * XREFs of DxgkWslCreateSynchronizationObject @ 0x1C0354740
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C01A5B7C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

__int64 __fastcall DxgkWslCreateSynchronizationObject(ULONG64 a1, UINT64 a2)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 1u, 1LL, 0LL, a2);
}
