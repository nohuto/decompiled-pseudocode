CMeshGeometry2D *__fastcall CMeshGeometry2D::`vector deleting destructor'(CMeshGeometry2D *this, char a2)
{
  CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::~CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
