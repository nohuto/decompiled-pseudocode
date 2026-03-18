/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14034EF14
 * Callers:
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiReservePageFileSpace @ 0x140284880 (MiReservePageFileSpace.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiAbandonPrivatePfn @ 0x1402ED0F4 (MiAbandonPrivatePfn.c)
 *     MiWriteCompletePfn @ 0x1402F4750 (MiWriteCompletePfn.c)
 *     MiAddToReservationCluster @ 0x14063781C (MiAddToReservationCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx
  __int64 result; // rax

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 17056) + 204LL);
  result = 1LL;
  if ( (v2 & 0x10) == 0 && ((v2 & 0x20) == 0 || (*(_QWORD *)a2 & 2) == 0) )
    return 0LL;
  return result;
}
