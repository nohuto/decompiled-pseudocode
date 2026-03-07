__int64 __fastcall XCLIPOBJ::bFindNextSegment(XCLIPOBJ *this)
{
  struct _POINTL *v1; // r9
  int v2; // r8d
  unsigned int v4; // ecx
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // edx

  v1 = (struct _POINTL *)*((_QWORD *)this + 18);
  v2 = 0;
  v4 = *((_DWORD *)this + 24);
  if ( (v1[3].x & 0x400000) != 0 )
  {
    if ( v4 >= *((_DWORD *)this + 26) )
      return 0LL;
  }
  else if ( !v4 )
  {
    return 0LL;
  }
  v6 = *((_DWORD *)this + 25) + v4;
  v7 = *((_QWORD *)this + 10);
  *((_DWORD *)this + 24) = v6;
  v8 = *(_DWORD *)(v7 + 4LL * (int)v6 + 12);
  LOBYTE(v2) = v8 > v1[18].x;
  if ( (((unsigned int)v1[3].x >> 22) & 1) == v2 )
    return 0LL;
  XCLIPOBJ::bIntersectWall(this, v8, 0LL, v1 + 16, &v1[3].y);
  return 1LL;
}
