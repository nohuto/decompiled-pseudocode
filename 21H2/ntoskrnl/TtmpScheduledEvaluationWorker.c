/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x1409A3B80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     TtmiSetTerminalPendingEvaluation @ 0x1409A36FC (TtmiSetTerminalPendingEvaluation.c)
 *     TtmiAcquireTerminalSession @ 0x1409A4BF0 (TtmiAcquireTerminalSession.c)
 *     TtmiReleaseSession @ 0x1409A4D48 (TtmiReleaseSession.c)
 */

LONG_PTR __fastcall TtmpScheduledEvaluationWorker(volatile __int32 *Object)
{
  LONG_PTR result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = (unsigned int)_InterlockedExchange(Object + 62, 0);
  if ( (_DWORD)result )
  {
    TtmiAcquireTerminalSession(&v3, Object);
    if ( v3 )
    {
      if ( (Object[9] & 3) == 0 )
        TtmiSetTerminalPendingEvaluation(v3, (__int64)Object);
    }
    TtmiReleaseSession(&v3);
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
