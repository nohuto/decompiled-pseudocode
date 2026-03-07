bool __fastcall LayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  _BYTE *v3; // rdx
  int v5; // eax

  v3 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v3[24] & 0x20) != 0 )
    return 0;
  if ( (v3[27] & 0x20) != 0 && (v3[26] & 0x20) != 0 )
    return 1;
  v5 = IsWindowDesktopComposed(a1);
  return (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 40LL), *((_WORD *)a1 + 128) >= 0x602u, v5) != 0;
}
