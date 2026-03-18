/*
 * XREFs of VfErrorReport8 @ 0x140A92C0C
 * Callers:
 *     PpvUtilFailDriver @ 0x14056489C (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403BF7F4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140A92CE0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140A92D34 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport8(__int64 a1, const void *a2, const void *a3)
{
  unsigned int v5; // ebx
  char pszDest[80]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v5, a2, a3, 0LL);
}
