char __fastcall CCompositionSkyBoxBrush::IsReadyToDraw(
        CCompositionSkyBoxBrush *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  char result; // al
  __int64 v4; // rdx

  result = 0;
  *a3 = 0;
  v4 = *((_QWORD *)this + 11);
  if ( v4 && *(int *)(v4 + 120) >= 0 && (!*(_BYTE *)(v4 + 168) || *(int *)(v4 + 120) < 6) )
    return 1;
  return result;
}
