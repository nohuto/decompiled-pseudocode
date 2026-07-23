/*
 * XREFs of VfErrorReport9 @ 0x1409D9140
 * Callers:
 *     VfIoDeleteDevice @ 0x1409D7144 (VfIoDeleteDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403AD714 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D9208 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D925C (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport9(__int64 a1, const void *a2)
{
  unsigned int v3; // ebx
  char pszDest[40]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v3, a2, 0LL, 0LL);
}
