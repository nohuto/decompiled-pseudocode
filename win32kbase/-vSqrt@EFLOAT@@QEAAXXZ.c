void __fastcall EFLOAT::vSqrt(EFLOAT *this)
{
  unsigned int v1; // ebx
  int v3; // edx
  int v4; // r9d
  __int64 v5; // rsi
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // eax

  v1 = 0;
  v3 = (unsigned __int8)(*(_DWORD *)this >> 23);
  v4 = 0;
  v5 = 24LL;
  v6 = (*(_DWORD *)this & 0x7FFFFF | 0x800000) << 8;
  v7 = ((unsigned int)!(((_BYTE)v3 - 1) & 1) + v3 + 126) >> 1;
  if ( (((_BYTE)v3 - 1) & 1) == 0 )
    v6 = (*(_DWORD *)this & 0x7FFFFF | 0x800000) << 7;
  do
  {
    v8 = 4 * v4 + 1;
    v9 = (4 * v1) | (v6 >> 30);
    v6 *= 4;
    v10 = 2 * v4;
    v4 = 2 * v4 + 1;
    if ( v8 > v9 )
      v4 = v10;
    v1 = v9 - v8;
    if ( v8 > v9 )
      v1 = v9;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)this = (v7 << 23) | v4 & 0x7FFFFF;
}
