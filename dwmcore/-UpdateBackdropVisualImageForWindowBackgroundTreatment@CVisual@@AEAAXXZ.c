void __fastcall CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment(CVisual *this)
{
  CVisual *v1; // r10

  if ( !*((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(this) + 38) )
    CVisual::ClearAllBackdropVisualImages(v1);
}
