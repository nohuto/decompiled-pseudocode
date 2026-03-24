/*
 * XREFs of VfIoDetachDevice @ 0x1409D6234
 * Callers:
 *     IovDetachDevice @ 0x1409C51C0 (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A83E4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405A0634 (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x1409D6914 (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x1409D8218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D826C (ViErrorFinishReport.c)
 */

__int64 __fastcall VfIoDetachDevice(_QWORD *a1, const void *a2)
{
  char pszDest[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    ViErrorDisplayDescription(514LL);
    if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(514LL, a2, a1, 0LL);
  }
  return IovUtilFlushStackCache(a1);
}
