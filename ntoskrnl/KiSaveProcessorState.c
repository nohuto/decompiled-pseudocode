/*
 * XREFs of KiSaveProcessorState @ 0x14036A140
 * Callers:
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KxNmiInterrupt @ 0x140424000 (KxNmiInterrupt.c)
 * Callees:
 *     KeContextFromKframes @ 0x1403620F0 (KeContextFromKframes.c)
 *     KiSaveNpxState @ 0x14036A584 (KiSaveNpxState.c)
 *     KiSaveProcessorControlState @ 0x140416350 (KiSaveProcessorControlState.c)
 */

__int64 __fastcall KiSaveProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Context; // rbx
  unsigned int ContextFlagsInit; // edx

  CurrentPrcb = KeGetCurrentPrcb();
  Context = (__int64)CurrentPrcb->Context;
  ContextFlagsInit = CurrentPrcb->ContextFlagsInit;
  *(_DWORD *)(Context + 48) = ContextFlagsInit;
  if ( (*(_BYTE *)(a1 + 368) & 1) == 0
    && ((ContextFlagsInit & 0x100040) == 1048640 || (ContextFlagsInit & 0x100008) == 1048584) )
  {
    KiSaveNpxState(Context);
  }
  KeContextFromKframes(a1, a2, Context);
  return KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
}
