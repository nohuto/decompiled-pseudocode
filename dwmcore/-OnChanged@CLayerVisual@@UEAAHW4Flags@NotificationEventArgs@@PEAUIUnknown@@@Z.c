__int64 __fastcall CLayerVisual::OnChanged(CLayerVisual *a1, int a2, __int64 a3)
{
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(a1);
  return CVisual::OnChanged(a1, a2, a3);
}
