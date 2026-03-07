char __fastcall DirectComposition::CAtlasedRectsGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CAtlasedRectsGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CAtlasedRectsGroupMarshaler::EmitSetImageSourceCommand(this, a2) )
    return DirectComposition::CResourceMarshalerArrayBase::Marshal(
             (_QWORD *)this + 8,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             64,
             488,
             489);
  return v4;
}
