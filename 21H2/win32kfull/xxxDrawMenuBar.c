/*
 * XREFs of xxxDrawMenuBar @ 0x1C015BE30
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxDrawMenuBar(__int64 a1)
{
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
    xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 55);
  return 1LL;
}
