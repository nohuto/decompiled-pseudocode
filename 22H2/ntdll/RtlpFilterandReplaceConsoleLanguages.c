/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x180038974 (LdrpCreateLangFallbackList.c)
 *     GetNameFromLangListNode @ 0x18003AC14 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x18003B528 (LdrpLangFallbackListAppendNode.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003D0E0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 *a5)
{
  int LangFallbackList; // ebx
  unsigned int v9; // edi
  wchar_t *Buffer; // rbx
  _QWORD *v11; // rdi
  unsigned int v12; // r15d
  __int16 v14[2]; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING v15; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[176]; // [rsp+60h] [rbp-A0h] BYREF

  BaseAddress = 0LL;
  memset(v20, 0, 0xAAuLL);
  *(_DWORD *)(&v15.MaximumLength + 1) = 0;
  v18 = 0;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, a2, 0x19u, 0);
  if ( LangFallbackList >= 0 )
  {
    v9 = 0;
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_10:
      v11 = BaseAddress;
      v12 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        do
        {
          *(_DWORD *)&v15.Length = 11141120;
          v15.Buffer = (wchar_t *)v20;
          LangFallbackList = GetNameFromLangListNode(a2, (_WORD *)(v11[3] + 6LL * v12), &v15);
          if ( LangFallbackList < 0 )
            break;
          LangFallbackList = LdrpLangFallbackListAppendNode(a5, a2, 0, v14, v15.Buffer);
          ++v12;
        }
        while ( v12 < *((unsigned __int16 *)v11 + 2) );
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      *(_DWORD *)&v15.Length = 11141120;
      v15.Buffer = (wchar_t *)v20;
      LangFallbackList = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a1 + 24) + 6LL * v9), &v15);
      if ( LangFallbackList < 0 )
        break;
      Buffer = v15.Buffer;
      v19 = 0LL;
      v17 = 0;
      RtlpConsoleFallbackNameFromLocaleName(v15.Buffer, a2, a4);
      LangFallbackList = LdrpLangFallbackListAppendNode(a5, a2, 0, v14, Buffer);
      if ( LangFallbackList < 0 )
        break;
      if ( ++v9 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_10;
    }
  }
  v11 = BaseAddress;
LABEL_11:
  if ( v11 )
    RtlpMuiRegFreeLanguageList(v11);
  if ( LangFallbackList < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)LangFallbackList;
}
