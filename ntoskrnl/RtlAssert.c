/*
 * XREFs of RtlAssert @ 0x1405A7CA0
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x14079D47C (KsepGetShimCallbacksForDriver.c)
 *     KseShimDatabaseClose @ 0x14079E25C (KseShimDatabaseClose.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14079E718 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x14079E858 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14079EC94 (KsepStringDuplicateUnicode.c)
 *     KseDriverUnloadImage @ 0x1407F7364 (KseDriverUnloadImage.c)
 *     KsepRegistryQueryDWORD @ 0x1407FFF18 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x14080001C (KsepRegistryQuerySZ.c)
 *     KsepStringTransform @ 0x140801918 (KsepStringTransform.c)
 *     KsepStringSplitMultiString @ 0x1408571CC (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x1409747F8 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x140974C2C (KsepRegistryQueryValue.c)
 *     KsepEngineInitialize @ 0x140B34E84 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x140B34F48 (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140B6FF30 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x140412D70 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x140420580 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1405A5370 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1409BA58C (RtlpTerminateCurrentProcess.c)
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
