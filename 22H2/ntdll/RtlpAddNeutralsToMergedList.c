/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x18003BD04
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     GetNameFromLangListNode @ 0x18003AC14 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x18003B528 (LdrpLangFallbackListAppendNode.c)
 *     RtlGetNeutralFallback @ 0x18003BF1C (RtlGetNeutralFallback.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003C5B0 (RtlpGetSystemDefaultUILanguage.c)
 *     _wcsicmp @ 0x18008E340 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, DWORD *a2, __int64 a3, __int64 *a4)
{
  int NameFromLangListNode; // ebx
  wchar_t *Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *Buffer; // r12
  __int64 v13; // r12
  __int16 v14[2]; // [rsp+30h] [rbp-40h] BYREF
  LANGID DefaultUILanguageId; // [rsp+34h] [rbp-3Ch] BYREF
  __int128 v16; // [rsp+38h] [rbp-38h] BYREF
  _UNICODE_STRING v17; // [rsp+48h] [rbp-28h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+C0h] [rbp+50h] BYREF

  *(_DWORD *)(&v17.MaximumLength + 1) = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  v14[0] = 0;
  NameFromLangListNode = 0;
  v16 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, a2) >= 0
    && RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v17.Buffer = v9;
      *(_DWORD *)&v17.Length = 11141120;
      NameFromLangListNode = GetNameFromLangListNode((__int64)a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v17);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v17.Buffer;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, (__int64)a2, 0, v14, v17.Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String.Buffer) )
      {
        v20 = 0;
        *((_QWORD *)&v16 + 1) = v9 + 170;
        LODWORD(v16) = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, Buffer, &v16, &v20);
        if ( NameFromLangListNode < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v20 )
            break;
          v13 = *((_QWORD *)&v16 + 1);
          NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, (__int64)a2, 0, v14, *((const WCHAR **)&v16 + 1));
          if ( NameFromLangListNode < 0 )
            goto LABEL_16;
          NameFromLangListNode = RtlGetNeutralFallback(a2, v13, &v16, &v20);
        }
        while ( NameFromLangListNode >= 0 );
        if ( NameFromLangListNode < 0 )
          break;
      }
    }
  }
  else
  {
    NameFromLangListNode = -1073741823;
  }
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)NameFromLangListNode;
}
