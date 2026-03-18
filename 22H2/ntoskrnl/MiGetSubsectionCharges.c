/*
 * XREFs of MiGetSubsectionCharges @ 0x14066B218
 * Callers:
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140288C80 (MiReferenceActiveSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x140365844 (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x140706884 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x140748518 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x140659FE8 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B3C4 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  char v4; // bp
  void *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(void **)(qword_140C674C8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges((__int64)v5, 0, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((unsigned __int64)v5, a2, 0LL) )
    {
      v7 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges((__int64)v5, 0, v4, a2);
      return v7;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2);
      v7 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
