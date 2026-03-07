__int64 __fastcall CmpFindCellInIndex(_WORD *a1, int a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 i; // r8
  bool v4; // zf

  v2 = a1[1];
  for ( i = 0; i < v2; ++i )
  {
    if ( ((*a1 - 26220) & 0xFDFF) != 0 )
      v4 = *(_DWORD *)&a1[2 * i + 2] == a2;
    else
      v4 = *(_DWORD *)&a1[4 * i + 2] == a2;
    if ( v4 )
      break;
  }
  return i;
}
