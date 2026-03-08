/*
 * XREFs of ViErrorReport6 @ 0x1405CDBC0
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140AC00C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140AC02C0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver2 @ 0x140AC96CC (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x140AC9AFC (IovpCompleteRequest2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140380B18 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD06D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
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
