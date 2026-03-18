/*
 * XREFs of VfErrorReport7 @ 0x140A92B74
 * Callers:
 *     PpvUtilFailDriver @ 0x14056489C (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403BF7F4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140A92CE0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140A92D34 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport7(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-98h] BYREF

  ViErrorDisplayDescription(585LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x6EuLL,
         "CulpritAddress = %p, DeviceObject1 = %p, DeviceObject2 = %p.\n",
         a2,
         a3,
         a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(585LL, a2, a3, a4);
}
