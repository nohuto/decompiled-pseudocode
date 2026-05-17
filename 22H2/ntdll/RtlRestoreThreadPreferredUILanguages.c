/*
 * XREFs of RtlRestoreThreadPreferredUILanguages @ 0x1800EF3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006FE8C (RtlpFreeTebLanguageList.c)
 */

__int64 __fastcall RtlRestoreThreadPreferredUILanguages(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    return RtlReportCriticalFailure(v2 != 0 ? -1073740004 : -1073741816, a1, 1LL);
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList((__int64 *)NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *(void **)a1;
  NtCurrentTeb()->MergedPrefLanguages = *(void **)(a1 + 8);
  NtCurrentTeb()->UserPrefLanguages = *(void **)(a1 + 16);
  *(_DWORD *)(a1 + 24) = 0;
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
