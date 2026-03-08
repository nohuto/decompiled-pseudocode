/*
 * XREFs of MiLocateCloneAddress @ 0x1402CF530
 * Callers:
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiGetPfnProtection @ 0x140229E5C (MiGetPfnProtection.c)
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiGetPageProtection @ 0x14031C310 (MiGetPageProtection.c)
 *     MiQueryLeafPte @ 0x14031D370 (MiQueryLeafPte.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiComputePageCommitment @ 0x140345CE0 (MiComputePageCommitment.c)
 *     MiTrimThisWsle @ 0x1403493EC (MiTrimThisWsle.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406157F0 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiMakeProtoPrivate @ 0x14064AD28 (MiMakeProtoPrivate.c)
 *     MiClonePteReadonly @ 0x140660C44 (MiClonePteReadonly.c)
 *     MiReferenceExistingCloneProto @ 0x140662DCC (MiReferenceExistingCloneProto.c)
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
