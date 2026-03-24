/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14023BA1C
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402100E0 (MiResolvePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x14053940C (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1405558B0 (MiGetClusterPage.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x14063CE30 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MiAllocatePerSessionProtos @ 0x14069F848 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C4DF40 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140C4DF40;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}
