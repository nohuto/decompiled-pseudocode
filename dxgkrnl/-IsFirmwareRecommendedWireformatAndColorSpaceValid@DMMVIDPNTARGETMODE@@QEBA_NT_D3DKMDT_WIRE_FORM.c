bool __fastcall DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
        DMMVIDPNTARGETMODE *this,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a2,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE a3)
{
  UINT v3; // edx
  unsigned int v5; // ebx
  int v6; // eax

  v3 = a2.Value & 0xFFFFFFFC;
  if ( ((v3 - 1) & v3) != 0 || (v3 & *((_DWORD *)this + 32)) == 0 )
    return 0;
  v5 = ((v3 | ((v3 | ((v3 | ((v3 | (v3 >> 6)) >> 6)) >> 6)) >> 6)) >> 2) & 0x3F;
  if ( a3
    && a3 != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
    && (!*((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) || a3 != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P2020)
    && a3 != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_HDR10PLUS )
  {
    return 0;
  }
  if ( v5 <= 0x10 )
  {
    v6 = 65814;
    if ( _bittest(&v6, v5) )
      return 1;
  }
  return v5 == 32;
}
