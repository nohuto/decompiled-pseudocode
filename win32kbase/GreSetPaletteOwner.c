__int64 __fastcall GreSetPaletteOwner(__int64 a1, int a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 3168LL) + 120LL) )
    return (unsigned int)HmgSetOwner(a1, a2, 8);
  return v4;
}
