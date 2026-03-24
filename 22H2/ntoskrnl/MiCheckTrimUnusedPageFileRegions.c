/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x14033C19C
 * Callers:
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     ExQueueWorkItemToPartition @ 0x140277F2C (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 *     MiNumberWsSwapPagefiles @ 0x14033C238 (MiNumberWsSwapPagefiles.c)
 */

char MiCheckTrimUnusedPageFileRegions()
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v1; // r11
  __int64 v2; // r11
  __int64 *v3; // r11
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  LODWORD(UnbiasedInterruptTime) = MiNumberWsSwapPagefiles();
  if ( (_DWORD)UnbiasedInterruptTime )
  {
    if ( !*(_QWORD *)(v1 + 1072) )
    {
      _InterlockedOr(v5, 0);
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(v2 + 1080)) >= 0x861C46800LL )
      {
        if ( byte_140C4E6C1 )
        {
          UnbiasedInterruptTime -= 33000000000LL;
          *(_QWORD *)(v2 + 1080) = UnbiasedInterruptTime;
        }
        else
        {
          LOBYTE(UnbiasedInterruptTime) = PsReferencePartitionSafe(*(_QWORD *)(v2 + 176));
          if ( (_BYTE)UnbiasedInterruptTime )
          {
            v3[131] = 0LL;
            v3[133] = (__int64)MiTrimUnusedPageFileRegionsWorker;
            v3[134] = (__int64)v3;
            LOBYTE(UnbiasedInterruptTime) = ExQueueWorkItemToPartition(v3 + 131, 3, 0xFFFFFFFF, v3[22]);
          }
        }
      }
    }
  }
  return UnbiasedInterruptTime;
}
