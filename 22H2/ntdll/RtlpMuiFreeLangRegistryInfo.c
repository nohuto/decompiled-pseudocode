/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x180070000
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006FD10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x1800EEF70 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1100 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800702A0 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(PVOID BaseAddress)
{
  unsigned int v2; // ebx

  if ( !BaseAddress )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(BaseAddress, 4095LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v2;
}
