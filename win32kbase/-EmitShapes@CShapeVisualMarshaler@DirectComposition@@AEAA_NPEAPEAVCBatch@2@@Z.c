char __fastcall DirectComposition::CShapeVisualMarshaler::EmitShapes(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char updated; // al
  char v4; // cl

  if ( (*((_DWORD *)this + 100) & 2) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___(
              this,
              a2,
              (char *)this + 396,
              *((unsigned int *)this + 98));
  v4 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 100) &= ~2u;
    return 1;
  }
  return v4;
}
