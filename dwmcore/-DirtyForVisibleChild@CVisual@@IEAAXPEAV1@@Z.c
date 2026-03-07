void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2)
{
  CVisual::PropagateFlags((__int64)this, 0x11u);
  CVisual::PropagateFlags((__int64)a2, 4u);
  CVisual::NotifyMidManipulationUpdate(this, 2LL, a2);
}
