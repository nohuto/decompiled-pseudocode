void __fastcall Win81::CalculateMinMaxOverride(Win81 *this, __int64 a2, struct tagSIZE a3, int *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r8d
  unsigned int v6; // r11d
  unsigned int v7; // ecx
  int v8; // r8d
  _DWORD *v9; // r9
  unsigned int v10; // r10d
  int v11; // [rsp+3Ch] [rbp+14h]
  __int64 v12; // [rsp+40h] [rbp+18h]
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v11 = HIDWORD(a2);
  *(_DWORD *)a3.cx = 0;
  *a4 = 0;
  v4 = 0LL;
  while ( dword_1C009A2D0[v4] != (_DWORD)this )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 5 )
      return;
  }
  *(_DWORD *)a3.cx = -(int)v4;
  v5 = 4;
  if ( (unsigned int)v4 < 4 )
  {
    v6 = 100 * a2;
    while ( 1 )
    {
      v7 = dword_1C009A2D0[v5];
      LODWORD(v12) = v6 / v7;
      HIDWORD(v12) = 100 * v11 / v7;
      v13 = v12;
      if ( Win81::operator>=(&v13, dword_1C008CA08) )
        break;
      v5 = v8 - 1;
      if ( v5 <= v10 )
        return;
    }
    *v9 = v8 - v10;
  }
}
