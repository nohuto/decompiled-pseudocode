char __fastcall DirectComposition::CHolographicDisplayMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CHolographicDisplayMarshaler::EmitCreate(this, a2)
    && DirectComposition::CHolographicDisplayMarshaler::EmitFlags(this, a2) )
  {
    return DirectComposition::CHolographicDisplayMarshaler::EmitDebugOverlayFlags(this, a2) != 0;
  }
  return v4;
}
