char __fastcall CAtlasedRectsMesh::GetBounds(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r10
  __int64 v4; // rcx
  _OWORD *v5; // rdi
  _OWORD *i; // r11
  char result; // al
  __int64 v8; // r11
  float v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  v4 = a1 + 120;
  if ( *(_BYTE *)(v2 + 136) )
  {
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)v4 = 0;
    v5 = *(_OWORD **)(v2 + 104);
    for ( i = *(_OWORD **)(v2 + 96); i != v5; i = (_OWORD *)(v8 + 16) )
    {
      *(_OWORD *)v9 = *i;
      result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v4, v9);
    }
    *(_BYTE *)(v2 + 136) = 0;
  }
  *a2 = *(_OWORD *)v4;
  return result;
}
