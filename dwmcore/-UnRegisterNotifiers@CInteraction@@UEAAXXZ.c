void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  ReleaseInterface<CWeakReference<CVisual>>((__int64 *)this + 14);
}
