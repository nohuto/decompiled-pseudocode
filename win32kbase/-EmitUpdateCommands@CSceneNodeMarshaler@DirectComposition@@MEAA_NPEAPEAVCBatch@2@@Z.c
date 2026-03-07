char __fastcall DirectComposition::CSceneNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 7,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         652,
         653)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 10,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         64,
         654,
         655) )
  {
    return DirectComposition::CSceneNodeMarshaler::EmitSetTransformCommand(this, a2) != 0;
  }
  return v4;
}
