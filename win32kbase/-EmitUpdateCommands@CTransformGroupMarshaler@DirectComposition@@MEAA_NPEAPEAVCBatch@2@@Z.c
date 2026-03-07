bool __fastcall DirectComposition::CTransformGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
    return (unsigned __int8)DirectComposition::CResourceMarshalerArrayBase::Marshal(
                              (char *)this + 72,
                              a2,
                              *((unsigned int *)this + 8),
                              (char *)this + 16,
                              128,
                              696,
                              697) != 0;
  return v4;
}
