/*
 * XREFs of ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4250
 * Callers:
 *     ndisMiniportDpc @ 0x1C0067848 (ndisMiniportDpc.c)
 *     ndisGetMiniportIndicateList @ 0x1C00A370C (ndisGetMiniportIndicateList.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00A3930 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax

  if ( !byte_1C00E50C1 )
    return 0xFFFFFFFFLL;
  if ( dword_1C00E50CC )
    return (unsigned int)dword_1C00E50C4;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)a1->PeriodicReceivesNblCountIndex
                                                                       + (KeGetPcr()->Prcb.Number << 12))];
  if ( dword_1C00E50C4 < (unsigned int)result )
    return (unsigned int)dword_1C00E50C4;
  return result;
}
