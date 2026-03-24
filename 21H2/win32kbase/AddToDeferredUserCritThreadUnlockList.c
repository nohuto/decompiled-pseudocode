/*
 * XREFs of AddToDeferredUserCritThreadUnlockList @ 0x1C0113B88
 * Callers:
 *     ThreadUnlock1 @ 0x1C002E4A0 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0045640 (HMUnlockObjectInternal.c)
 *     HMUnlockObjectWorker @ 0x1C0045770 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C007DE70 (ThreadUnlockWorker1.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C00456A8 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00456E0 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
