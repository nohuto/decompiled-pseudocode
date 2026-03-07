struct CContactState *__fastcall CPTPEngine::FindOrAssignPrimary(CPTPEngine *this, struct PTPInput *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned int v5; // r11d
  unsigned int v6; // esi
  _DWORD *v7; // r10
  int v8; // eax

  v2 = *((_DWORD *)a2 + 12);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( v2 )
  {
    v6 = *((_DWORD *)this + 4);
    v7 = (_DWORD *)((char *)a2 + 68);
    do
    {
      v8 = *((_DWORD *)this + 100 * (*(v7 - 2) % v6) + 302);
      if ( (v8 & 1) != 0 && (v8 & 0x400) == 0 )
      {
        if ( (*v7 & 0x2000) != 0 )
          return (CPTPEngine *)((char *)this + 400 * (*(v7 - 2) % v6) + 1208);
        if ( !v4 )
          v4 = (_DWORD *)((char *)this + 400 * (*(v7 - 2) % v6) + 1208);
      }
      ++v5;
      v7 += 24;
    }
    while ( v5 < v2 );
    if ( v4 )
    {
      *v4 |= 0x80000000;
      return (struct CContactState *)v4;
    }
  }
  return (struct CContactState *)v3;
}
