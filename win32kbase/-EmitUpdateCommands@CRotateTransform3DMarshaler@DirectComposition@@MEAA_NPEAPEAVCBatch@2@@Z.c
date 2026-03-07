char __fastcall DirectComposition::CRotateTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CRotateTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAngleCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAxisXCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAxisYCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetAxisZCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetCenterXCommand(this, a2)
    && DirectComposition::CRotateTransform3DMarshaler::EmitSetCenterYCommand(this, a2) )
  {
    return DirectComposition::CRotateTransform3DMarshaler::EmitSetCenterZCommand(this, a2) != 0;
  }
  return v4;
}
