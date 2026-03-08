/*
 * XREFs of HalpMcaReportError @ 0x140501778
 * Callers:
 *     HalpCmcPollProcessor @ 0x14037CF58 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140501B48 (HalpMceHandlerCore.c)
 *     HalpMceHandlerWithRendezvous @ 0x140501CF0 (HalpMceHandlerWithRendezvous.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A920B0 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpTranslateToLegacyMcaException @ 0x140501E70 (HalpTranslateToLegacyMcaException.c)
 *     HalpShouldRecoveryBeAttempted @ 0x14051702C (HalpShouldRecoveryBeAttempted.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 */

__int64 __fastcall HalpMcaReportError(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 ErrorSource; // rax
  __int64 v7; // rbx
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-D0h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  if ( !a1 )
  {
    if ( a2 )
    {
      HalpTranslateToLegacyMcaException(a2, BugCheckParameter2);
      KeBugCheckEx(
        0x9Cu,
        LOBYTE(BugCheckParameter2[3]),
        (ULONG_PTR)BugCheckParameter2,
        HIDWORD(BugCheckParameter2[4]),
        LODWORD(BugCheckParameter2[4]));
    }
    memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
    LODWORD(BugCheckParameter2[0]) = 1;
    BugCheckParameter2[1] = MEMORY[0xFFFFF78000000014];
    LODWORD(BugCheckParameter2[2]) = a3;
    if ( a3 > 0x80000000 )
      KeBugCheckEx(0x9Cu, a3, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x9Cu, 0LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, *(unsigned int *)(a1 + 24));
  v7 = (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
  if ( HalpGetCpuVendor() == 1 )
  {
    if ( HalpMcaScalableRasSupported )
      *(_DWORD *)(a1 + 12) |= 0x40u;
    if ( a2 && !(unsigned __int8)HalpShouldRecoveryBeAttempted(*(unsigned int *)(a2 + 4), a2 + 40) )
      *(_DWORD *)(a1 + 12) |= 0x100u;
  }
  if ( v7 )
    PshedRetrieveErrorInfo(a1, v7);
  return WheaReportHwError(a1);
}
