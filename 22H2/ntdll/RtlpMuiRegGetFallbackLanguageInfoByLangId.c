/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010488C
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EEF70 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104A4C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104A4C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5)
{
  LCID v5; // ebp
  __int16 v9; // r9
  __int16 i; // dx
  __int16 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  wchar_t *Heap; // rax
  wchar_t *v16; // rdi
  unsigned int FallbackLanguageInfoByName; // ebx
  _UNICODE_STRING String; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  v9 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v11 = (*(_WORD *)(a2 + 8) >> i) & 3;
    if ( v11 == 2 )
    {
      v12 = *(__int16 *)(a2 + 2LL * v9 + 12);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      if ( *(_WORD *)(28 * v12 + v13 + 4) == (_WORD)v5 )
      {
        *(_OWORD *)a5 = *(_OWORD *)(28 * v12 + v13);
        *(_QWORD *)(a5 + 16) = *(_QWORD *)(28 * v12 + v13 + 16);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(28 * v12 + v13 + 24);
        return 0LL;
      }
    }
    else if ( *(__int16 *)(a2 + 2LL * v9 + 12) != v5 && v11 != 1 )
    {
      *(_OWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_DWORD *)(a5 + 24) = 0;
      *(_WORD *)(a5 + 6) = -1;
      *(_WORD *)(a5 + 4) = v5;
      return 0LL;
    }
    ++v9;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v16 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( a4
    && *(__int16 *)(a2 + 6) > 0
    && (String.Buffer = Heap, *(_DWORD *)&String.Length = 11141120, RtlLCIDToCultureName(v5, &String)) )
  {
    FallbackLanguageInfoByName = RtlpMuiRegGetFallbackLanguageInfoByName(a1, a2, String.Buffer, 0LL, a5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    return FallbackLanguageInfoByName;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    return 3221225524LL;
  }
}
