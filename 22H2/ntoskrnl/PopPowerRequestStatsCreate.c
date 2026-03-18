/*
 * XREFs of PopPowerRequestStatsCreate @ 0x1407A7CEC
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022CF30 (RtlLookupElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14031EA50 (RtlInsertElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestStatsCleanup @ 0x1407A7DD8 (PopPowerRequestStatsCleanup.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A8268 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407A8594 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     PopPowerRequestStatsGetIdForBlocker @ 0x1407A8920 (PopPowerRequestStatsGetIdForBlocker.c)
 *     PopPowerRequestStatsFreeId @ 0x1407A8AB4 (PopPowerRequestStatsFreeId.c)
 */

__int64 __fastcall PopPowerRequestStatsCreate(__int64 a1)
{
  _DWORD *inserted; // rax
  __int64 v4; // rdx
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
      if ( (int)PopPowerRequestStatsCreateSleepstudyBlocker(*((_QWORD *)&Buffer + 1), v4, &v6) < 0 )
        goto LABEL_11;
      PopPowerRequestStatsFreeId(*((PVOID *)&Buffer + 1));
      *((_QWORD *)&Buffer + 1) = 0LL;
      if ( (int)PopPowerRequestStatsGetIdForBlocker(v6, (char *)&Buffer + 8) < 0 )
        goto LABEL_11;
      LODWORD(Buffer) = 1;
      inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestStatsDatabase, &Buffer, 0x18u, &NewElement);
      if ( !inserted )
      {
LABEL_10:
        *(_QWORD *)(a1 + 160) = inserted;
LABEL_11:
        PopReleaseRwLock(&PopPowerRequestStatsLock);
        return PopPowerRequestStatsCleanup(&Buffer);
      }
      Buffer = 0LL;
      v6 = 0LL;
    }
    ++*inserted;
    goto LABEL_10;
  }
  return PopPowerRequestStatsCleanup(&Buffer);
}
