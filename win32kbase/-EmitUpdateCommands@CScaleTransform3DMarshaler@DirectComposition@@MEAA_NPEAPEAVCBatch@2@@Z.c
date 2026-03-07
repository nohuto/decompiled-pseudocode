char __fastcall DirectComposition::CScaleTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CScaleTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleXCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleYCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleZCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterXCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterYCommand(this, a2) )
  {
    return DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterZCommand(this, a2) != 0;
  }
  return v4;
}
