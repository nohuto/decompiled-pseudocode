char __fastcall CTransformGroupGeneratedT<CTransformGroup,CTransform>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 189 )
    return 1;
  v2 = CTransformGeneratedT<CTransform,CTransform3D>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
