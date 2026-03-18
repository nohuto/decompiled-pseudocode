/*
 * XREFs of KiQuerySubNodeActiveAffinity @ 0x140307D4C
 * Callers:
 *     KeQueryNodeActiveAffinity @ 0x140305880 (KeQueryNodeActiveAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140306A28 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryNodeActiveAffinity2 @ 0x14036B530 (KeQueryNodeActiveAffinity2.c)
 *     KeUpdateSoftParkRankList @ 0x14039116C (KeUpdateSoftParkRankList.c)
 *     KeQueryNodeActiveProcessorCount @ 0x1403B3BD0 (KeQueryNodeActiveProcessorCount.c)
 *     KiSynchNumaCounterSetCallback @ 0x140974050 (KiSynchNumaCounterSetCallback.c)
 *     KiConfigureSchedulingInformation @ 0x140A8E7A4 (KiConfigureSchedulingInformation.c)
 *     KiComputeNumaCosts @ 0x140B76CB4 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiQuerySubNodeActiveAffinity(__int64 a1, __int64 a2, _WORD *a3)
{
  _QWORD *v3; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v3 = (_QWORD *)(a1 + 128);
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)a2 = *v3;
    result = *(unsigned __int16 *)(a1 + 136);
    *(_WORD *)(a2 + 8) = result;
  }
  if ( a3 )
  {
    v5 = *v3 - ((*v3 >> 1) & 0x5555555555555555LL);
    result = (0x101010101010101LL
            * (((v5 & 0x3333333333333333LL)
              + ((v5 >> 2) & 0x3333333333333333LL)
              + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    *a3 = result;
  }
  return result;
}
