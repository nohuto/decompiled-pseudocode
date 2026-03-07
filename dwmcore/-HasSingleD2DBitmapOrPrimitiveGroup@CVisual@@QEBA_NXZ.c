char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroup(CVisual *this)
{
  __int64 v1; // r11
  char v2; // bl

  v2 = 0;
  if ( !CVisual::HasProjectedShadowReceivers(this) )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 352LL))(v1) != 0;
  return v2;
}
