char __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetColorInterpolationModeCommand(this, a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetMappingModeCommand(this, a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetSpreadMethodCommand(this, a2) )
  {
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 13,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             4096,
             519,
             520,
             0x18uLL);
  }
  return v4;
}
