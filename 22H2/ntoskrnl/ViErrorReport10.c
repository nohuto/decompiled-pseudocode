/*
 * XREFs of ViErrorReport10 @ 0x1405CFF38
 * Callers:
 *     IovpCallDriver2 @ 0x140ACD6CC (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE8140 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE8430 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140AE8A70 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140383768 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CE364 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD46D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD4724 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
