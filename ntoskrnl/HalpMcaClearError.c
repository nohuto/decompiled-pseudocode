/*
 * XREFs of HalpMcaClearError @ 0x140500FC0
 * Callers:
 *     HalpCmcPollProcessor @ 0x14037CF58 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140501B48 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A920B0 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x14037D018 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankClear @ 0x140503EFC (HalpMcaProcessorBankClear.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  HalpMcaProcessorBankClear(a2, *(unsigned int *)(a1 + 36));
  result = HalpWheaWriteMsrStatus(a2, *(_DWORD *)(a1 + 36));
  _mm_mfence();
  return result;
}
