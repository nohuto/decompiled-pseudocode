__int64 __fastcall Win81::SatisfyMinResolutionBarForScaleIdx(
        Win81 *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const a4)
{
  int v4; // eax
  int v5; // r8d
  _DWORD *v6; // r10
  int v7; // ecx
  bool v8; // cc
  unsigned int v9; // r11d
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  __int64 v13; // r9
  struct tagSIZE v15; // [rsp+38h] [rbp+10h]
  struct tagSIZE v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = a3;
  v4 = a2;
  v5 = (int)this;
  if ( (int)a2 >= SHIDWORD(a2) )
    LODWORD(a2) = HIDWORD(a2);
  else
    v4 = HIDWORD(a2);
  v6 = dword_1C009A2D0;
  if ( (int)this >= 0 )
  {
    v7 = 4;
    v8 = v5 <= 4;
    if ( v5 <= 4 )
    {
      if ( v5 <= 0 )
        return (unsigned int)v6[v5];
      v8 = v5 <= 4;
    }
    if ( v8 )
      v7 = v5;
    v9 = 100 * v4;
    v10 = v7;
    v11 = 100 * a2;
    do
    {
      v12 = v6[v10];
      v15.cx = v9 / v12;
      v15.cy = v11 / v12;
      v16 = v15;
      if ( Win81::operator>=(&v16, dword_1C008CA08) )
        break;
      --v5;
      v10 = v13 - 1;
    }
    while ( v10 > 0 );
  }
  else
  {
    v5 = 0;
  }
  return (unsigned int)v6[v5];
}
