/*
 * XREFs of ViErrorReport10 @ 0x1405CDA88
 * Callers:
 *     IovpCallDriver2 @ 0x140AC96CC (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE4140 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE4430 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140AE4A70 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140380B18 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD06D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
