/*
 * XREFs of ViErrorReport6 @ 0x1405A20D4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C7540 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C7740 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver2 @ 0x1409D0144 (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x1409D05F0 (IovpCompleteRequest2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403AD5C4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405A06F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D8208 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D825C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport6(__int64 a1, const void *a2, const void *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  char pszDest[96]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a4;
  v7 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", a2, a3, v4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v7, a2, a3, v4);
}
