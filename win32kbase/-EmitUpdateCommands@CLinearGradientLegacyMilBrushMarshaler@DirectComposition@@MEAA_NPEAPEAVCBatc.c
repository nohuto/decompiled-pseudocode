char __fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGradientLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitSetStartPointCommand(this, a2) )
  {
    return DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitSetEndPointCommand(this, a2) != 0;
  }
  return v4;
}
