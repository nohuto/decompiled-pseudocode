/*
 * XREFs of PopIssueNextState @ 0x140AA5CEC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 */

__int64 __fastcall PopIssueNextState(__int64 a1, _DWORD *a2, __int32 a3)
{
  __int64 v4; // r8
  __int64 result; // rax
  int i; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
  v4 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 56), a3);
  *a2 = 0;
  PopHandleNextState(a1, (__int64)a2, v4);
  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (_DWORD)result == *(_DWORD *)(a1 + 48) )
      break;
  }
  return result;
}
