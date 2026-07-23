/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x140376FC0
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x140376DF0 (HalGetMessageRoutingInfo.c)
 *     HalpInterruptGenerateMessage @ 0x140377EB8 (HalpInterruptGenerateMessage.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C8720 (KeRegisterProcessorChangeCallback.c)
 *     PnprIsProcessorDevice @ 0x1408ADD28 (PnprIsProcessorDevice.c)
 *     HalpInterruptReinitialize @ 0x140995D68 (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x1409A8B94 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AE4D0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x14033E500 (KeGetProcessorNumberFromIndex.c)
 */

NTSTATUS __fastcall HalGetProcessorIdByNtNumber(ULONG a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  NTSTATUS result; // eax
  int v5; // edx
  ULONG_PTR i; // rcx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  v3 = HalpInterruptProcessorCount;
  if ( a1 >= (unsigned int)HalpInterruptProcessorCount )
    return -1073741811;
  result = KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( result >= 0 )
  {
    v5 = 0;
    if ( v3 )
    {
      for ( i = HalpInterruptProcessorState + 13;
            !*(_BYTE *)(i - 1)
         || !*(_BYTE *)i
         || *(_WORD *)(i + 3) != ProcNumber.Group
         || *(_BYTE *)(i + 5) != ProcNumber.Number;
            i += 64LL )
      {
        if ( ++v5 >= v3 )
          return -1073741275;
      }
      *a2 = *(_DWORD *)(i - 13);
      return 0;
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
