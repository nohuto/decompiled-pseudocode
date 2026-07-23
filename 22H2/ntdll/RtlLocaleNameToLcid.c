/*
 * XREFs of RtlLocaleNameToLcid @ 0x18003BA90
 * Callers:
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x180053B40 (RtlLoadString.c)
 *     LdrpGetParentLangId @ 0x18007EB64 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18003BB38 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007D124 (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x180087C80 (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x1800FD040 (RtlpGetCustomCultureData.c)
 *     RtlpMatchUILanguage @ 0x1800FD3BC (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800FD484 (RtlpMatchUserLanguage.c)
 */

NTSTATUS __cdecl RtlLocaleNameToLcid(PCWSTR LocaleName, PLCID lcid, ULONG Flags)
{
  char v3; // bp
  __int64 v6; // rdi
  int NameIndex; // eax

  v3 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !lcid )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v6 = pTblPtrs;
  if ( pTblPtrs )
    goto LABEL_5;
  if ( (unsigned __int8)RtlpLoadNlsData() )
  {
    v6 = pTblPtrs;
LABEL_5:
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (v3 & 2) != 0
        || (_mm_lfence(),
            v6 = pTblPtrs,
            (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                      * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                      + *(_QWORD *)(pTblPtrs + 8)
                      + 24LL) & 1) != 0) )
      {
        *lcid = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
        return 0;
      }
      return -1073741585;
    }
    if ( !(unsigned __int8)RtlpIsCustomLocale(LocaleName) )
      return -1073741585;
    if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(LocaleName) )
    {
      *lcid = 5120;
      return 0;
    }
    if ( (unsigned __int8)RtlpMatchUserLanguage(LocaleName) )
    {
      *lcid = 3072;
      return 0;
    }
    if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) >= 0 )
    {
      *lcid = 4096;
      return 0;
    }
  }
  return -1073741823;
}
