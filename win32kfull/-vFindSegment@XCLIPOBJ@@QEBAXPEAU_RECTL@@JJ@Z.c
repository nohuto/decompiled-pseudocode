void __fastcall XCLIPOBJ::vFindSegment(XCLIPOBJ *this, struct _RECTL *a2, LONG a3)
{
  _DWORD *v3; // r11
  __int64 v4; // r9
  LONG v7; // edx
  LONG v8; // r8d

  v3 = (_DWORD *)*((_QWORD *)this + 10);
  v4 = 0LL;
  if ( *v3 )
  {
    while ( 1 )
    {
      v7 = v3[v4 + 3];
      if ( a3 >= v7 )
      {
        v8 = v3[(unsigned int)(v4 + 1) + 3];
        if ( a3 < v8 )
          break;
      }
      v4 = (unsigned int)(v4 + 2);
      if ( (_DWORD)v4 == *v3 )
        return;
    }
    if ( v7 <= *((_DWORD *)this + 1) )
      v7 = *((_DWORD *)this + 1);
    if ( v8 >= *((_DWORD *)this + 3) )
      v8 = *((_DWORD *)this + 3);
    if ( v7 < v8 )
    {
      a2->left = v7;
      a2->right = v8;
    }
  }
}
