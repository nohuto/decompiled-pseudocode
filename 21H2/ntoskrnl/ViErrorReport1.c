/*
 * XREFs of ViErrorReport1 @ 0x1405A2148
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C8540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C8740 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1409D0C4C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409D1144 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1409D14C0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1409D15F0 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1409D1A08 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D1B74 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1409D1E84 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1409D224C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409D2404 (VfIoInitializeIrp.c)
 *     VfErrorReport1 @ 0x1409D9008 (VfErrorReport1.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409E3D70 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409E3F60 (VfPnpVerifyNewRequest.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1409E4360 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1409E4460 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1409E44A0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1409E45A0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1409E46B0 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403AD714 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D9208 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D925C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
