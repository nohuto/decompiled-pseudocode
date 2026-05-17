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

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int LCIDFromLangListNode; // esi
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    v8 = RtlpCreateProcessRegistryInfo(&v14);
    v6 = v14;
    if ( v8 >= 0 && (int)InitializeTEBUserLangList(a2, v14) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages )
        v9 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
      else
        v9 = 0LL;
      v6 = v14;
      v13 = v9;
      if ( v9 )
      {
        if ( *(_WORD *)(v9 + 4) )
        {
          LCIDFromLangListNode = GetLCIDFromLangListNode(v14, *(_QWORD *)(v9 + 24), a1);
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_13;
        }
        v13 = 0LL;
      }
      v10 = InitializeUserOrMachineLangList(v6, 0, (unsigned int)&v13, 3 - (unsigned int)(a2 != 0), a2 == 0);
      v7 = v13;
      if ( v10 >= 0 )
      {
        if ( v13 && *(_WORD *)(v13 + 4) )
          LCIDFromLangListNode = GetLCIDFromLangListNode(v6, *(_QWORD *)(v13 + 24), a1);
        else
          LCIDFromLangListNode = -1073741823;
LABEL_13:
        if ( LCIDFromLangListNode >= 0 )
          goto LABEL_14;
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage(a1, v6, a3, a4);
  if ( LCIDFromLangListNode < 0 )
    *a1 = 0;
LABEL_14:
  if ( v7 )
    RtlpMuiRegFreeLanguageList(v7);
  return (unsigned int)LCIDFromLangListNode;
}
