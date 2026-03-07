_BOOL8 __fastcall vSpDwmMigrateLSurfShapeReferenceWrap(_QWORD *a1, SFMLOGICALSURFACE *this, __int64 a3)
{
  _BOOL8 result; // rax

  result = SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
  if ( a3 )
    return SFMLOGICALSURFACE::SetShape(this, a1, (struct _SURFOBJ *)(a3 + 24));
  return result;
}
