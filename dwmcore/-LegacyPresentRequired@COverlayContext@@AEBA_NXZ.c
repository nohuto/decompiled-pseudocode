char __fastcall COverlayContext::LegacyPresentRequired(COverlayContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 914) == *((_QWORD *)this + 913)
    && *((_BYTE *)this + 11024)
    && !*((_BYTE *)this + 11025)
    && (*((int *)this + 2821) < 2200 || *((_BYTE *)this + 11300) || (*((_DWORD *)this + 14) & 0x40000) == 0) )
  {
    return 1;
  }
  return v1;
}
