bool __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // r10
  bool result; // al

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  result = 0;
  if ( BspPolygonList )
    return *(_DWORD *)(BspPolygonList + 24) != 0;
  return result;
}
