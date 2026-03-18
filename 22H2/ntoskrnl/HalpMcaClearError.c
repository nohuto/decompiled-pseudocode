/*
 * XREFs of HalpMcaClearError @ 0x1405030A0
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403809E8 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140503C28 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A951E4 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x140380AA8 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankClear @ 0x140505FDC (HalpMcaProcessorBankClear.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  HalpMcaProcessorBankClear(a2, *(unsigned int *)(a1 + 36));
  result = HalpWheaWriteMsrStatus(a2, *(_DWORD *)(a1 + 36));
  _mm_mfence();
  return result;
}
