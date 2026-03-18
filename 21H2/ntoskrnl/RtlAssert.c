/*
 * XREFs of RtlAssert @ 0x1405E6EA0
 * Callers:
 *     KseDriverUnloadImage @ 0x1406EAFE4 (KseDriverUnloadImage.c)
 *     KseShimDatabaseClose @ 0x14075C588 (KseShimDatabaseClose.c)
 *     KsepStringDuplicate @ 0x14075C924 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14075C9D4 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x14075CB14 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14075CDC4 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14075CDF8 (KsepStringDuplicateUnicode.c)
 *     KsepGetShimCallbacksForDriver @ 0x14075EC70 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringTransform @ 0x1407ED3AC (KsepStringTransform.c)
 *     KsepRegistryQueryDWORD @ 0x140826B28 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x140826C10 (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x140964E64 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x1409651B8 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x1409655BC (KsepRegistryQueryValue.c)
 *     KsepEngineReadFlags @ 0x140B01140 (KsepEngineReadFlags.c)
 *     KsepEngineInitialize @ 0x140B01250 (KsepEngineInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140B01670 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x14041C1C0 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1409BA44C (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !MutableMessage )
    MutableMessage = (PSTR)&Src;
  while ( 1 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      MutableMessage,
      (const char *)VoidFailedAssertion,
      (const char *)VoidFileName,
      LineNumber);
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_17:
      RtlpTerminateCurrentProcess();
      return;
    }
    if ( Response[0] > 98 )
    {
      v9 = Response[0] - 105;
      v8 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_15;
      v9 = Response[0] - 73;
      v8 = Response[0] == 73;
    }
    if ( v8 )
      return;
    v10 = v9 - 6;
    if ( !v10 )
    {
LABEL_15:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_17;
    if ( v11 == 4 )
      ZwTerminateThread(-2LL, 3221225473LL);
  }
}
