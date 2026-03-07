char __fastcall CComposition::IsTextureMemoryHeatMapEnabled(CComposition *this)
{
  _DWORD *v1; // rcx
  char v2; // r9

  v1 = (_DWORD *)((char *)this + 1112);
  v2 = 0;
  if ( *v1 )
    return *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v1) == 2;
  return v2;
}
