/*
 * XREFs of ?EthDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C0064D74
 * Callers:
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EE78 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C0038F10 (NdisFreeRWLock.c)
 */

void __fastcall EthDeleteFilter(PVOID *P)
{
  struct _NDIS_RW_LOCK_EX *v2; // rcx

  if ( *((_DWORD *)P + 86) )
  {
    ExFreePoolWithTag(P[47], 0);
    ExFreePoolWithTag(P[49], 0);
    ExFreePoolWithTag(P[44], 0);
    ExFreePoolWithTag(P[45], 0);
  }
  v2 = (struct _NDIS_RW_LOCK_EX *)P[36];
  if ( v2 )
    NdisFreeRWLock(v2);
  ExFreePoolWithTag(P, 0);
}
