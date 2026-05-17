/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x180070910
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18003F48C (RtlpLoadLanguageConfigList.c)
 *     RtlpFreeTebLanguageList @ 0x18006FE8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800702A0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpUpdateTEBLanguage @ 0x18007D280 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegResizeStringPool @ 0x180105A18 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
