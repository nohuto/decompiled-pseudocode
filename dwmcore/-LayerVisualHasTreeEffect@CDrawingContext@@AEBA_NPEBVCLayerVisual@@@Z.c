bool __fastcall CDrawingContext::LayerVisualHasTreeEffect(CDrawingContext *this, const struct CLayerVisual *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !*((_QWORD *)a2 + 89) && !*((_QWORD *)a2 + 88) )
    return 0;
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(a2)
    && a2 == *(const struct CLayerVisual **)(*(_QWORD *)(v4 + 8056) + 64LL) )
  {
    v5 = *(_QWORD *)(v4 + 208);
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 24) + 32LL))(v5 + 24) != (_QWORD)a2;
  }
  return 1;
}
