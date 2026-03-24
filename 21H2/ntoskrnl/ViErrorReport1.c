/*
 * XREFs of ViErrorReport1 @ 0x1405A1F18
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C7740 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1409CFC4C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409D0144 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1409D04C0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1409D05F0 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1409D0A08 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D0B74 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1409D0E84 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1409D124C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409D1404 (VfIoInitializeIrp.c)
 *     VfErrorReport1 @ 0x1409D8008 (VfErrorReport1.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409E2D70 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409E2F60 (VfPnpVerifyNewRequest.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1409E3360 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1409E3460 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1409E34A0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1409E35A0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1409E36B0 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403AD5C4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405A06F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D8208 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D825C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
