char __fastcall COverlayContext::IsRevokable(__int64 **this, const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 144LL))(*((_QWORD *)a2 + 2)) )
    return COverlayContext::IsFullscreen(this, a2) == 0;
  return v4;
}
