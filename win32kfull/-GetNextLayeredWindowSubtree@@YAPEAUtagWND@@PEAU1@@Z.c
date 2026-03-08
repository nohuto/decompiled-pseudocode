/*
 * XREFs of ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C488
 * Callers:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C3EC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C488 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002C488 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindowSubtree(struct tagWND *a1)
{
  struct tagWND *result; // rax
  struct tagWND *i; // rbx

  result = 0LL;
  for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    result = GetNextLayeredWindowSubtree(*((struct tagWND **)i + 14));
    if ( result )
      break;
    if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 26LL) & 8) != 0 )
      return i;
  }
  return result;
}
