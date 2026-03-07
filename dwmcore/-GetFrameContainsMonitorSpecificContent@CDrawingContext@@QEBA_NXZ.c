bool __fastcall CDrawingContext::GetFrameContainsMonitorSpecificContent(CDrawingContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 8093) )
    return *((_DWORD *)g_pComposition + 108) != 0;
  return v1;
}
