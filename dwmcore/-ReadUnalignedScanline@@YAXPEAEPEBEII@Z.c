void __fastcall ReadUnalignedScanline(unsigned __int8 *a1, const unsigned __int8 *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  unsigned int i; // ebx
  unsigned __int8 v8; // dl
  unsigned int v9; // r11d
  char v10; // dl

  v4 = 8 - a4;
  for ( i = a3 >> 3; i; --i )
  {
    v8 = (a2[1] >> v4) | (*a2 << a4);
    ++a2;
    *a1++ = v8;
  }
  v9 = a3 & 7;
  if ( (a3 & 7) != 0 )
  {
    v10 = *a2 << a4;
    if ( v9 > v4 )
      v10 |= a2[1] >> v4;
    *a1 = ~(255 >> v9) & v10 | (255 >> v9) & *a1;
  }
}
