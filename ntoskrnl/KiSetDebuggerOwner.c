/*
 * XREFs of KiSetDebuggerOwner @ 0x14036B4E0
 * Callers:
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x14036B330 (KiSendThawExecution.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KeSwitchFrozenProcessor @ 0x140574610 (KeSwitchFrozenProcessor.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057833C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetDebuggerOwner(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = KiDebuggerIsStallOwner;
  if ( KiDebuggerIsStallOwner
    || !a1
    || (result = KeNumberProcessors_0, (_DWORD)KeNumberProcessors_0 == 1)
    || (result = MEMORY[0xFFFFF780000003C6]) != 0 )
  {
    v2 = a1;
  }
  else
  {
    v2 = qword_140D20988;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
