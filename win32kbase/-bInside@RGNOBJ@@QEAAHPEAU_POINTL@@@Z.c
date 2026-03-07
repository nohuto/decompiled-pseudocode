__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rax
  LONG x; // r11d
  LONG y; // ecx
  int v5; // r10d
  unsigned int v6; // edx
  _DWORD *v7; // r8
  LONG v8; // ebx
  int v10; // ecx
  __int64 v11; // rax

  v2 = *(_QWORD *)this;
  x = a2->x;
  if ( a2->x < *(_DWORD *)(*(_QWORD *)this + 56LL) )
    return 1LL;
  y = a2->y;
  if ( y >= *(_DWORD *)(v2 + 68) || x >= *(_DWORD *)(v2 + 64) || y < *(_DWORD *)(v2 + 60) )
    return 1LL;
  v5 = *(_DWORD *)(v2 + 52);
  v6 = 1;
  v7 = *(_DWORD **)(v2 + 32);
  if ( v5 )
  {
    v8 = y;
    do
    {
      --v5;
      if ( v7[1] > v8 )
        break;
      if ( v7[2] > v8 )
      {
        v10 = 0;
        if ( *v7 )
        {
          do
          {
            v11 = v10++;
            if ( v7[v11 + 3] > x )
              return v6;
            v6 ^= 3u;
          }
          while ( v10 != *v7 );
        }
      }
      v7 = (_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
    }
    while ( v5 );
  }
  return v6;
}
