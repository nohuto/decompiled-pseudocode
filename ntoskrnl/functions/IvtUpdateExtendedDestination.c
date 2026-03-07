__int64 __fastcall IvtUpdateExtendedDestination(int a1, char a2, int a3, int a4, int a5)
{
  unsigned int v7; // ebp
  int v8; // esi
  unsigned int v9; // ebx
  int v10; // edi

  if ( !a2 )
    return IvtUpdateSingleTargetExtendedDestination(a1, 0, a3, a4, a5);
  v7 = 0;
  v8 = (unsigned __int16)a1;
  v9 = a1 & 0xFFFF0000;
  v10 = 1;
  if ( (_WORD)a1 )
  {
    do
    {
      if ( (v10 & v8) != 0 )
      {
        v9 = v10 | v9 & 0xFFFF0000;
        v8 &= ~v10;
        v7 |= IvtUpdateSingleTargetExtendedDestination(v9, a2, a3, a4, a5);
      }
      v10 *= 2;
    }
    while ( v8 );
  }
  return v7;
}
