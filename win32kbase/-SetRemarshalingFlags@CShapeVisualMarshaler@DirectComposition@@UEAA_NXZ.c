char __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  char result; // al
  _DWORD *v3; // rdx

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  v3 = (_DWORD *)((char *)this + 400);
  if ( *((_QWORD *)this + 47) )
  {
    *v3 |= 1u;
    result = 1;
  }
  if ( *((_DWORD *)this + 98) )
  {
    *v3 |= 2u;
    result = 1;
    *((_DWORD *)this + 99) = 0;
  }
  return result;
}
