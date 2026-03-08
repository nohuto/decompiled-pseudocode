/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x1403810B0
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x14028F220 (HalGetMessageRoutingInfo.c)
 *     HalpInterruptGenerateMessage @ 0x1403799C4 (HalpInterruptGenerateMessage.c)
 *     KeRegisterProcessorChangeCallback @ 0x14080FF70 (KeRegisterProcessorChangeCallback.c)
 *     PnprIsProcessorDevice @ 0x140963488 (PnprIsProcessorDevice.c)
 *     HalpInterruptReinitialize @ 0x140A923CC (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x140A94AF4 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9A400 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x1403810E8 (HalpGetProcessorStateByNtIndex.c)
 */

__int64 __fastcall HalGetProcessorIdByNtNumber(__int64 a1)
{
  _DWORD *ProcessorStateByNtIndex; // rax
  _DWORD *v2; // rdx

  if ( (unsigned int)a1 >= (unsigned int)HalpInterruptProcessorCount )
    return 3221225485LL;
  ProcessorStateByNtIndex = (_DWORD *)HalpGetProcessorStateByNtIndex(a1);
  if ( !ProcessorStateByNtIndex )
    return 3221226021LL;
  *v2 = *ProcessorStateByNtIndex;
  return 0LL;
}
