char BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140D81184;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140D81188 )
  {
    dword_140D81188 = v0;
    LOBYTE(v0) = BvgaUpdateProgressBar(v0);
  }
  return v0;
}
