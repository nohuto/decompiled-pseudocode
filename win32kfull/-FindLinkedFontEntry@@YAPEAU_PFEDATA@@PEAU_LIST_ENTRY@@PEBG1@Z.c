struct _LIST_ENTRY *__fastcall FindLinkedFontEntry(
        struct _LIST_ENTRY *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v4; // rsi
  struct _LIST_ENTRY *v8; // rbx
  int Flink_high; // eax
  bool v10; // zf

  Flink = a1->Flink;
  v4 = 0LL;
  while ( Flink != a1 )
  {
    v8 = Flink[2].Flink;
    v4 = Flink;
    if ( !_wcsicmp((const wchar_t *)v8->Flink[1].Blink, a2) )
    {
      Flink_high = HIDWORD(Flink[1].Flink);
      if ( !a3 )
      {
        v10 = (Flink_high & 1) == 0;
        goto LABEL_7;
      }
      if ( (Flink_high & 1) != 0 )
      {
        v10 = _wcsicmp((const wchar_t *)((char *)v8[2].Flink + SLODWORD(v8[2].Flink->Blink)), a3) == 0;
LABEL_7:
        if ( v10 )
          return v4;
      }
    }
    Flink = Flink->Flink;
    v4 = 0LL;
  }
  return v4;
}
