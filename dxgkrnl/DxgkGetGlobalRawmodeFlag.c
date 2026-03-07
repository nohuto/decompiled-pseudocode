bool DxgkGetGlobalRawmodeFlag()
{
  return *((_BYTE *)CCD_BTL::Global() + 152) != 0;
}
