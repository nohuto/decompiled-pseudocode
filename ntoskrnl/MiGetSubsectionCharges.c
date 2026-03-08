/*
 * XREFs of MiGetSubsectionCharges @ 0x140668BC8
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x1402A4BE0 (MiUpdateLastSubsectionSize.c)
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1407F1988 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1406579B0 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x140658D80 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  char v4; // bp
  void *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi
  __int64 v8; // r8

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(void **)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
        MiReturnCommit((__int64)v5, a2, v8);
      v7 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
