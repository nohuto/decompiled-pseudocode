/*
 * XREFs of PoFxCompleteIdleState @ 0x1402EF9F0
 * Callers:
 *     DifPoFxCompleteIdleStateWrapper @ 0x1405E7060 (DifPoFxCompleteIdleStateWrapper.c)
 * Callees:
 *     PopPluginComponentIdleState @ 0x1402EFA90 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1402EFCDC (PopDiagTraceFxComponentIdleState.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset(v7, 0, 0x40uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8 * v2);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), (unsigned int)v2, 14LL, 1LL);
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), (unsigned int)v2, *(unsigned int *)(v4 + 152));
    result = PopPluginComponentIdleState(a1, (unsigned int)v2, v6, v7);
    if ( (_BYTE)result )
      return PopFxProcessWork(0LL);
  }
  return result;
}
