/*
 * XREFs of CmpGetIndexElementSize @ 0x14086F82C
 * Callers:
 *     CmpCheckKey @ 0x1407B4B80 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetIndexElementSize(_WORD *a1)
{
  __int64 result; // rax

  result = 8LL;
  if ( *a1 != 26220 && *a1 != 26732 )
    return 4LL;
  return result;
}
