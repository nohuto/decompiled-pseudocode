const struct D3DDDI_HDR_METADATA_HDR10PLUS *__fastcall CIFlipPresentHistoryTokenFlipManager::GetHDRMetaDataHDR10Plus(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(const struct D3DDDI_HDR_METADATA_HDR10PLUS **)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 16LL);
}
