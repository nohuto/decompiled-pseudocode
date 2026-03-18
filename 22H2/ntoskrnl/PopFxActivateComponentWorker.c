/*
 * XREFs of PopFxActivateComponentWorker @ 0x140312240
 * Callers:
 *     PopFxActivateComponent @ 0x1402871E0 (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x140312AD8 (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x1403122C4 (PopFxAddRefDevice.c)
 *     PopFxActivateComponentDependencies @ 0x140312394 (PopFxActivateComponentDependencies.c)
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140312D1C (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x1403135AC (PopPluginComponentActive.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r8

  PopFxAddRefDevice(a1);
  LOBYTE(v8) = a3;
  result = PopFxActivateComponentDependencies(a2, v8);
  if ( a3 )
    return PopFxCompleteComponentActivation(a1);
  if ( (_BYTE)result )
  {
    LOBYTE(v10) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v10, a4);
    if ( (_BYTE)result == 1 )
      return PopFxProcessWork(0LL);
  }
  return result;
}
