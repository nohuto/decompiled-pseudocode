/*
 * XREFs of ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C00AD020
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMRawInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0070DDC (-ndisMRawInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 */

void __fastcall ndisMpHookInvokeCancelOidRequestHandler(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  ndisMRawInvokeCancelOidRequest(a1, a2);
}
