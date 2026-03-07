_BOOL8 __fastcall DrawDiagonal(HDC a1, struct tagRECT *a2, HBRUSH a3, HBRUSH a4, unsigned int a5)
{
  int v7; // esi
  __int64 v8; // r14
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // eax

  if ( (a5 & 8) == 0 )
    a4 = a3;
  if ( (a5 & 0x1F) == 0x13 || (a5 & 0x1F) == 0x1C )
    v7 = -1;
  else
    v7 = 1;
  v8 = GreSelectBrush(a1, a4);
  v10 = DrawDiagonalLine(a1, a2, v7, v9, a5 & 0xFFFFF7FF);
  if ( (a5 & 2) != 0 )
    a2->left += (unsigned __int16)v10;
  else
    a2->right -= (unsigned __int16)v10;
  v11 = HIWORD(v10);
  if ( (a5 & 4) != 0 )
    a2->top += v11;
  else
    a2->bottom -= v11;
  return GreSelectBrush(a1, v8) != 0;
}
