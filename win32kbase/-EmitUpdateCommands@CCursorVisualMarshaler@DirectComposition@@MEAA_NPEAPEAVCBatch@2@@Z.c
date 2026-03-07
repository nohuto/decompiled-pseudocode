char __fastcall DirectComposition::CCursorVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitSetCursorIdCommand(this, a2) )
  {
    return DirectComposition::CCursorVisualMarshaler::EmitSetIsHardwareCursorEnabledCommand(this, a2) != 0;
  }
  return v4;
}
