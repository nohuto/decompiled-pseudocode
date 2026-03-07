char __fastcall CComponentTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 30 )
    return 1;
  v4 = CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
