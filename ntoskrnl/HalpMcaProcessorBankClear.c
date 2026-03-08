/*
 * XREFs of HalpMcaProcessorBankClear @ 0x140503EFC
 * Callers:
 *     HalpMcaClearError @ 0x140500FC0 (HalpMcaClearError.c)
 * Callees:
 *     HalpWheaReadMsrStatus @ 0x14037D160 (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpMcaProcessorBankClear(__int64 a1, int a2)
{
  __int64 MsrStatus; // rax
  __int64 v5; // rdx

  LOBYTE(MsrStatus) = HalpGetCpuVendor();
  if ( (_BYTE)MsrStatus == 1 )
  {
    if ( HalpMcaScalableRasSupported )
    {
      MsrStatus = HalpWheaReadMsrStatus(a1, a2, 0LL);
      if ( (MsrStatus & 0x100000000000LL) != 0 )
      {
        v5 = (unsigned int)(16 * a2 - 1073733624);
LABEL_8:
        LOBYTE(MsrStatus) = HalpWheaWriteMsr(a1, v5, 0LL);
      }
    }
  }
  else if ( (_BYTE)MsrStatus == 2 )
  {
    MsrStatus = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 377LL, 0LL);
    if ( (MsrStatus & 0xFF0000) != 0 )
    {
      v5 = 392LL;
      goto LABEL_8;
    }
  }
  return MsrStatus;
}
