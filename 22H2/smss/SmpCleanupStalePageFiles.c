/*
 * XREFs of SmpCleanupStalePageFiles @ 0x14000AA2C
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000ABCC (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000203C (RtlStringCbPrintfW.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000BC20 (SmpDeallocSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     SmpDeletePagingFile @ 0x1400149A4 (SmpDeletePagingFile.c)
 */

void SmpCleanupStalePageFiles()
{
  PVOID *v0; // rbx
  PVOID *v1; // rdi
  PVOID *v2; // rcx
  PVOID **v3; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v0 = (PVOID *)SmpExistingPageFilesList;
  while ( v0 != &SmpExistingPageFilesList )
  {
    v1 = v0;
    SmpDeletePagingFile(v0 + 2);
    v2 = (PVOID *)*v0;
    v0 = v2;
    if ( v2[1] != v1 || (v3 = (PVOID **)v1[1], *v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = v3;
    SmpDeallocSavedRegistryEntry(v1);
  }
  if ( !SmpWsSwapPagefileCreated )
  {
    RtlStringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    RtlInitUnicodeString(&DestinationString, pszDest);
    SmpDeletePagingFile(&DestinationString);
  }
}
