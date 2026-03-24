/*
 * XREFs of ViErrorReport1 @ 0x1405A1E58
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C7750 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1409CFC5C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409D0154 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1409D04D0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1409D0600 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1409D0A18 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D0B84 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1409D0E94 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1409D125C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409D1414 (VfIoInitializeIrp.c)
 *     VfErrorReport1 @ 0x1409D8018 (VfErrorReport1.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409E2D80 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409E2F70 (VfPnpVerifyNewRequest.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1409E3370 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1409E3470 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1409E34B0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1409E35B0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1409E36C0 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A83E4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405A0634 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D8218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D826C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
