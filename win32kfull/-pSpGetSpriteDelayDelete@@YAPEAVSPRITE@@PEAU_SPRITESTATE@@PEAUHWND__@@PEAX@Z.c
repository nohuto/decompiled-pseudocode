struct SPRITE *__fastcall pSpGetSpriteDelayDelete(struct _SPRITESTATE *a1, HWND a2, _QWORD *i)
{
  if ( !i && a2 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 1); i && ((HWND)i[9] != a2 || (*(_DWORD *)i & 0x400) == 0); i = (_QWORD *)i[3] )
      ;
  }
  return (struct SPRITE *)i;
}
