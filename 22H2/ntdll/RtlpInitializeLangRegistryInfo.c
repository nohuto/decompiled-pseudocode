/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x18006FFD0
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EEF70 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1100 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo(a1);
  return result;
}
