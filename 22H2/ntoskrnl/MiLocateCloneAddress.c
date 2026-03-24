/*
 * XREFs of MiLocateCloneAddress @ 0x14023E878
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6B0 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiSharedVaToPartition @ 0x140240DBC (MiSharedVaToPartition.c)
 *     MiTrimThisWsle @ 0x140289420 (MiTrimThisWsle.c)
 *     MiComputePageCommitment @ 0x14028D1E0 (MiComputePageCommitment.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiWsleFlush @ 0x1402A7B80 (MiWsleFlush.c)
 *     MiGetPageProtection @ 0x1402B1430 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiGetPfnProtection @ 0x140339C98 (MiGetPfnProtection.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B04C (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x140530CD4 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x140547924 (MiMakeProtoPrivate.c)
 *     MiReferenceCloneProto @ 0x14055B4D8 (MiReferenceCloneProto.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 1264);
  while ( result )
  {
    if ( a2 > result[4] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a2 >= result[3] )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return 0LL;
}
