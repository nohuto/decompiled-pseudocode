/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x140383D00
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x140320040 (HalGetMessageRoutingInfo.c)
 *     HalpInterruptGenerateMessage @ 0x14037D374 (HalpInterruptGenerateMessage.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822950 (KeRegisterProcessorChangeCallback.c)
 *     PnprIsProcessorDevice @ 0x1409664A8 (PnprIsProcessorDevice.c)
 *     HalpInterruptReinitialize @ 0x140A9550C (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x140A97C34 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D540 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x140383D38 (HalpGetProcessorStateByNtIndex.c)
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
