__int64 __fastcall bPolyPolygon(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _POINTL *a3,
        int *a4,
        unsigned int a5,
        int a6)
{
  int *v6; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // rdi

  v6 = a4;
  if ( !a5 )
    return 1LL;
  v12 = (unsigned __int64)&a4[a5];
  while ( 1 )
  {
    v13 = *v6;
    a6 -= v13;
    if ( a6 < 0 || (int)v13 < 2 )
      break;
    if ( !(unsigned int)EPATHOBJ::bMoveTo(this, a2, a3)
      || !(unsigned int)EPATHOBJ::bPolyLineTo(this, a2, a3 + 1, (int)v13 - 1)
      || !(unsigned int)EPATHOBJ::bCloseFigure(this) )
    {
      return 0LL;
    }
    ++v6;
    a3 += v13;
    if ( (unsigned __int64)v6 >= v12 )
      return 1LL;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
