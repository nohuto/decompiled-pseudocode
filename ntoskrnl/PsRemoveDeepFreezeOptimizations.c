/*
 * XREFs of PsRemoveDeepFreezeOptimizations @ 0x14067CDE8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PsRemoveDeepFreezeOptimizations(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  int ProcessSessionId; // [rsp+38h] [rbp+10h] BYREF

  result = *a2;
  if ( (result & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      return PsInvokeWin32Callout(45LL, a1, 0LL, &ProcessSessionId);
    }
  }
  return result;
}
