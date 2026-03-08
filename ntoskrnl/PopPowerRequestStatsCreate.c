/*
 * XREFs of PopPowerRequestStatsCreate @ 0x14073C194
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140726450 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     PopPowerRequestStatsCleanup @ 0x14073C280 (PopPowerRequestStatsCleanup.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x14073C3F4 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsGetIdForBlocker @ 0x140798C04 (PopPowerRequestStatsGetIdForBlocker.c)
 *     PopPowerRequestStatsFreeId @ 0x14079B420 (PopPowerRequestStatsFreeId.c)
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
      if ( (int)PopPowerRequestStatsCreateSleepstudyBlocker(*((__int64 *)&Buffer + 1), v4, &v6) < 0 )
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
        PopReleaseRwLock((ULONG_PTR)&PopPowerRequestStatsLock);
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
