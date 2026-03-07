char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CGlobalDCompVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGlobalDCompVisualMarshaler::EmitSetDCompVisualHandleCommand(this, a2) )
    return DirectComposition::CGlobalDCompVisualMarshaler::EmitSetBackgroundColorCommand(this, a2) != 0;
  return v4;
}
