/*
 * XREFs of ViErrorReport1 @ 0x1405FFB44
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140A82730 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140A82930 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140A8B840 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140A8BD60 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x140A8C08C (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x140A8C1BC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x140A8C5D4 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x140A8C740 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x140A8CEB8 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140A8D070 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140AA6270 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AA6400 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140AA6600 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AA66E0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140AA69F0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140AA6AE0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140AA6B20 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140AA6C20 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140AA6D30 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403BF7F4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140A92CE0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140A92D34 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
