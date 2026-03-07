bool __fastcall CRectangleGeometry::IsSupportedForCpuClipping(CRectangleGeometry *this, bool *a2)
{
  bool result; // al
  bool v3; // r10
  char v5; // dl
  bool v6; // r8

  result = 0;
  v3 = 0;
  v5 = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0;
  if ( !*((_BYTE *)this + 196) )
  {
    v6 = *((float *)this + 42) > 0.0 && *((float *)this + 43) > 0.0
      || *((float *)this + 46) > 0.0 && *((float *)this + 47) > 0.0
      || *((float *)this + 44) > 0.0 && *((float *)this + 45) > 0.0;
    v5 |= v6;
  }
  if ( !v5 )
    goto LABEL_10;
  if ( CCommonRegistryData::m_flCpuClipFlatteningTolerance > 0.0 )
  {
    if ( !*((_BYTE *)this + 200) )
    {
LABEL_10:
      result = 1;
      goto LABEL_11;
    }
    if ( CCommonRegistryData::LayerClippingMode != 1 )
    {
      v3 = CCommonRegistryData::LayerClippingMode == 2;
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( a2 )
    *a2 = v3;
  return result;
}
