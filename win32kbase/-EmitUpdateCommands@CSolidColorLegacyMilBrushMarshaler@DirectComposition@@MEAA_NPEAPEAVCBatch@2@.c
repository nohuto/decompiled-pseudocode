char __fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CSolidColorLegacyMilBrushMarshaler::EmitSetColorCommand(this, a2) != 0;
  return v4;
}
