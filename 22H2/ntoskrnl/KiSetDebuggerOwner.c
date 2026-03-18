/*
 * XREFs of KiSetDebuggerOwner @ 0x14020D3E0
 * Callers:
 *     KiSendThawExecution @ 0x14020D230 (KiSendThawExecution.c)
 *     KeFreezeExecution @ 0x14020D560 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x14020E1F0 (KiFreezeTargetExecution.c)
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KeSwitchFrozenProcessor @ 0x140576C30 (KeSwitchFrozenProcessor.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A84C (KiBugCheckRecoveryFreezeOtherProcessors.c)
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
