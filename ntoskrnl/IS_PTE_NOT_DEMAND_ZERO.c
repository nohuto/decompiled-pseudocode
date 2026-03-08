/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1402CF5DC
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14026BD60 (MiResolvePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiAbandonPrivatePfn @ 0x14029D7BC (MiAbandonPrivatePfn.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiPrefetchJumpVad @ 0x14062FBB8 (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiGetClusterPage @ 0x140667A14 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C657C0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C657C0;
  if ( (a1 & 0x400) != 0 || (a1 & 0x800) != 0 )
    return 1LL;
  else
    return (a1 >> 2) & 1;
}
