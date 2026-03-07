__int64 __fastcall DrawScrollArrow(HDC a1, struct tagRECT *a2, char a3)
{
  unsigned __int16 v3; // r9

  v3 = (a3 & 2) != 0 ? 52 : 54;
  if ( (a3 & 1) == 0 )
    v3 = (a3 & 2) != 0 ? 51 : 53;
  return DrawIt(a1, a2, a3, v3);
}
