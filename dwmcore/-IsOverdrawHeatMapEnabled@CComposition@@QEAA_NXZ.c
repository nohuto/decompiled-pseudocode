char __fastcall CComposition::IsOverdrawHeatMapEnabled(CComposition *this)
{
  _DWORD *v1; // rcx
  char v2; // cl
  _DWORD *TopByReference; // rax

  v1 = (_DWORD *)((char *)this + 1112);
  if ( !*v1 )
    return 0;
  TopByReference = (_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v1);
  v2 = 1;
  if ( *TopByReference != 1 )
    return 0;
  return v2;
}
