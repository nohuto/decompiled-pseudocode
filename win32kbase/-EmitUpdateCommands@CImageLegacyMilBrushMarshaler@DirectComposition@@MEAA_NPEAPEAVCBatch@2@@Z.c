char __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CImageLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewportUnitsCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewboxUnitsCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewportCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewportAnimationCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewboxCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewboxAnimationCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetStretchCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetTileModeCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetAlignmentXCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetAlignmentYCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetCachingHintCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetCacheInvalidationThresholdMinimumCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetCacheInvalidationThresholdMaximumCommand(this, a2) )
  {
    return DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetImageSourceCommand(this, a2) != 0;
  }
  return v4;
}
