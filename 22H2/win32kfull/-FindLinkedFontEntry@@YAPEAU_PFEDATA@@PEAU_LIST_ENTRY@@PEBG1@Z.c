/*
 * XREFs of ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00A1BA8
 * Callers:
 *     bAddFlEntry @ 0x1C00A0BA8 (bAddFlEntry.c)
 *     bDeleteFlEntry @ 0x1C0298040 (bDeleteFlEntry.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall FindLinkedFontEntry(
        struct _LIST_ENTRY *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v8; // rbx
  int v10; // eax

  Flink = a1->Flink;
  for ( i = 0LL; Flink != a1; i = 0LL )
  {
    v8 = Flink[2].Flink;
    i = Flink;
    if ( !_wcsicmp((const wchar_t *)v8->Flink[1].Blink, a2) )
    {
      v10 = HIDWORD(Flink[1].Flink) & 1;
      if ( a3 )
      {
        if ( !v10 )
          goto LABEL_3;
        v10 = _wcsicmp((const wchar_t *)((char *)v8[2].Flink + SLODWORD(v8[2].Flink->Blink)), a3);
      }
      if ( !v10 )
        return i;
    }
LABEL_3:
    Flink = Flink->Flink;
  }
  return i;
}
