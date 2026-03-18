/*
 * XREFs of PopPowerRequestStatsCreate @ 0x1407F0070
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     PopPowerRequestStatsCleanup @ 0x1407F015C (PopPowerRequestStatsCleanup.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407F0C38 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsFreeId @ 0x1407F10C4 (PopPowerRequestStatsFreeId.c)
 *     PopPowerRequestStatsGetIdForBlocker @ 0x1407F10FC (PopPowerRequestStatsGetIdForBlocker.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407F1308 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 */

__int64 __fastcall PopPowerRequestStatsCreate(__int64 a1)
{
  _DWORD *inserted; // rax
  __int64 v3; // rdx
  __int128 Buffer; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+58h] [rbp+18h] BYREF

  Buffer = 0LL;
  v6 = 0LL;
  if ( PopPowerRequestSleepstudyHandle && (int)PopPowerRequestStatsGetIdForRequest(a1, (char *)&Buffer + 8) >= 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestStatsLock);
    inserted = RtlLookupElementGenericTableAvl(&PopPowerRequestStatsDatabase, &Buffer);
    if ( !inserted )
    {
      if ( (int)PopPowerRequestStatsCreateSleepstudyBlocker(*((_QWORD *)&Buffer + 1), v3, &v6) < 0 )
        goto LABEL_6;
      PopPowerRequestStatsFreeId(*((PVOID *)&Buffer + 1));
      *((_QWORD *)&Buffer + 1) = 0LL;
      if ( (int)PopPowerRequestStatsGetIdForBlocker(v6, (char *)&Buffer + 8) < 0 )
        goto LABEL_6;
      LODWORD(Buffer) = 1;
      inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestStatsDatabase, &Buffer, 0x18u, &NewElement);
      if ( !inserted )
      {
LABEL_5:
        *(_QWORD *)(a1 + 160) = inserted;
LABEL_6:
        PopReleaseRwLock((ULONG_PTR)&PopPowerRequestStatsLock);
        return PopPowerRequestStatsCleanup(&Buffer);
      }
      Buffer = 0LL;
      v6 = 0LL;
    }
    ++*inserted;
    goto LABEL_5;
  }
  return PopPowerRequestStatsCleanup(&Buffer);
}
