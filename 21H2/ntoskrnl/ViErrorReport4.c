/*
 * XREFs of ViErrorReport4 @ 0x1405A2260
 * Callers:
 *     IovpCallDriver2 @ 0x1409D1144 (IovpCallDriver2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403AD714 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D9208 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D925C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport4(__int64 a1, const void *a2, const void **a3, int a4, int a5)
{
  __int64 v5; // rsi
  char pszDest[128]; // [rsp+40h] [rbp-A8h] BYREF

  v5 = a4;
  ViErrorDisplayDescription(548LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x7CuLL,
         "CulpritAddress = %p, Irp = %p, ExpectedStatus = 0x%x, ActualStatus = 0x%x.\n",
         a2,
         *a3,
         v5,
         a5) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(548LL, a2, *a3, v5);
}
