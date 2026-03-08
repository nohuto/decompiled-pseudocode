/*
 * XREFs of ViErrorReport1 @ 0x1405CDA04
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140AC00C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140AC02C0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140AC96CC (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x140AC99CC (IovpCompleteRequest1.c)
 *     IovpCompleteRequest4 @ 0x140AC9E98 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACA004 (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140ACA15C (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140ACA3D8 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x140ACA7E4 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140ACA99C (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140AE3FB0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE4140 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140AE4350 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE4430 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140AE47C0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140AE48B0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140AE48F0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140AE49F0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140AE4B00 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140380B18 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD06D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
