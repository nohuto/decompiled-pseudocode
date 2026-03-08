/*
 * XREFs of NtGdiAnyLinkedFonts @ 0x1C00F1FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiAnyLinkedFonts(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  result = 0LL;
  if ( *(_DWORD *)(v1 + 13304) || *(_QWORD *)(v1 + 13320) || *(_QWORD *)(v1 + 13328) )
    return 1LL;
  return result;
}
