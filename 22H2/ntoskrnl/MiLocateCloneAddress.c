/*
 * XREFs of MiLocateCloneAddress @ 0x140294478
 * Callers:
 *     MiGetPfnProtection @ 0x1402160D4 (MiGetPfnProtection.c)
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiProbeLeafPteAccess @ 0x140236C30 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiGetPageProtection @ 0x140272900 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiActOnPte @ 0x140293FB4 (MiActOnPte.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiTrimThisWsle @ 0x1402E27D8 (MiTrimThisWsle.c)
 *     MiComputePageCommitment @ 0x1402E4AB0 (MiComputePageCommitment.c)
 *     MiQueryLeafPte @ 0x140331710 (MiQueryLeafPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617CA0 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CAD4 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x14064D344 (MiMakeProtoPrivate.c)
 *     MiClonePteReadonly @ 0x140663294 (MiClonePteReadonly.c)
 *     MiReferenceExistingCloneProto @ 0x14066541C (MiReferenceExistingCloneProto.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 1264);
  if ( !result )
    return 0LL;
  do
  {
    if ( a2 <= result[4] )
    {
      if ( a2 >= result[3] )
        break;
      result = (_QWORD *)*result;
    }
    else
    {
      result = (_QWORD *)result[1];
    }
  }
  while ( result );
  if ( !result || !result[6] )
    return 0LL;
  return result;
}
