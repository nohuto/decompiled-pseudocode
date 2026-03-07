__int64 __fastcall EPATHOBJ::bAddPolygon(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (unsigned int)EPATHOBJ::bMoveTo(this, 0LL, a3) && (unsigned int)EPATHOBJ::bPolyLineTo(this, 0LL, a3 + 1, 3u) )
    return EPATHOBJ::bCloseFigure(this) != 0;
  return v5;
}
