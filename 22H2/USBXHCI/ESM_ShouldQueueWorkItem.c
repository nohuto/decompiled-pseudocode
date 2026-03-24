/*
 * XREFs of ESM_ShouldQueueWorkItem @ 0x1C001AE70
 * Callers:
 *     ESM_RunStateMachine @ 0x1C0008980 (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008D48 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 * Callees:
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C001A020 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 */

char __fastcall ESM_ShouldQueueWorkItem(__int64 a1, char a2)
{
  char v2; // bl

  v2 = 0;
  if ( KeGetCurrentIrql()
    && (a2 || *(_BYTE *)(a1 + 1018) && !Controller_IsRunningWithIrqlRaisedAndTracked(**(_QWORD **)(a1 + 960))) )
  {
    return 1;
  }
  return v2;
}
