/*
 * XREFs of AddToDeferredUserCritThreadUnlockList @ 0x1C0113E58
 * Callers:
 *     ThreadUnlock1 @ 0x1C002F910 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0046AB0 (HMUnlockObjectInternal.c)
 *     HMUnlockObjectWorker @ 0x1C0046BE0 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C007F100 (ThreadUnlockWorker1.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C0046B18 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0046B50 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagKERNELHANDLETABLEENTRY *__fastcall AddToDeferredUserCritThreadUnlockList(__int64 a1)
{
  struct tagKERNELHANDLETABLEENTRY *result; // rax

  if ( !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() && !(unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4260);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4261);
  if ( *(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4263);
  result = gpducstulHead;
  if ( gpducstulHead )
    *(_QWORD *)(a1 + 16) = gpducstulHead;
  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)a1;
  return result;
}
