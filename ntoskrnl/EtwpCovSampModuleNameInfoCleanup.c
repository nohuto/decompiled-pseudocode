/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x1409EFA24
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1408A55B8 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampContextGetModule @ 0x1409EE4AC (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleCleanup @ 0x1409EF8C8 (EtwpCovSampModuleCleanup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1)
{
  __int64 v2; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  v2 = *a1;
  if ( *a1 )
  {
    if ( (v2 & 1) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64))(FltMgrCallbacks + 32))(v2 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    else
    {
      UnicodeString.Buffer = (wchar_t *)(v2 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_DWORD *)&UnicodeString.Length = 65537;
      RtlFreeUnicodeString(&UnicodeString);
    }
    *a1 = 0LL;
  }
}
