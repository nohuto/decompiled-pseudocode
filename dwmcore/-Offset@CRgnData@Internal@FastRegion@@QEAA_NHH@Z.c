char __fastcall FastRegion::Internal::CRgnData::Offset(FastRegion::Internal::CRgnData *this, int a2, int a3)
{
  int v3; // edi
  int v7; // esi
  _DWORD *v8; // r9
  int v9; // r14d
  int v10; // ecx
  int v11; // r11d
  __int64 v12; // rdx
  int v13; // r15d
  __int64 v14; // r8
  __int64 v16; // r11
  _DWORD *i; // rcx

  v3 = *((_DWORD *)this + 1);
  v7 = *((_DWORD *)this + 2);
  v8 = (_DWORD *)((char *)this + 12);
  v9 = *((_DWORD *)this + 3);
  v10 = v3 + a2;
  v11 = v7 + a2;
  v12 = 0LL;
  v13 = v9 + a3;
  v14 = *(int *)this - 1LL;
  if ( a2 <= 0 )
  {
    if ( v10 > v3 )
      return 0;
  }
  else if ( v11 < v7 )
  {
    return 0;
  }
  if ( a3 <= 0 )
  {
    if ( v13 > v9 )
      return 0;
  }
  else if ( *((_DWORD *)this + 2 * v14 + 3) + a3 < *((_DWORD *)this + 2 * v14 + 3) )
  {
    return 0;
  }
  *((_DWORD *)this + 1) = v10;
  *((_DWORD *)this + 2) = v11;
  if ( v14 > 0 )
  {
    do
    {
      *v8 += a3;
      v16 = (__int64)v8 + v8[3] + 8;
      for ( i = (_DWORD *)((char *)v8 + (int)v8[1]); i != (_DWORD *)v16; ++i )
        *i += a2;
      ++v12;
      v8 += 2;
    }
    while ( v12 < v14 );
  }
  *((_DWORD *)this + 2 * v14 + 3) += a3;
  return 1;
}
