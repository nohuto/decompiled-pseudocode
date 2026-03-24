/*
 * XREFs of MiDecrementCombinedPte @ 0x140366814
 * Callers:
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiDereferenceCombineBlock @ 0x1403698B0 (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x140726CE0 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x1407279FC (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140366798 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x14036B080 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x14055D014 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D08C (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rsi
  unsigned int v5; // edi

  v3 = *(_QWORD *)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v4 = *(_QWORD *)v3;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 392), 0xFFFFFFFF);
  v5 = 0;
  if ( a1
    && *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v4
    && !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) )
  {
    MiReturnCrossPartitionCombineCharges(v4, 1LL);
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 - 16)) )
    return 2LL;
  if ( *(_QWORD *)(a2 - 24) )
  {
    v5 = MiDeleteMergedPte(v4, a2);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
  }
  MiFreeCombineBlock(a2 - 48);
  return v5;
}
