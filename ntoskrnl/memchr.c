/*
 * XREFs of memchr @ 0x1403D4790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  for ( ; MaxCount; --MaxCount )
  {
    if ( *(_BYTE *)Buf == (_BYTE)Val )
      break;
    Buf = (char *)Buf + 1;
  }
  return (void *)((unsigned __int64)Buf & -(__int64)(MaxCount != 0));
}
