void __fastcall CBspPreComputeHelper::PopStacksForBspChildVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  CVisual *v2; // r11
  int *v3; // r10
  __int64 v4; // r11
  int v5; // eax

  v2 = a2;
  if ( (*((_BYTE *)a2 + 101) & 0x20) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop((int *)this + 72);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(CVisual::GetOpacityInternal(v2) - 1.0) & _xmm) >= 0.0000011920929 )
    CWatermarkStack<float,64,2,10>::Pop(v3 + 64);
  if ( (*(_BYTE *)(v4 + 104) & 0x10) != 0 )
    CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Pop(v3 + 56);
  if ( (*(_BYTE *)(v4 + 104) & 8) != 0 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 48);
  if ( (*(_BYTE *)(v4 + 104) & 2) != 0 )
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop(v3 + 40);
  if ( (*(_BYTE *)(v4 + 104) & 0x40) != 0 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(v3 + 32);
  v5 = v3[24];
  if ( v5 )
    v3[24] = v5 - 1;
  CWatermarkStack<unsigned int,64,2,10>::Pop(v3 + 80);
}
