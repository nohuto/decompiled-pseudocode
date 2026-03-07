void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFontInternal(*(_QWORD *)a1, *((_QWORD *)a1 + 1), 1);
}
