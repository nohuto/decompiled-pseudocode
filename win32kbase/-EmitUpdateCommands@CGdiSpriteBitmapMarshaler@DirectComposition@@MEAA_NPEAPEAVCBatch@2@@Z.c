char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 7,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         506,
         507,
         0x10uLL)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetPixelFormatCommand(this, a2)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetDirtyFromAccumulationCommand(this, a2)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetSurfaceCommand(this, a2) )
  {
    return DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetMarginsCommand(this, a2) != 0;
  }
  return v4;
}
