char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CHolographicCompositionMarshaler::EmitCreate(this, a2) )
  {
    return DirectComposition::CHolographicCompositionMarshaler::EmitSetQualityLevel(this, a2) != 0;
  }
  return v4;
}
