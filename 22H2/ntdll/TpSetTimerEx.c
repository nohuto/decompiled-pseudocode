/*
 * XREFs of TpSetTimerEx @ 0x1800126D0
 * Callers:
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180009D50 (RtlCreateTimer.c)
 *     TpSetTimer @ 0x1800122A0 (TpSetTimer.c)
 *     RtlpHpScheduleCompaction @ 0x180022DF8 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlUpdateTimer @ 0x1800823D0 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x18008B6D0 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     TpIsTimerSet @ 0x180012000 (TpIsTimerSet.c)
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     TppSetTimer @ 0x1800139EC (TppSetTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  unsigned int v11; // esi

  if ( (unsigned int)TppTimerpValidateTimer(a1, 0LL, a2 != 0) )
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = a2 != 0;
    RtlAcquireSRWLockExclusive(a1 + 240);
    LOBYTE(v10) = a2 != 0;
    v11 = (unsigned __int8)TppCancelTimer(a1, v8 + 112, v10);
    if ( a2 && *(_BYTE *)(a1 + 355) )
    {
      RtlReleaseSRWLockExclusive(a1 + 240);
      v9 = 0;
    }
    if ( !(_BYTE)v11 )
    {
      if ( !v9 )
        return v11;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_9:
        RtlReleaseSRWLockExclusive(a1 + 240);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    if ( !v9 )
    {
      if ( (_BYTE)v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      }
      return v11;
    }
    TppSetTimer(a1, v8 + 112, a2, a3, a4);
    goto LABEL_9;
  }
  return 0LL;
}
