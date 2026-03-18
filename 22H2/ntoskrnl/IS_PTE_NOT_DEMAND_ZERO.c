/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14033E8C4
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14026A260 (MiResolvePrivateZeroFault.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiActOnPte @ 0x140293FB4 (MiActOnPte.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiAbandonPrivatePfn @ 0x1402ED0F4 (MiAbandonPrivatePfn.c)
 *     MiPrefetchJumpVad @ 0x140632048 (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiGetClusterPage @ 0x14066A064 (MiGetClusterPage.c)
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C65C40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C65C40;
  if ( (a1 & 0x400) != 0 || (a1 & 0x800) != 0 )
    return 1LL;
  else
    return (a1 >> 2) & 1;
}
