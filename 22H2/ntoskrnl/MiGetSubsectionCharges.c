/*
 * XREFs of MiGetSubsectionCharges @ 0x140554E08
 * Callers:
 *     MiCreatePrototypePtes @ 0x140278478 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140296380 (MiReferenceActiveSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x1402F9A78 (MiUpdateLastSubsectionSize.c)
 *     MiChargeSegmentCommit @ 0x1406202F0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x140669618 (MiExtendSection.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x140562368 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x140562AD0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  BOOL v4; // ebp
  ULONG_PTR *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int v8; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v5, 0LL, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((__int64)v5, a2, 0) )
    {
      v8 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges(v5, 0LL, v4, a2);
      return v8;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL, v7) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2);
      v8 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
