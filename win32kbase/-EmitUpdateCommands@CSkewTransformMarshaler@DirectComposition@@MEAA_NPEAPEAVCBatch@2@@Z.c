char __fastcall DirectComposition::CSkewTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CSkewTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetAngleXCommand(this, a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetAngleYCommand(this, a2)
    && DirectComposition::CSkewTransformMarshaler::EmitSetCenterXCommand(this, a2) )
  {
    return DirectComposition::CSkewTransformMarshaler::EmitSetCenterYCommand(this, a2) != 0;
  }
  return v4;
}
