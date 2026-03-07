char __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::EmitUpdateCommands(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CAtlasedRectsMeshMarshaler::EmitSetIsHitTestVisibleCommand(this, a2)
    && DirectComposition::CAtlasedRectsMeshMarshaler::EmitSetOpacityCommand(this, a2)
    && DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 8,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         128,
         492,
         493,
         0x10uLL) )
  {
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 11,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             256,
             494,
             495,
             0x10uLL);
  }
  return v4;
}
