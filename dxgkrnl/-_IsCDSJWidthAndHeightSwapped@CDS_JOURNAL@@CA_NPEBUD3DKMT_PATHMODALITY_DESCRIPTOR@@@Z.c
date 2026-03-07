bool __fastcall CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1 + 33);
  if ( (unsigned int)(v1 - 5) <= 0xB )
    v1 = (v1 - 1) % 4 + 1;
  if ( (*(_DWORD *)a1 & 0x200LL) == 0 )
    return 0;
  if ( v1 == 2 )
    return 1;
  return v1 == 4;
}
