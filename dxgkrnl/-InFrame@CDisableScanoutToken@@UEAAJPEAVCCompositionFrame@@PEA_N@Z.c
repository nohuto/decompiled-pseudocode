__int64 __fastcall CDisableScanoutToken::InFrame(CDisableScanoutToken *this, struct CCompositionFrame *a2, bool *a3)
{
  *((_DWORD *)this + 6) = 3;
  return CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 4), this, a3);
}
