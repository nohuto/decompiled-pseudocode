/*
 * XREFs of HalpMcaProcessorBankConfigAmd @ 0x140503F88
 * Callers:
 *     HalpMcaProcessorBankConfig @ 0x14037D0B4 (HalpMcaProcessorBankConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcaProcessorBankConfigAmd(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax

  v3 = 16 * a2 - 1073733628;
  v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(a1, v3, 0LL);
  return HalpWheaWriteMsr(a1, v3, v4 | 5);
}
