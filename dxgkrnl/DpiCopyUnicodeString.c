/*
 * XREFs of DpiCopyUnicodeString @ 0x1C0205478
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C001D038 (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0204950 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v2; // ebx
  wchar_t *Pool2; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = 0;
  if ( !DestinationString || !SourceString || !SourceString->MaximumLength || !SourceString->Buffer )
  {
    v7 = -1073741811LL;
    v2 = -1073741811;
    v8 = 2LL;
    goto LABEL_10;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, SourceString->MaximumLength, 1953656900LL);
  DestinationString->Buffer = Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741801LL;
    v2 = -1073741801;
    v8 = 6LL;
LABEL_10:
    WdLogSingleEntry1(v8, v7);
    return v2;
  }
  DestinationString->MaximumLength = SourceString->MaximumLength;
  RtlCopyUnicodeString(DestinationString, SourceString);
  return v2;
}
