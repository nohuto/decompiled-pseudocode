bool __fastcall DirectComposition::CVisualGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  return DirectComposition::CResourceMarshalerArrayBase::Marshal(
           (_QWORD *)this + 7,
           a2,
           *((_DWORD *)this + 8),
           (_DWORD *)this + 4,
           32,
           704,
           705);
}
