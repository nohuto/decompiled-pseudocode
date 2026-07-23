/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180076740
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003C5B0 (RtlpGetSystemDefaultUILanguage.c)
 *     GetLCIDFromLangListNode @ 0x18007688C (GetLCIDFromLangListNode.c)
 *     InitializeUserOrMachineLangList @ 0x180076914 (InitializeUserOrMachineLangList.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  DWORD *v4; // rdi
  PVOID v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  NTSTATUS LCIDFromLangListNode; // esi
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  DWORD *v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( DefaultUILanguageId )
  {
    *DefaultUILanguageId = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v12);
    v4 = v12;
    if ( v6 >= 0 && (int)InitializeTEBUserLangList(a2, (__int64)v12) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages )
        v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
      else
        v7 = 0LL;
      v4 = v12;
      BaseAddress = (PVOID)v7;
      if ( v7 )
      {
        if ( *(_WORD *)(v7 + 4) )
        {
          LCIDFromLangListNode = GetLCIDFromLangListNode(v12, *(_QWORD *)(v7 + 24), DefaultUILanguageId);
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_13;
        }
        BaseAddress = 0LL;
      }
      v8 = InitializeUserOrMachineLangList(
             (_DWORD)v4,
             0,
             (unsigned int)&BaseAddress,
             3 - (unsigned int)(a2 != 0),
             a2 == 0);
      v5 = BaseAddress;
      if ( v8 >= 0 )
      {
        if ( BaseAddress && *((_WORD *)BaseAddress + 2) )
          LCIDFromLangListNode = GetLCIDFromLangListNode(v4, *((_QWORD *)BaseAddress + 3), DefaultUILanguageId);
        else
          LCIDFromLangListNode = -1073741823;
LABEL_13:
        if ( LCIDFromLangListNode >= 0 )
          goto LABEL_14;
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, v4);
  if ( LCIDFromLangListNode < 0 )
    *DefaultUILanguageId = 0;
LABEL_14:
  if ( v5 )
    RtlpMuiRegFreeLanguageList(v5);
  return (unsigned int)LCIDFromLangListNode;
}
