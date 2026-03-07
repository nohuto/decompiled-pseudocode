char __fastcall DirectComposition::CTextVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 47,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 112,
         2,
         688,
         689)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 50,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 112,
         4,
         690,
         691) )
  {
    return DirectComposition::CResourceMarshalerArrayBase::Marshal(
             (_QWORD *)this + 53,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 112,
             8,
             692,
             693);
  }
  return v4;
}
