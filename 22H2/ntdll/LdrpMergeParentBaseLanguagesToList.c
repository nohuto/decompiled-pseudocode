/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x1800EEBD0
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180076FA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007CA20 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x18003B528 (LdrpLangFallbackListAppendNode.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpCreateTraverseNodes @ 0x1800586B0 (RtlpCreateTraverseNodes.c)
 *     RtlpFreeTraverseNodes @ 0x180058810 (RtlpFreeTraverseNodes.c)
 *     RtlpTraverseParents @ 0x18005884C (RtlpTraverseParents.c)
 */

__int64 LdrpMergeParentBaseLanguagesToList(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4, ...)
{
  wchar_t *Heap; // rsi
  int appended; // ebx
  __int16 v10; // di
  unsigned int v11; // edx
  __int64 v12; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  v15 = 0LL;
  Heap = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_22;
  }
  appended = RtlpCreateTraverseNodes(&v15);
  if ( appended >= 0 )
  {
    if ( !RtlpTraverseParents(a2, v15, a3, a4, 0, 42) )
    {
      appended = -1073741823;
      goto LABEL_24;
    }
    Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
    if ( !Heap )
    {
      appended = -1073741801;
      goto LABEL_24;
    }
    v10 = 0;
    while ( 1 )
    {
      if ( v10 && *(_DWORD *)(v15 + 8LL * v10 + 4) )
      {
        v11 = *(unsigned __int16 *)(v15 + 8LL * v10);
        if ( (_WORD)v11 )
        {
          DestinationString.Buffer = Heap;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( !RtlLCIDToCultureName(v11, (__int64)&DestinationString) )
            goto LABEL_15;
        }
        else
        {
          v12 = *(__int16 *)(v15 + 8LL * v10 + 2);
          if ( (v12 & 0x8000u) != 0LL )
          {
LABEL_15:
            appended = -1073741595;
LABEL_22:
            if ( Heap )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
            break;
          }
          RtlInitUnicodeString(
            &DestinationString,
            (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL)
                   + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL) + 2 * v12)));
        }
        appended = LdrpLangFallbackListAppendNode(a1, a3, 0, (__int16 *)va, DestinationString.Buffer);
        if ( appended < 0 )
          goto LABEL_22;
      }
      if ( ++v10 >= 42 )
        goto LABEL_22;
    }
  }
LABEL_24:
  if ( v15 )
    RtlpFreeTraverseNodes(v15);
  return (unsigned int)appended;
}
