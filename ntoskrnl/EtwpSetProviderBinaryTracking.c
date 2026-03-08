/*
 * XREFs of EtwpSetProviderBinaryTracking @ 0x1409F260C
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x140693F10 (EtwpGetNextGuidEntry.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F2804 (EtwpTrackGuidEntryRegistrations.c)
 */

__int64 __fastcall EtwpSetProviderBinaryTracking(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // ebx
  unsigned int *v6; // rax
  unsigned int *v7; // rdi
  signed __int64 *i; // rdx
  signed __int64 *NextGuidEntry; // rax
  signed __int64 *v10; // rsi
  signed __int64 *j; // rdx
  signed __int64 *v12; // rax
  __int64 v13; // r8
  signed __int64 *v14; // rsi

  v5 = 0;
  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v7 = v6;
  if ( v6 )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)v6 + 204, 0x2000000u);
      for ( i = 0LL; ; i = v10 )
      {
        NextGuidEntry = EtwpGetNextGuidEntry(a1, i, 0);
        v10 = NextGuidEntry;
        if ( !NextGuidEntry )
          break;
        EtwpTrackGuidEntryRegistrations(v7, NextGuidEntry, 0LL);
      }
      for ( j = 0LL; ; j = v14 )
      {
        v12 = EtwpGetNextGuidEntry(a1, j, 2);
        v14 = v12;
        if ( !v12 )
          break;
        LOBYTE(v13) = 2;
        EtwpTrackGuidEntryRegistrations(v7, v12, v13);
      }
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)v6 + 204, 0xFDFFFFFF);
    }
    EtwpReleaseLoggerContext(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
